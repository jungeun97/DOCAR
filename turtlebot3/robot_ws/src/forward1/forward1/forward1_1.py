import json
import websocket
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist, Vector3
from math import pi
import threading

class MoveForward(Node):
    def __init__(self):
        super().__init__('move_forward')
        self.publisher_ = self.create_publisher(Twist, '/cmd_vel', 10)
        self.linear_speed_ = 0.2
        self.distance_ = 0.0
        self.distance_target_ = 0.05
        
        # coodinates
        self.startx = 0.8
        self.starty = 0.2
        self.endx = 0.05
        self.endy = 0.33
        self.xbookshelf3 = 0.3
        self.ybookshelf3 = 0.3
        
    def move_to_bookshelf(self, index):
        # 원하는 대로 bookshelf_index에 따른 로봇의 움직임을 설정
        if index == 0:  # return
            self.distance_target_ = 3
            self.linear_speed_ = -0.15
        elif index == 1 or index == 4:
            self.distance_target_ = 1.5
            # self.linear_speed_ = -0.1
        # elif index == 2 or index == 5:
        #     self.distance_target_ = 0.03
        #     self.linear_speed_ = -0.1
        elif index == 3 or index == 6:
            self.distance_target_ = 1.5
        #     self.linear_speed_ = -0.1
        # elif index == 99:
        #     self.distance_target_ = 0.03
        #     self.linear_speed_ = -0.1
        else:
            self.distance_target_ = 0
        print("move_to_boookshekf", self.distance_target_)
        
        # 이동 시작
        self.timer = self.create_timer(0.01, self.move_callback)

    def move_callback(self):
        move_cmd = Twist()
        move_cmd.linear.x = self.linear_speed_
        move_cmd.angular = Vector3(x=0.0, y=0.0, z=0.0)
        self.publisher_.publish(move_cmd)
        if self.linear_speed_ < 0:
            self.distance_ += (-self.linear_speed_) * 0.01
        else:
            self.distance_ += self.linear_speed_ * 0.01
        if self.distance_ >= self.distance_target_:
            self.linear_speed_ = 0.2
            self.stop_moving()

    def stop_moving(self):
        move_cmd = Twist()
        move_cmd.linear.x = 0.0
        move_cmd.angular.z = 0.0
        self.distance_ = 0.0    # reset
        self.publisher_.publish(move_cmd)
        self.get_logger().info('Reached the target distance. Stopping the robot...')
        # self.linear_speed_ = 0
        if self.timer:
            self.timer.cancel()

def main(args=None):
    
    rclpy.init(args=args)
    move_forward = MoveForward()

    def run_ros():
        rclpy.spin(move_forward)
    
    def on_message(ws, message):

        data = json.loads(message)
        if data:
            bookshelf_index = data['bookShelfIndex']
            print('Received message:', bookshelf_index)

            move_forward.move_to_bookshelf(bookshelf_index)
    # move_forward.move_to_bookshelf(1)
    # def on_message(ws, message):
        
    #     data = json.loads(message)
    #     bookshelf_index = data['bookShelfIndex']
    #     print('Received message:', bookshelf_index)

    #     # 웹소켓 메시지에 따라 로봇 움직이기

    #     move_forward.move_to_bookshelf(bookshelf_index)
    #     rclpy.spin_once(move_forward)
    #     # rclpy.spin(move_forward)

    #     # 웹소켓 메시지에 따라 로봇 움직이기
    #     move_forward.move_to_bookshelf(bookshelf_index)
    #     # while move_forward.distance_ < move_forward.distance_target_:


    def on_error(ws, error):
        print(f"WebSocket error: {error}")

    def on_close(ws):
        print("WebSocket is closed")

    def on_open(ws):
        print("WebSocket 연결됨")

    # 웹 소켓 설정.
    ws = websocket.WebSocketApp("wss://k8d101.p.ssafy.io/api/ws",
                                on_message=on_message,
                                on_error=on_error,
                                on_close=on_close)
    # websocket check.
    ws.on_open = on_open

    thread_ros = threading.Thread(target=run_ros)
    thread_ros.start()

    # websockter run.
    ws.run_forever()
    move_forward.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
