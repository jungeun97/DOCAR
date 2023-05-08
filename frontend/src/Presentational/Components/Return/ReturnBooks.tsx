import React, { useState, useEffect } from 'react';
import ReturnDetail from './ReturnDetail';
import ReturnList from './ReturnList';
import * as BooksStyle from './ReturnBooks_Style';
import Swal from 'sweetalert2';
import withReactContent from 'sweetalert2-react-content';
import { useNavigate } from 'react-router-dom';
import {
  barcodeNumState,
  distanceState,
  isReturnState,
} from '../../../store/atoms';
import { useRecoilState } from 'recoil';
import { AddReturnBookList } from '../../../store/api';

function ReturnBooks() {
  const [isComplete, setIsComplete] = useState(false);
  const [isReturn, setIsReturn] = useRecoilState(isReturnState);
  const [barcodeNum, setBarcodeNum] = useRecoilState(barcodeNumState);
  const [distance, setDistance] = useRecoilState(distanceState);
  const navigate = useNavigate();
  const MySwal = withReactContent(Swal);

  const ClickedReturnBtn = () => {
    setIsComplete(true);
  };

  const AddReturnBookAPI = async () => {
    const request = await AddReturnBookList();
    if (request === false) {
      setModal('반납 처리에 실패했습니다.');
    } else {
      setModal();
    }
  };

  const ReturnComplete = () => {
    setIsReturn(false);
    AddReturnBookAPI();
    setModal();

    setBarcodeNum(0);
    setDistance(0);
  };

  const setModal = (errorMessage?: string) => {
    const text = errorMessage || '감사합니다.';
    MySwal.fire({
      title: errorMessage ? '오류 발생!' : '반납이 완료되었습니다.',
      text,
      icon: errorMessage ? 'error' : 'success',
      confirmButtonColor: '#3085d6',
      cancelButtonColor: '#d33',
      confirmButtonText: '확인',
      reverseButtons: true,
    }).then(() => {
      navigate(`/`);
    });
  };

  if (isComplete) {
    return <ReturnList ReturnComplete={ReturnComplete} />;
  }

  return <ReturnDetail ClickedReturnBtn={ClickedReturnBtn} />;
}

export default ReturnBooks;
