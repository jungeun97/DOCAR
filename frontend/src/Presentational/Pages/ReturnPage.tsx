import React, { useState } from 'react';
import ReturnBooks from '../Components/ReturnBooks';
import ReturnQrcode from '../Components/ReturnQrcode';

function ReturnPage() {
  const [isReturn, setIsReturn] = useState(false);

  const ReturnMode = () => {
    setIsReturn(!isReturn);
  };

  if (isReturn) {
    return <ReturnBooks />;
  }

  return (
    <>
      <ReturnQrcode />
      <button onClick={ReturnMode}>반납모드 변경</button>
    </>
  );
}

export default ReturnPage;
