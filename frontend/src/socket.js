import io from 'socket.io-client';

const socket = io('https://172.20.10.2');

socket.on('connect', () => {
  console.log('connected to server');
});

socket.on('disconnect', () => {
  console.log('disconnected from server');
});

export default socket;
