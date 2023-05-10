import React, { useState, useEffect } from 'react';
import { CartBookType } from '../../store/api';
import * as TableStyle from '../Components/BookTable_Style';
import BookData from './BookData.json';
import TableItem from './TableItem';

interface Props {
  books: CartBookType[];
  onCheckedItemsChange: (checkedItems: number[]) => void;
}

function BookTableCheck({ books, onCheckedItemsChange }: Props) {
  const [checkedItems, setCheckedItems] = useState<number[]>([]);

  const handleCheckboxChange = (id: number, checked: boolean) => {
    if (checked) {
      setCheckedItems((prev) => [...prev, id]);
    } else {
      setCheckedItems((prev) => prev.filter((itemId) => itemId !== id));
    }
  };

  const handleAllCheckboxChange = (
    event: React.ChangeEvent<HTMLInputElement>
  ) => {
    const isChecked = event.target.checked;
    setCheckedItems(isChecked ? books.map(({ bookId }) => bookId) : []);
  };

  useEffect(() => {
    onCheckedItemsChange(checkedItems);
  }, [checkedItems, onCheckedItemsChange]);

  return (
    <TableStyle.Table>
      <TableStyle.Thead>
        <TableStyle.TableTr2>
          <TableStyle.ThCheck>
            <input type="checkbox" onChange={handleAllCheckboxChange} />
          </TableStyle.ThCheck>
          <TableStyle.ThTitle2>제목</TableStyle.ThTitle2>
          <TableStyle.ThBookFloor>저자</TableStyle.ThBookFloor>
        </TableStyle.TableTr2>
      </TableStyle.Thead>
      <TableStyle.Tbody2>
        {/* 책 하나씩 들어가니깐 */}
        {books.map((book) => (
          <TableItem
            key={book.bookId}
            book={book}
            checked={checkedItems.includes(book.bookId)}
            onCheckboxChange={handleCheckboxChange}
          />
        ))}
      </TableStyle.Tbody2>
    </TableStyle.Table>
  );
}

export default BookTableCheck;
