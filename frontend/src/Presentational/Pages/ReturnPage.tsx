import React, { useEffect, useState } from 'react';
import ReturnBooks from '../Components/Return/ReturnBooks';
import ReturnQrcode from '../Components/Return/ReturnQrcode';
import Swal from 'sweetalert2';
import withReactContent from 'sweetalert2-react-content';
import { useRecoilState, useRecoilValue } from 'recoil';
import {
  barcodeNumState,
  distanceState,
  isBookInfoState,
  isReturnError,
  isReturnState,
} from '../../store/atoms';
import { socket } from '../../socket';

function ReturnPage() {
  const [isReturn, setIsReturn] = useRecoilState(isReturnState);
  const [barcodeNum, setBarcodeNum] = useRecoilState(barcodeNumState);
  const [distance, setDistance] = useRecoilState(distanceState);
  const bookInfo = useRecoilValue(isBookInfoState);
  const returnError = useRecoilValue(isReturnError);

  socket.onmessage = (event) => {
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

  const ReturnMode = () => {
    setIsReturn(true);
  };

  const MySwal = withReactContent(Swal);

  useEffect(() => {
    MySwal.fire({
      title: '책 반납 실패',
      text: returnError,
      icon: 'error',
      confirmButtonColor: '#3085d6',
      cancelButtonColor: '#d33',
      confirmButtonText: '확인',
      reverseButtons: true,
    });
  }, [returnError]);

  useEffect(() => {
    console.log(`현재 책의 바코드: ${barcodeNum}`);
  }, [barcodeNum]);

  if (isReturn && barcodeNum !== 0 && bookInfo) {
    return <ReturnBooks />;
  }

  return <ReturnQrcode ReturnMode={ReturnMode} />;
}

export default ReturnPage;
