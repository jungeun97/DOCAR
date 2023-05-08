import React, { useState } from 'react';
import * as LoginStyle from '../../Pages/LoginPage_Style'
import qrcode from '../../Resources/Images/qrcode.png';
import { useNavigate } from 'react-router-dom';


function QrLogin() {
  const navigate = useNavigate();
  const [option, setOption] = useState<boolean>(false);

  const ChangeLogin = () => {
    setOption(!option);
  };

  const handleLogin = () => {
    // QR 로그인 관련 처리
    navigate('/cleanup');
  };

  return (
    <LoginStyle.WrapLogin>
      <LoginStyle.PinTitle>사원증의 QR을 찍어주세요</LoginStyle.PinTitle>
      <LoginStyle.Img src={qrcode} />

    </LoginStyle.WrapLogin>
  );
}

export default QrLogin;
