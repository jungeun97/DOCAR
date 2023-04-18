import React, { useState, ChangeEvent } from 'react';
import * as LoginStyle from './LoginPage_Style';
import qrcode from '../../Resources/Images/qrcode.png';
import { AiOutlineUser } from 'react-icons/ai';
import { useNavigate } from 'react-router-dom';

function LoginPage() {
  const navigate = useNavigate();
  const [option, setOption] = useState<boolean>(false);
  const [pw, setPw] = useState<string>('');

  const ChangeLogin = () => {
    setOption(!option);
  };

  const onChage = (e: React.ChangeEvent<HTMLInputElement>) => {
    setPw(e.target.value);
  };

  return (
    <LoginStyle.WrapLogin>
      {/* 안녕 난 로그인이야~ */}
      {!option ? (
        <>
          <LoginStyle.Span>사원증의 qr을 찍어주세요~</LoginStyle.Span>
          <LoginStyle.Img src={qrcode} />
          <LoginStyle.Option onClick={ChangeLogin}>
            PIN 번호로 로그인
          </LoginStyle.Option>
        </>
      ) : (
        <>
          <LoginStyle.WrapPin>
            <LoginStyle.PinTitle>Login</LoginStyle.PinTitle>
            <LoginStyle.WrapIdpw>
              <LoginStyle.IdIcon />
              <LoginStyle.PwInput placeholder="admin" disabled />
            </LoginStyle.WrapIdpw>
            <LoginStyle.WrapIdpw>
              <LoginStyle.PwIcon />
              <LoginStyle.PwInput
                type="password"
                placeholder="password"
                name="pw"
                value={pw}
                onChange={onChage}
              />
            </LoginStyle.WrapIdpw>
            <LoginStyle.BtnLogin onClick={()=>{
              navigate('/cleanup')
            }}>Sign In</LoginStyle.BtnLogin>
          </LoginStyle.WrapPin>
          <LoginStyle.Option onClick={ChangeLogin}>
            QR로 로그인
          </LoginStyle.Option>
        </>
      )}
    </LoginStyle.WrapLogin>
  );
}

export default LoginPage;
