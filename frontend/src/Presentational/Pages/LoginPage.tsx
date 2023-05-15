import React, { useState, ChangeEvent, useEffect } from 'react';
import * as LoginStyle from './LoginPage_Style';
import qrcode from '../../Resources/Images/qrcode.png';
import { useNavigate } from 'react-router-dom';
import Btn from '../Common/Btn';
import { AddLoginPin } from '../../store/api';
import { socket } from '../../socket';
import PinLogin from '../Components/Login/PinLogin';
import QrLogin from '../Components/Login/QrLogin';




function LoginPage() {
  const navigate = useNavigate();
  const [option, setOption] = useState<boolean>(false);
  const [pinNumber, setPinNumber] = useState<string>('');

  

  const ChangeLogin = () => {
    setOption(!option);
  };

  return (
    <LoginStyle.WrapLogin>
      {!option ? (
        <>
          <QrLogin />
          <Btn
            message="PIN 번호로 로그인"
            go={ChangeLogin}
            position="absolute"
            top="15px"
            right="15px"
          />
          
        </>
      ) : (
        <>
          <PinLogin />
          
          <Btn
            message="QR로 로그인"
            go={ChangeLogin}
            position="absolute"
            top="15px"
            right="15px"
          />
        </>
      )}
    </LoginStyle.WrapLogin>
  );
}

export default LoginPage;
