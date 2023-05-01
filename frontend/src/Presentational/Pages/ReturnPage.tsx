import React, { useEffect, useState } from 'react';
import ReturnBooks from '../Components/Return/ReturnBooks';
import ReturnQrcode from '../Components/Return/ReturnQrcode';
import { useRecoilState } from 'recoil';
import { barcodeNumState, isReturnState } from '../../store/atoms';
import socket from '../../socket';

function ReturnPage() {
  const [isReturn, setIsReturn] = useRecoilState(isReturnState);
  const [barcodeNum, setBarcodeNum] = useRecoilState(barcodeNumState);


  socket.on('barcode', (barcodeData) => {
    if (barcodeData !== barcodeNum) {
      setBarcodeNum(barcodeData);
    }
    setIsReturn(true);
  });

  useEffect(() => {
    console.log(`현재 책의 바코드: ${barcodeNum}`);
  }, [barcodeNum]);

  if (isReturn && barcodeNum !== 0) {
    return <ReturnBooks />;
  }

  return <ReturnQrcode />;
}

export default ReturnPage;
