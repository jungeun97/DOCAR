import React, { useState, ChangeEvent } from 'react';
import * as LoginStyle from './LoginPage_Style';
import qrcode from '../../Resources/Images/qrcode.png';
import { AiOutlineUser } from 'react-icons/ai';
import { useNavigate } from 'react-router-dom';
import Btn from '../Common/Btn';
import { AddLoginPin } from '../../store/api';

function LoginPage() {
  const navigate = useNavigate();
  const [option, setOption] = useState<boolean>(false);
  const [pinNumber, setPinNumber] = useState<string>('');

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
      {/* 안녕 난 로그인이야~ */}
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
          <LoginStyle.WrapPin>
            <LoginStyle.PinTitle>LOGIN</LoginStyle.PinTitle>
            <LoginStyle.WrapIdpw>
              <LoginStyle.IdIcon />
              <LoginStyle.LoginInput placeholder="admin" disabled />
            </LoginStyle.WrapIdpw>
            <LoginStyle.WrapIdpw>
              <LoginStyle.PwIcon />
              <LoginStyle.LoginInput
                type="password"
                placeholder="password"
                name="pinNumber"
                value={pinNumber}
                onChange={onChage}
              />
            </LoginStyle.WrapIdpw>
            <LoginStyle.WrapBtn onClick={handleLogin}>
              Sign In
            </LoginStyle.WrapBtn>
          </LoginStyle.WrapPin>
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
