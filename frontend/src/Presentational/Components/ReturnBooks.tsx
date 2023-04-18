import React, { useState } from 'react';
import Btn from '../Common/Btn';
import ReturnDetail from './ReturnDetail';
import ReturnList from './ReturnList';
import * as BooksStyle from './ReturnBooks_Style';

function ReturnBooks() {
  const [isReturn, setIsReturn] = useState(false);
  const [isComplete, setIsComplete] = useState(false);

  const ReturnState = () => {
    setIsReturn(!isReturn);
  };

  const ReturnComplete = () => {
    setIsComplete(true);
  };

  if (isComplete) {
    return (
      <>
        <BooksStyle.CompleteText>
          반납이 완료되었습니다.
        </BooksStyle.CompleteText>
        <BooksStyle.CompleteText>감사합니다.</BooksStyle.CompleteText>
      </>
    );
  }

  if (isReturn) {
    return (
      <>
        <ReturnList />
        <Btn
          message="위 사항이 맞다면 버튼을 눌러주세요."
          go={ReturnComplete}
        />
      </>
    );
  }

  return (
    <>
      <ReturnDetail />
      <Btn
        message="책을 모두 반납하셨으면 버튼을 눌러주세요."
        go={ReturnState}
      />
    </>
  );
}

export default ReturnBooks;
