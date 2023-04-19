import React, { useState, useEffect } from 'react';
import axios from 'axios';
import BookItem from './BookItem';
import * as BookStyle from './BookList_Style';
import Btn from './../../Common/Btn';
import { useNavigate } from 'react-router-dom';

function Bookshelf() {
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
    <>
      <Btn message="원위치로" go={() => {}} />
      <BookStyle.Title>1번 책장입니더</BookStyle.Title>
      <BookStyle.WrapBooks>
        {books.map((book) => (
          <BookItem book={book} />
        ))}
      </BookStyle.WrapBooks>
      {/* 여기서 이동할 때 이동해야할 책장 경로 */}
      <Btn message="다음 책장으로 이동" go={() => {}} />
    </>
  );
}

export default Bookshelf;
