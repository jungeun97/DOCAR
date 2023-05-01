import React from 'react';
import * as TableStyle from '../Components/BookTable_Style';
import { BookDetail } from '../../store/api';

interface BookTableProps {
  books: BookDetail[];
}

function BookTable({ books }: BookTableProps) {
  console.log(books);
  return (
    <TableStyle.Table>
      <TableStyle.Thead>
        <TableStyle.TableTr2>
          <TableStyle.ThTitle>제목</TableStyle.ThTitle>
          <TableStyle.ThBookFloor>서랍 번호</TableStyle.ThBookFloor>
          {/* <TableStyle.ThImg>서랍 번호</TableStyle.ThImg> */}
        </TableStyle.TableTr2>
      </TableStyle.Thead>
      <TableStyle.Tbody>
        {books.map((book, idx) => (
          <TableStyle.TableTr key={book.id}>
            <TableStyle.ThImg>
              <TableStyle.BookImg src={book.cover} />
            </TableStyle.ThImg>
            <TableStyle.ThTitle>
              <TableStyle.BookName>{book.bookName}</TableStyle.BookName>
            </TableStyle.ThTitle>
            <TableStyle.ThBookFloor>
              <TableStyle.BookFloor>{book.floor}</TableStyle.BookFloor>
            </TableStyle.ThBookFloor>
          </TableStyle.TableTr>
        ))}
      </TableStyle.Tbody>
    </TableStyle.Table>
  );
}

export default BookTable;
