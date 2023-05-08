import React, { useState, ChangeEvent } from 'react';
import * as LoginStyle from '../../Pages/LoginPage_Style'
import { useNavigate } from 'react-router-dom';
import { socket } from '../../../socket';
import { AddLoginPin } from '../../../store/api';

function PinLogin() {
  const navigate = useNavigate();
  const [pinNumber, setPinNumber] = useState<string>('');

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
    </LoginStyle.WrapLogin>
  );
}

export default PinLogin;
