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

function ReturnBooks() {
  const [isComplete, setIsComplete] = useState(false);
  const [isReturn, setIsReturn] = useRecoilState(isReturnState);

  const navigate = useNavigate();
  const MySwal = withReactContent(Swal);

  const ClickedReturnBtn = () => {
    setIsComplete(true);
  };

  const ReturnComplete = () => {
    setIsReturn(false);
    setModal();
    // API.post('returnsuccess')
    //   .then((response) => {
    //     console.log(response.data);
    //   })
    //   .catch((error) => {
    //     console.error(error);
    //   });
  };

  const setModal = () => {
    MySwal.fire({
      title: '반납이 완료되었습니다.',
      text: '감사합니다.',
      icon: 'success',
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
