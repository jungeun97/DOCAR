import React, { useState, useEffect } from 'react';
import * as TableStyle from '../Components/BookTable_Style';
import BookData from './BookData.json';

interface Type1 {
  id: number;
  title: string;
  writer: string;
  imgurl: string;
}

interface Type {
  book: Type1;
  checkedItemHandler: (id: number, isChecked: boolean) => void;
  isAllChecked: boolean;
}

function TableItem({ book, checkedItemHandler, isAllChecked }: Type) {
  const [bChecked, setChecked] = useState(false);

  const checkHandler = ({ target }: React.ChangeEvent<HTMLInputElement>) => {
    setChecked(!bChecked);
    checkedItemHandler(book.id, target.checked);
  };

  const allCheckHandler = () => setChecked(isAllChecked);

  useEffect(() => allCheckHandler(), [isAllChecked]);

  return (
    <TableStyle.TableTr3>
      <TableStyle.ThCheck>
        <input
          type="checkbox"
          checked={bChecked}
          onChange={(e) => checkHandler(e)}
        />
      </TableStyle.ThCheck>
      <TableStyle.ThTitle2>
        <TableStyle.BookName>{book.title}</TableStyle.BookName>
      </TableStyle.ThTitle2>
      <TableStyle.ThWriter>
        <TableStyle.BookWriter>{book.writer}</TableStyle.BookWriter>
      </TableStyle.ThWriter>
    </TableStyle.TableTr3>
  );
}

export default TableItem;
