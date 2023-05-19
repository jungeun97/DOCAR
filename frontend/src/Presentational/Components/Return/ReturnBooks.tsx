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
  isBookInfoState,
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
    const result = await AddReturnBookList();
    if (typeof result === 'string') {
      setModal(false, result);
    } else {
      setModal(result.success, result.message);
    }
  };

  const ReturnComplete = () => {
    setIsReturn(false);
    AddReturnBookAPI();
    setBarcodeNum(0);
    setDistance(0);
  };

  const setModal = (success: boolean, message: string) => {
    const title = success ? '반납이 완료되었습니다.' : '반납에 실패했습니다.';
    const icon = success ? 'success' : 'error';
  
    MySwal.fire({
      title,
      text: message || '감사합니다.',
      icon,
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
