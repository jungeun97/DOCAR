import React from 'react';
import * as ListStyle from './ReturnList_Style';
import Btn from '../Common/Btn';
import BookData from './BookData.json';

interface ReturnList {
  ReturnComplete: () => void;
}

function ReturnList(props: ReturnList) {
  return (
    <ListStyle.WrapList>
      <ListStyle.ListTitle>반납 책 목록</ListStyle.ListTitle>
      <ListStyle.ListDiv>
        {BookData.map((book) => (
          <ListStyle.BookDiv key={book.id}>
            <ListStyle.BookImg src={book.imgurl} />
            <ListStyle.BookTextDiv>
              <ListStyle.BookName>{book.title}</ListStyle.BookName>
              <ListStyle.BookWriter>{book.writer}</ListStyle.BookWriter>
            </ListStyle.BookTextDiv>
          </ListStyle.BookDiv>
        ))}
      </ListStyle.ListDiv>
      <Btn
        message="위 사항이 맞다면 버튼을 눌러주세요."
        go={props.ReturnComplete}
      />
    </ListStyle.WrapList>
  );
}

export default ReturnList;
