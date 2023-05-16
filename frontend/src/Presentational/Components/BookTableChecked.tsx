import React, { useEffect } from 'react';
import * as TableStyle from '../Components/BookTable_Style';
import { checkBookType } from '../../store/types';

interface Props {
  books: checkBookType[];
}

function BookTableChecked({ books }: Props) {
  return (
    <TableStyle.Table>
      <TableStyle.Thead>
        <TableStyle.TableTr2>
          <TableStyle.checkedTitle>제목</TableStyle.checkedTitle>
          <TableStyle.ThBookFloor>저자</TableStyle.ThBookFloor>
        </TableStyle.TableTr2>
      </TableStyle.Thead>
      <TableStyle.Tbody2>
        {books.map((book) => (
          <TableStyle.TableTr3 key={book.bookId}>
            <TableStyle.checkedTitle>
              <TableStyle.BookName>{book.bookName}</TableStyle.BookName>
            </TableStyle.checkedTitle>
            <TableStyle.ThBookFloor>
              <TableStyle.BookFloor>{book.author}</TableStyle.BookFloor>
            </TableStyle.ThBookFloor>
          </TableStyle.TableTr3>
        ))}
      </TableStyle.Tbody2>
    </TableStyle.Table>
  );
}

export default BookTableChecked;
