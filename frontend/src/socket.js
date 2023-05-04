export const socket = new WebSocket('wss://k8d101.p.ssafy.io/api/ws');

socket.onopen = () => {
  console.log('WebSocket 연결됨.');
};

socket.onclose = () => {
  console.log('WebSocket 연결 종료됨.');
};
