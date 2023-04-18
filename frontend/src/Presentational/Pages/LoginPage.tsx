import React, { useState } from 'react';
import * as LoginStyle from './LoginPage_Style';
import qrcode from '../../Resources/Images/qrcode.png';

function LoginPage() {
  const [option, setOption] = useState<boolean>(false);

  const ChangeLogin = () => {
    setOption(!option);
  };

  return (
    <LoginStyle.WrapLogin>
      {/* 안녕 난 로그인이야~ */}
      <LoginStyle.Span>사원증의 qr을 찍어주세요~</LoginStyle.Span>
      <LoginStyle.Img src={qrcode} />
      <LoginStyle.Option>PIN 번호로 로그인</LoginStyle.Option>
      <LoginStyle.Option>PIN 번호로 로그인</LoginStyle.Option>
    </LoginStyle.WrapLogin>
  );
}

export default LoginPage;
