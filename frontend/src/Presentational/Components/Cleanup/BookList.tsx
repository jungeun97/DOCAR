import React, { useState, useEffect } from 'react';
import * as BookStyle from './BookList_Style';
import axios from 'axios';
import { useNavigate } from 'react-router-dom';
import Btn from '../../Common/Btn';
import BookTable from './../BookTable';
import BookData from '../BookData.json';
import Pagenation from './../Pagenation';

interface Props {
  id: number;
  title: string;
  imgurl: string;
  writer: string;
}

function BookList() {
  const navigate = useNavigate();
  const [books, setBooks] = useState<Props[]>([]);

  // 페이지 네이션
  const [page, setPage] = useState(1); // 페이지
  const limit = 3; // 몇개 볼거?
  const offset = (page - 1) * limit; // 시작점과 끝점을 구하는 offset

  const booksData = (books: Props[]) => {
    if (books) {
      let result = books.slice(offset, offset + limit);
      console.log(123);
      console.log(result);
      setBooks(result);
      // return result;
    }
  };

  useEffect(() => {
    booksData(BookData);
  }, []);

  useEffect(() => {
    booksData(BookData);
  }, [page]);

  const id = 1;

  return (
    <>
      <BookStyle.Title>카트 도서 목록</BookStyle.Title>
      <BookTable books={books} />
      <Pagenation
        limit={limit}
        page={page}
        totalPosts={BookData.length}
        setPage={setPage}
      />
      {/* 여기서 이동할 때 이동해야할 책장 경로 */}
      <Btn
        message="이동하기"
        go={() => {
          navigate(`${id}`);
        }}
        position="absolute"
        bottom="10px"
        right="18px"
      />
    </>
  );
}

export default BookList;
