import React from 'react';

interface Props {
  book: { id: number };
}

function BookItem({ book }: Props) {
  return <div>
    <input type="checkbox" />
    {book.id}</div>;
}

export default BookItem;
