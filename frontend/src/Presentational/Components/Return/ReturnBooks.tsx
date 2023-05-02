import React, { useState, useEffect } from 'react';
import ReturnDetail from './ReturnDetail';
import ReturnList from './ReturnList';
import * as BooksStyle from './ReturnBooks_Style';
import Swal from 'sweetalert2';
import withReactContent from 'sweetalert2-react-content';
// import API from '../../../store/api';
import { useNavigate } from 'react-router-dom';
import { isReturnState } from '../../../store/atoms';
import { useRecoilState } from 'recoil';
import { AddReturnBookList } from '../../../store/api';
import { AxiosError } from 'axios';

function ReturnBooks() {
  const [isComplete, setIsComplete] = useState(false);
  const [isReturn, setIsReturn] = useRecoilState(isReturnState);
  const navigate = useNavigate();
  const MySwal = withReactContent(Swal);

  const ClickedReturnBtn = () => {
    setIsComplete(true);
  };

  const AddReturnBookAPI = async () => {
    const request = await AddReturnBookList();
    if (request === false) {
      setModal(new Error('반납 처리에 실패했습니다.'));
    } else {
      setModal();
    }
  };

  const ReturnComplete = () => {
    setIsReturn(false);
    AddReturnBookAPI();
    setModal();
  };

  const setModal = (error?: Error) => {
    const text = error ? error.message : '감사합니다.';
    MySwal.fire({
      title: error ? '오류 발생!' : '반납이 완료되었습니다.',
      text,
      icon: error ? 'error' : 'success',
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
  // else if (props.barcodeNum !== 0) {
  //   return (
  //     <ReturnDetail
  //       ClickedReturnBtn={ClickedReturnBtn}
  //       initBarcodeNum={props.barcodeNum}
  //     />
  //   );
  // }
  return (
    <ReturnDetail
      ClickedReturnBtn={ClickedReturnBtn}
    />
  );
}

export default ReturnBooks;
