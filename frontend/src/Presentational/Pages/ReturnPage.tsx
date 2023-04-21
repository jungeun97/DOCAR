import React, { useState } from 'react';
import ReturnBooks from '../Components/Return/ReturnBooks';
import ReturnQrcode from '../Components/Return/ReturnQrcode';
import { useRecoilState } from 'recoil';
import { isReturnState } from '../../store/atoms';

function ReturnPage() {
  const [isReturn, setIsReturn] = useRecoilState(isReturnState);

  const ReturnMode = () => {
    setIsReturn(!isReturn);
  };

  if (isReturn) {
    return <ReturnBooks />;
  }

  return <ReturnQrcode ReturnMode={ReturnMode} />;
}

export default ReturnPage;
