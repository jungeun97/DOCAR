import React from 'react';
import * as ListStyle from './ReturnList_Style';
import BookData from './BookData.json';

function BookTable() {
    return (
        <ListStyle.Table>
        <ListStyle.Thead>
          <ListStyle.TableTr2>
            <ListStyle.ThImg>표지</ListStyle.ThImg>
            <ListStyle.ThTitle>제목</ListStyle.ThTitle>
            <ListStyle.ThWriter>저자</ListStyle.ThWriter>
          </ListStyle.TableTr2>
        </ListStyle.Thead>
        {/* 바디 부분 */}
        <ListStyle.Tbody>
          {BookData.map((book) => (
            <ListStyle.TableTr>
              <ListStyle.ThImg>
                <ListStyle.BookImg src={book.imgurl} />
              </ListStyle.ThImg>
              <ListStyle.ThTitle>
                <ListStyle.BookName>{book.title}</ListStyle.BookName>
              </ListStyle.ThTitle>
              <ListStyle.ThWriter>
                <ListStyle.BookWriter>{book.writer}</ListStyle.BookWriter>
              </ListStyle.ThWriter>
            </ListStyle.TableTr>
          ))}
        </ListStyle.Tbody>
      </ListStyle.Table>
    );
}

export default BookTable;