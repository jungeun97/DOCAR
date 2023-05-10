import React from 'react';
import * as TableStyle from '../Components/BookTable_Style';
import BookData from './BookData.json';
import axios from 'axios';
import { ReturnBookType } from '../../store/api';

interface BookTableProps {
  books: ReturnBookType[];
}

function ReturnBookTable({ books }: BookTableProps) {
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
        {books.map((book) => (
          <TableStyle.TableTr key={book.id}>
            <TableStyle.ThImg>
              <TableStyle.BookImg src={book.cover} />
            </TableStyle.ThImg>
            <TableStyle.ThTitle>
              <TableStyle.BookName>{book.bookName}</TableStyle.BookName>
            </TableStyle.ThTitle>
            <TableStyle.ThWriter>
              <TableStyle.BookWriter>{book.author}</TableStyle.BookWriter>
            </TableStyle.ThWriter>
          </TableStyle.TableTr>
        ))}
      </TableStyle.Tbody>
    </TableStyle.Table>
  );
}

export default ReturnBookTable;
