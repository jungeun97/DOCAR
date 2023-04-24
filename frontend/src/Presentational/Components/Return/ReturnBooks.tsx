import React, { useState, useEffect } from 'react';
import ReturnDetail from './ReturnDetail';
import ReturnList from './ReturnList';
import * as BooksStyle from './ReturnBooks_Style';
import Swal from 'sweetalert2';
import withReactContent from 'sweetalert2-react-content';
import API from '../../../store/api';
import { useNavigate } from 'react-router-dom';

function ReturnBooks() {
  // const [isComplete, setIsComplete] = useState(false);
  const [clickedBtn, setClickedBtn] = useState(false);

  const navigate = useNavigate();
  const MySwal = withReactContent(Swal);

  const ClickedReturnBtn = () => {
    setClickedBtn(true);
  };

  const ReturnComplete = () => {
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

  if (clickedBtn) {
    return <ReturnList ReturnComplete={ReturnComplete} />;
  }
  return <ReturnDetail ClickedReturnBtn={ClickedReturnBtn} />;
}

export default ReturnBooks;
