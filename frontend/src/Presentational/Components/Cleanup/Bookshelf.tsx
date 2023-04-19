import React, { useState, useEffect } from 'react';
import axios from 'axios';
import BookItem from './BookItem';
import * as BookStyle from './BookList_Style';
import BottomBtn from './../../Common/BottomBtn';
import ResetBtn from './../../Common/ResetBtn';
import Btn from './../../Common/Btn';
import { useParams } from 'react-router-dom';
import Swal from 'sweetalert2';
import withReactContent from 'sweetalert2-react-content';

type recipeParams = {
  params: string;
};

function Bookshelf() {
  const [books, setBooks] = useState<[]>([]);
  const [number, setNumber] = useState();
  const { id } = useParams() as { id: string };

  const GetBooks = () => {
    axios.get('https://jsonplaceholder.typicode.com/todos').then((res) => {
      setBooks(res.data);
    });
  };
  const MySwal = withReactContent(Swal);
  

  // 다음 책장으로 가는 모달
  const setModal = () => {
    MySwal.fire({
      icon: 'success',
      title: '책장 정리 완료!',
      // timer: 1500,
      timerProgressBar: true,
      // showConfirmButton: false,
      showCancelButton: true,
      showConfirmButton: true,
      cancelButtonText: '원위치로',
      confirmButtonText: '다음 책장으로 이동',
      html: <div>""</div>,
    });
  };

  // 중간에 탈주하는 모달
  const setCheckModal = () => {
    MySwal.fire({
      // icon: 'success',
      title: '정리된 책들을 체크해주세요',
      // timer: 1500,
      timerProgressBar: true,
      // showConfirmButton: false,
      showCancelButton: true,
      showConfirmButton: true,
      cancelButtonText: '원위치로',
      confirmButtonText: '다음 책장으로 이동',
      html: (
        <>
          {books && (
            <BookStyle.WrapBooks>
              {books.map((book) => (
                <BookItem book={book} />
              ))}
            </BookStyle.WrapBooks>
          )}
        </>
      ),
    });
  };

  useEffect(() => {
    GetBooks();
  }, []);

  return (
    <>
      <ResetBtn
        message="원위치로"
        go={() => {
          setCheckModal();
        }}
      />
      <BookStyle.Title>{id}번 책장 반납도서</BookStyle.Title>
      {books && (
        <BookStyle.WrapBooks>
          {books.map((book) => (
            <BookItem book={book} />
          ))}
        </BookStyle.WrapBooks>
      )}
      {/* 여기서 이동할 때 이동해야할 책장 경로 */}
      <BottomBtn
        message={`정리 완료`}
        go={() => {
          setModal();
        }}
      />
      {/* 모달 띄어서 다음 책장으로 이동시키기 */}
    </>
  );
}

export default Bookshelf;
