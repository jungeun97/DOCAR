import React, { useState, useEffect } from 'react';
import { CartBookType, ReturnBookType } from '../../store/api';
import * as TableStyle from '../Components/BookTable_Style';

interface Type {
  book: CartBookType;
  checked: boolean;
  onCheckboxChange: (id: number, checked: boolean) => void;
}

function TableItem({ book, checked, onCheckboxChange }: Type) {
  const checkHandler = ({ target }: React.ChangeEvent<HTMLInputElement>) => {
    onCheckboxChange(book.bookId, target.checked);
  };

  return (
    <TableStyle.TableTr3>
      <TableStyle.ThCheck>
        <input
          type="checkbox"
          checked={checked}
          onChange={(e) => checkHandler(e)}
        />
      </TableStyle.ThCheck>
      <TableStyle.ThTitle2>
        <TableStyle.BookName>{book.bookName}</TableStyle.BookName>
      </TableStyle.ThTitle2>
      <TableStyle.ThBookFloor>
        <TableStyle.ThBookAuthor>
          {book?.author.split('(')[0].trim()} 저
        </TableStyle.ThBookAuthor>
      </TableStyle.ThBookFloor>
    </TableStyle.TableTr3>
  );
}

export default TableItem;
