import React from 'react';
import * as TableStyle from '../Components/BookTable_Style';
import BookData from './BookData.json';
import axios from 'axios';

interface Props {
  id: number;
  title: string;
  imgurl: string;
  writer: string;
}

interface BookTableProps {
  books: Props[];
}

function BookTable({ books }: BookTableProps) {
  return (
    <TableStyle.Table>
      <TableStyle.Thead>
        <TableStyle.TableTr2>
          <TableStyle.ThImg>표지</TableStyle.ThImg>
          <TableStyle.ThTitle>제목</TableStyle.ThTitle>
          <TableStyle.ThWriter>저자</TableStyle.ThWriter>
        </TableStyle.TableTr2>
      </TableStyle.Thead>
      <TableStyle.Tbody>
        {books.map((book, idx) => (
          <TableStyle.TableTr key={idx}>
            <TableStyle.ThImg>
              <TableStyle.BookImg src={book.imgurl} />
            </TableStyle.ThImg>
            <TableStyle.ThTitle>
              <TableStyle.BookName>{book.title}</TableStyle.BookName>
            </TableStyle.ThTitle>
            <TableStyle.ThWriter>
              <TableStyle.BookWriter>{book.writer}</TableStyle.BookWriter>
            </TableStyle.ThWriter>
          </TableStyle.TableTr>
        ))}
      </TableStyle.Tbody>
    </TableStyle.Table>
  );
}

export default BookTable;