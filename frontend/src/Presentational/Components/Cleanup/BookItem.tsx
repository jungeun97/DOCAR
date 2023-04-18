import React from 'react';

interface Props {
  book: { id: number };
}

function BookItem({ book }: Props) {
  return <div>{book.id}</div>;
}

export default BookItem;
