import io from 'socket.io-client';

const socket = io('http://172.20.10.3:3001'); // 라즈베리파이 IP 주소에 맞게 수정

export default socket;
