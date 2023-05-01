import React from 'react';
import * as TableStyle from '../Components/BookTable_Style';
import BookData from './BookData.json';

function BookTableBack() {
  return (
    <TableStyle.Table>
      <TableStyle.Thead>
        <TableStyle.TableTr2>
          <TableStyle.ThCheck><input type="checkbox" /></TableStyle.ThCheck>
          <TableStyle.ThTitle2>제목</TableStyle.ThTitle2>
          <TableStyle.ThWriter>저자</TableStyle.ThWriter>
        </TableStyle.TableTr2>
      </TableStyle.Thead>
      <TableStyle.Tbody2>
        {/* 책 하나씩 들어가니깐 */}
        {BookData.map((book) => (
          <TableStyle.TableTr3>
            <TableStyle.ThCheck>
              <input type="checkbox"
              onChange={(e)=>{console.log(e.target.checked)}}
              // 도서의 반납 체크
              // onClick={() => {setReturn(true)}}
              />
            </TableStyle.ThCheck>
            <TableStyle.ThTitle2>
              <TableStyle.BookName>{book.bookName}</TableStyle.BookName>
            </TableStyle.ThTitle2>
            <TableStyle.ThWriter>
              <TableStyle.BookWriter>{book.author}</TableStyle.BookWriter>
            </TableStyle.ThWriter>
          </TableStyle.TableTr3>
        ))}
      </TableStyle.Tbody2>
    </TableStyle.Table>
  );
}

export default BookTableBack;
