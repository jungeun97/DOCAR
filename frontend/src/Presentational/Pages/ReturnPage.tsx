import React, { useEffect, useState } from 'react';
import ReturnBooks from '../Components/Return/ReturnBooks';
import ReturnQrcode from '../Components/Return/ReturnQrcode';
import { useRecoilState, useRecoilValue } from 'recoil';
import {
  barcodeNumState,
  distanceState,
  isReturnState,
} from '../../store/atoms';
import { socket } from '../../socket';

function ReturnPage() {
  const [isReturn, setIsReturn] = useRecoilState(isReturnState);
  const [barcodeNum, setBarcodeNum] = useRecoilState(barcodeNumState);
  const [distance, setDistance] = useRecoilState(distanceState);

  useEffect(() => {
    const handleMessage = (event: any) => {
      const data = JSON.parse(event.data);
      console.log('현재 거리는:', data.distance);
      if (data.barcode !== barcodeNum) {
        setBarcodeNum(data.barcode);
      }
      if (data.distance !== distance) {
        setDistance(data.distance);
      }
      setIsReturn(true);
    };

    socket.onmessage = handleMessage;

    return () => {
      socket.removeEventListener('message', handleMessage);
    };
  }, [barcodeNum, distance]);

  useEffect(() => {
    console.log(`현재 책의 바코드: ${barcodeNum}`);
  }, [barcodeNum]);

  const testBarcode = () => {
    setBarcodeNum(9788994796871);
    setDistance(10);
    setIsReturn(true);
  };

  if (isReturn && barcodeNum !== 0) {
    return <ReturnBooks />;
  }

  return (
    <>
      <ReturnQrcode />
      <button onClick={testBarcode}>바코드 번호 입력</button>
    </>
  );
}

export default ReturnPage;
