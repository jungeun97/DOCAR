import React, { useState } from 'react';
import * as TableStyle from '../Components/BookTable_Style';
import BookData from './BookData.json';
import TableItem from './TableItem';
import { CartBookType } from '../../store/api';

interface Props {
  books: CartBookType[];
}

function BookTableCheck({ books }: Props) {
  const [checkedItems, setCheckedItems] = useState(new Set());

  const checkedItemHandler = (id: number, isChecked: boolean) => {
    if (isChecked) {
      checkedItems.add(id);
      setCheckedItems(checkedItems);
    } else if (!isChecked && checkedItems.has(id)) {
      checkedItems.delete(id);
      setCheckedItems(checkedItems);
    }
  };

  const [isAllChecked, setIsAllChecked] = useState(false);

  const allCheckedHandler = (isChecked: boolean) => {
    if (isChecked) {
      setCheckedItems(new Set(BookData.map(({ id }) => id)));
      setIsAllChecked(true);
    } else {
      checkedItems.clear();
      setCheckedItems(checkedItems);
      setIsAllChecked(false);
    }
  };

  return (
    <TableStyle.Table>
      <TableStyle.Thead>
        <TableStyle.TableTr2>
          <TableStyle.ThCheck>
            <input
              type="checkbox"
              onClick={() => {
                setIsAllChecked(!isAllChecked);
              }}
            />
          </TableStyle.ThCheck>
          <TableStyle.ThTitle2>제목</TableStyle.ThTitle2>
          <TableStyle.ThBookFloor>저자</TableStyle.ThBookFloor>
        </TableStyle.TableTr2>
      </TableStyle.Thead>
      <TableStyle.Tbody2>
        {/* 책 하나씩 들어가니깐 */}
        {books.map((book,idx) => (
          <TableItem
            key={idx}
            book={book}
            checkedItemHandler={checkedItemHandler}
            isAllChecked={isAllChecked}
          />

          //   <TableStyle.TableTr3>
          //     <TableStyle.ThCheck>
          //       <input type="checkbox"
          //       onChange={(e)=>{console.log(e.target.checked)}}
          //       // 도서의 반납 체크
          //       // onClick={() => {setReturn(true)}}
          //       />
          //     </TableStyle.ThCheck>
          //     <TableStyle.ThTitle2>
          //       <TableStyle.BookName>{book.title}</TableStyle.BookName>
          //     </TableStyle.ThTitle2>
          //     <TableStyle.ThWriter>
          //       <TableStyle.BookWriter>{book.writer}</TableStyle.BookWriter>
          //     </TableStyle.ThWriter>
          //   </TableStyle.TableTr3>
        ))}
      </TableStyle.Tbody2>
    </TableStyle.Table>
  );
}

export default BookTableCheck;
