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
          <TableStyle.ThTitle2>제목</TableStyle.ThTitle2>
          <TableStyle.ThWriter>저자</TableStyle.ThWriter>
        </TableStyle.TableTr2>
      </TableStyle.Thead>
      <TableStyle.Tbody2>
        {books.map((book) => (
          <TableStyle.TableTr3 key={book.bookId}>
            <TableStyle.ThTitle2>
              <TableStyle.BookName>{book.bookName}</TableStyle.BookName>
            </TableStyle.ThTitle2>
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
