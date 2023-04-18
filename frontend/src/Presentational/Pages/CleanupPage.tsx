import React, { useEffect, useState } from 'react';
import * as CleanupStyle from './CleanupPage_Style';
import axios from 'axios';
import BookList from './../Components/Cleanup/BookList';
import Bookshelf from './../Components/Cleanup/Bookshelf';

function CleanupPage() {
  const [books, setBooks] = useState<[]>([]);

  const GetBooks = () => {
    axios.get('https://jsonplaceholder.typicode.com/todos').then((res) => {
      console.log(res.data);
      setBooks(res.data);
    });
  };

  useEffect(() => {
    GetBooks();
  }, []);

  return (
    <CleanupStyle.WrapClean>
      {/* <CleanupStyle.Title>카트 도서 목록</CleanupStyle.Title> */}
      {/* <CleanupStyle.WrapBooks> */}
      <BookList books={books} />
      {/* </CleanupStyle.WrapBooks> */}
      이동하기
      <Bookshelf />
    </CleanupStyle.WrapClean>
  );
}

export default CleanupPage;
