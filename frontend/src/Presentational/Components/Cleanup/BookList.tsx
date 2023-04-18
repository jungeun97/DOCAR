import React from 'react';
import BookItem from './BookItem';
import * as BookStyle from './BookList_Style';

interface Props {
  books: [];
}

function BookList({ books }: Props) {
  return (
    <>
      <BookStyle.Title>카트 도서 목록</BookStyle.Title>
      <BookStyle.WrapBooks>
        {books.map((book) => (
          <BookItem book={book} />
        ))}
      </BookStyle.WrapBooks>
    </>
  );
}

export default BookList;
