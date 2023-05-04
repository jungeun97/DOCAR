export const socket = new WebSocket('ws://k8d101.p.ssafy.io:8080/api/ws');

socket.onopen = () => {
  console.log('WebSocket 연결됨.');
};

socket.onclose = () => {
  console.log('WebSocket 연결 종료됨.');
};
