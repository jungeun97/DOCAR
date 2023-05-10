import React from 'react';
import * as TableStyle from '../Components/BookTable_Style';
import { ReturnBookType, CartBookType } from '../../store/api';
import Bookshelf from './Cleanup/Bookshelf';

export interface BookTableType {
  books: CartBookType[];
}

function BookTable({ books }: BookTableType) {
  return (
    <TableStyle.Table>
      <TableStyle.Thead>
        <TableStyle.TableTr2>
          <TableStyle.ThImg>표지</TableStyle.ThImg>
          <TableStyle.ThTitle>제목</TableStyle.ThTitle>
          <TableStyle.ThBookFloor>서랍 번호</TableStyle.ThBookFloor>
        </TableStyle.TableTr2>
      </TableStyle.Thead>
      <TableStyle.Tbody>
        {books.map((book) => (
          <TableStyle.TableTr key={book.bookId}>
            <TableStyle.ThImg>
              <TableStyle.BookImg src={book.coverImg} />
            </TableStyle.ThImg>
            <TableStyle.ThTitle>
              <TableStyle.BookName>{book.bookName}</TableStyle.BookName>
            </TableStyle.ThTitle>
            <TableStyle.ThBookFloor>
              <TableStyle.BookFloor>{book.cartBookFloor}</TableStyle.BookFloor>
            </TableStyle.ThBookFloor>
          </TableStyle.TableTr>
        ))}
      </TableStyle.Tbody>
    </TableStyle.Table>
  );
}

export default BookTable;
