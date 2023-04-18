import React, { useState } from 'react';
import Btn from '../Common/Btn';
import ReturnDetail from './ReturnDetail';
import ReturnList from './ReturnList';

function ReturnBooks() {
  const [isReturn, setIsReturn] = useState(false);
  const [isComplete, setIsComplete] = useState(false);

  const ReturnState = () => {
    setIsReturn(!isReturn);
  };

  const ReturnComplete = () => {
    setIsComplete(true);
  };

  return (
    <>
      {isReturn ? (
        <>
          <ReturnList />
          <Btn
            message="위 사항이 맞다면 버튼을 눌러주세요."
            go={ReturnComplete}
          />
        </>
      ) : (
        <>
          <ReturnDetail />
          <Btn
            message="책을 모두 반납하셨으면 버튼을 눌러주세요."
            go={ReturnState}
          />
        </>
      )}
    </>
  );
}

export default ReturnBooks;
