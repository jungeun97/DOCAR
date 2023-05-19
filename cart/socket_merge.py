import sys
sys.path.append('/home/pi/.local/lib/python3.9/site-packages')
import RPi.GPIO as GPIO
import time
import websocket
import json
import math
import threading
import board
import neopixel
import serial
from time import sleep

pixel_pin = board.D18
pixels = neopixel.NeoPixel(board.D18, 100)

GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)

TRIG = 23
ECHO = 24
print("초음파 거리 측정기")

GPIO.setup(TRIG, GPIO.OUT)
GPIO.setup(ECHO, GPIO.IN)

GPIO.output(TRIG, False)
print("초음파 출력 초기화")
time.sleep(2)

distance = 0

def read_sensor(ws):
    
    while True:
        ser = serial.Serial('/dev/ttyACM0', 9600, timeout=0.5)
        ser.flushInput()
        sleep(0.5)
        #input_line = str(input())  # 바코드 값을 읽어옵니다.
        barcode = ser.readline().decode('utf-8').rstrip('\r\n')
        
        GPIO.output(TRIG, True)
        time.sleep(0.00001)  # 10uS의 펄스 발생을 위한 딜레이
        GPIO.output(TRIG, False)

        while GPIO.input(ECHO) == 0:
            start = time.time()  # Echo핀 상승 시간값 저장

        while GPIO.input(ECHO) == 1:
            stop = time.time()  # Echo핀 하강 시간값 저장

        check_time = stop - start
        distance = math.ceil(check_time * 34300 / 2)
        #print(f"Distance: {distance:.0f} cm / Barcode: {input_line}")  # 읽어온 바코드 값과 초음파 거리를 함께 출력합니다.
        time.sleep(0.4)
        if barcode:
            barcodes = barcode.split('\r')
            for single_barcode in barcodes:
                print(f"바코드 스캔 결과: {single_barcode}")
                ws.send(json.dumps({"distance": distance, "barcode": single_barcode}))
        # WebSocket으로 데이터 전송
        #ws.send(json.dumps({"distance": distance, "barcode": input_line}))

def on_message(ws, message):
    print(f"WebSocket 메시지 수신: {message}")
    data = json.loads(message)
    if len(data) > 2:
        if data['bookShelfIndex']:
            run_neopixel(data)
        else:
            pixels.fill((0, 0, 0))

def on_error(ws, error):
    print(f"WebSocket error: {error}")
    pixels.fill((0, 0, 0))
    reconnect_websocket();

def on_close(ws):
    print("WebSocket is closed")
    pixels.fill((0, 0, 0))

def on_open(ws):
    print("WebSocket 연결됨")

    # 센서 데이터를 읽고 전송하는 작업을 별도의 스레드에서 실행
    sensor_thread = threading.Thread(target=read_sensor, args=(ws,))
    sensor_thread.daemon = True
    sensor_thread.start()

def run_neopixel(data):
    cartbooks = data['depthList']
    cart = data['indexList']
    cartbookss = []
    sum = 0

    for i in cartbooks:
        sum += i / 10 * 0.9
        cartbookss.append(sum)

    # LED 초기화 - 모든 LED를 끄도록 설정
    pixels.fill((0, 0, 0))

    sx = None  # sx 초기값 설정
    sy = None  # sy 초기값 설정

    for index in cart:
        if index < len(cartbookss):
            if index == 0:
                sx = 0
            else:
                sx = int(cartbookss[index - 1] / 0.7)
            sy = int(cartbookss[index] / 0.7)
            print(sx, sy)
            for start in range(sx, sy):
                pixels[start+3] = (2, 0, 0)
                 
def reconnect_websocket():
    while True:
        try:
            print("재연결 시도 중...")
            # 적절한 웹소켓 URL로 연결 설정
            ws = websocket.WebSocketApp("wss://k8d101.p.ssafy.io/api/ws",
                                        on_message=on_message,
                                        on_error=on_error,
                                        on_close=on_close)
            ws.on_open = on_open
            ws.run_forever()
            break  # 재연결이 성공했을 때 루프 종료
        except Exception as e:
            print(f"재연결 실패: {e}")
            time.sleep(5)  # 일정 시간 대기 후 재시도

if __name__ == "__main__":
    try:
        ws = websocket.WebSocketApp("wss://k8d101.p.ssafy.io/api/ws",
                                    on_message=on_message,
                                    on_error=on_error,
                                    on_close=on_close)
        ws.on_open = on_open
        ws.run_forever()
    except KeyboardInterrupt: 
        pixels.fill((0, 0, 0))