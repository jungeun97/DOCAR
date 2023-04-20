import React from 'react';
import * as ListStyle from './ReturnList_Style';
import BookData from './BookData.json';

function BookTableBack() {
  return (
    <ListStyle.Table>
      <ListStyle.Thead>
        <ListStyle.TableTr2>
          <ListStyle.ThCheck>체크</ListStyle.ThCheck>
          <ListStyle.ThTitle2>제목</ListStyle.ThTitle2>
          <ListStyle.ThWriter>저자</ListStyle.ThWriter>
        </ListStyle.TableTr2>
      </ListStyle.Thead>
      {/* 바디 부분 */}
      <ListStyle.Tbody2>
        {BookData.map((book) => (
          <ListStyle.TableTr3>
            <ListStyle.ThCheck>
              <input type="checkbox" />
            </ListStyle.ThCheck>

            <ListStyle.ThTitle2>
              <ListStyle.BookName>{book.title}</ListStyle.BookName>
            </ListStyle.ThTitle2>
            <ListStyle.ThWriter>
              <ListStyle.BookWriter>{book.writer}</ListStyle.BookWriter>
            </ListStyle.ThWriter>
          </ListStyle.TableTr3>
        ))}
      </ListStyle.Tbody2>
    </ListStyle.Table>
  );
}

export default BookTableBack;
