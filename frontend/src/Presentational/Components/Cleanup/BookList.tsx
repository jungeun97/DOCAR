import React, { useState, useEffect } from 'react';
import * as BookStyle from './BookList_Style';
import axios from 'axios';
import { useNavigate } from 'react-router-dom';
import Swal from 'sweetalert2';
import withReactContent from 'sweetalert2-react-content';
import Btn from '../../Common/Btn';
import BookTable from './../BookTable';
import Pagenation from './../Pagenation';
import * as API from '../../../store/api';

function BookList() {
  const navigate = useNavigate();
  const [books, setBooks] = useState<null | API.CartBookType>(null);
  const [curbooks, setCurbooks] = useState<API.CartBookType[]>([]);
  const MySwal = withReactContent(Swal);

  // 페이지 네이션
  const [page, setPage] = useState(1); // 페이지
  const limit = 3; // 몇개 볼거?
  const offset = (page - 1) * limit; // 시작점과 끝점을 구하는 offset

  //// 한 페이지에 보일 책 slice
  const booksData = (books: null | API.CartBookType) => {
    if (books) {
      let result = books.slice(offset, offset + limit);
      console.log(result);
      setCurbooks(result);
      // return result;
    }
  };

  // const p

  // 카트 도서 목록 전체 조회
  useEffect(() => {
    const getCartBooks = async () => {
      const request = await API.getCartBookList();
      console.log(request);
      setBooks(request);
      booksData(request);
      if (request?.length === 0) {
        MySwal.fire({
          title: '정리할 책이 없습니다.',
          timerProgressBar: true,
          showCancelButton: true,
          showConfirmButton: true,
          confirmButtonText: '홈으로 이동',
          allowOutsideClick: false,
        }).then(() => {
          navigate(`/`);
        });
      }
    };
    getCartBooks();
  }, []);

  // 페이지 갱신
  useEffect(() => {
    booksData(books);
  }, [page]);

  const id = 1;

  return (
    <>
      <BookStyle.Title>카트 도서 목록</BookStyle.Title>
      <BookTable books={curbooks} />
      {books ? (
        <Pagenation
          limit={limit}
          page={page}
          totalPosts={books.length}
          setPage={setPage}
        />
      ) : null}

      {/* 여기서 이동할 때 이동해야할 책장 경로 */}
      <Btn
        message="이동하기"
        go={() => {
          navigate(`shelf`);
        }}
        position="absolute"
        bottom="10px"
        right="18px"
      />
    </>
  );
}

export default BookList;
