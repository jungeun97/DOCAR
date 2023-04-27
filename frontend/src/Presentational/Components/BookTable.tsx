import React from 'react';
import * as TableStyle from '../Components/BookTable_Style';
import BookData from './BookData.json';
import axios from 'axios';
import * as API from '../../store/api';

interface Props {
  id: number;
  title: string;
  imgurl: string;
  writer: string;
}

interface BookTableProps {
  books: API.CartBookType[];
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
          <TableStyle.TableTr key={idx}>
            <TableStyle.ThTitle>
              <TableStyle.BookName>{book.bookName}</TableStyle.BookName>
            </TableStyle.ThTitle>
            <TableStyle.ThBookFloor>
              <TableStyle.BookFloor>{book.cartBookFloor}</TableStyle.BookFloor>
            </TableStyle.ThBookFloor>
            {/* <TableStyle.ThImg>
              <TableStyle.BookName>{book.cartBookSite}</TableStyle.BookName>
            </TableStyle.ThImg> */}
          </TableStyle.TableTr>
        ))}
      </TableStyle.Tbody>
    </TableStyle.Table>
  );
}

export default BookTable;
