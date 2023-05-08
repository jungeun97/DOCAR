import React, { useState, ChangeEvent, useEffect } from 'react';
import * as LoginStyle from './LoginPage_Style';
import qrcode from '../../Resources/Images/qrcode.png';
import { useNavigate } from 'react-router-dom';
import Btn from '../Common/Btn';
import { AddLoginPin } from '../../store/api';
import { socket } from '../../socket';
import PinLogin from '../Components/Login/PinLogin';

function LoginPage() {
  const navigate = useNavigate();
  const [option, setOption] = useState<boolean>(false);
  const [pinNumber, setPinNumber] = useState<string>('');

  socket.onmessage = (event) => {
    const data = JSON.parse(event.data);
    console.log('현재 바코드는', data.barcode);
    if (data.barcode !== pinNumber) {
      setPinNumber(data.barcode);
      handleLogin();
    }
  };

  const ChangeLogin = () => {
    setOption(!option);
  };

  const onChage = (e: React.ChangeEvent<HTMLInputElement>) => {
    setPinNumber(e.target.value);
  };

  const handleLogin = async () => {
    console.log(pinNumber);
    try {
      const result = await AddLoginPin(pinNumber);
      if (result) {
        navigate('/cleanup');
      } else {
        alert('로그인 실패');
      }
    } catch (error) {
      alert('로그인 실패');
    }
  };

  return (
    <LoginStyle.WrapLogin>
      {!option ? (
        <>
          <LoginStyle.PinTitle>사원증의 QR을 찍어주세요</LoginStyle.PinTitle>
          <LoginStyle.Img src={qrcode} />
          <Btn
            message="PIN 번호로 로그인"
            go={ChangeLogin}
            position="absolute"
            bottom="10px"
          />
        </>
      ) : (
        <>
          <PinLogin />
          <Btn
            message="QR로 로그인"
            go={ChangeLogin}
            position="absolute"
            bottom="10px"
          />
        </>
      )}
    </LoginStyle.WrapLogin>
  );
}

export default LoginPage;
