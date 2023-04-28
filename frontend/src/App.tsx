import React, { useEffect, useState } from 'react';
import MainPage from './Presentational/Pages/MainPage';
import './App.css';
import Router from './Router';
import io from 'socket.io-client';
import socket from './socket';


function App() {
  const [data, setData] = useState(null);

  useEffect(() => {

    socket.on('connect', () => {
      console.log('connected to server');
    });

    socket.on('disconnect', () => {
      console.log('disconnected from server');
    });
    
    
    // 소켓 이벤트 리스너 등록
    socket.on('barcode', (barcodeData) => {
      setData(barcodeData);
    });

    // 컴포넌트 unmount 시, 소켓 이벤트 리스너 제거
    return () => {
      socket.off('barcode');
    };
  }, []);

  return (
    <div>
      {data ? (
        <div>
          <h1>Barcode Data</h1>
          <p>{data}</p>
        </div>
      ) : (
        <p>No data yet.</p>
      )}
    </div>
  );
}



export default App;
