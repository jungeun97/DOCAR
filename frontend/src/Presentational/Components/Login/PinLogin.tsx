import React, { useState, ChangeEvent, useRef } from 'react';
import * as LoginStyle from '../../Pages/LoginPage_Style';
import { useNavigate } from 'react-router-dom';
import { socket } from '../../../socket';
import { AddLoginPin } from '../../../store/api';
import Keyboard from 'react-simple-keyboard';
import 'react-simple-keyboard/build/css/index.css';

function PinLogin() {
  const navigate = useNavigate();
  const [pinNumber, setPinNumber] = useState<string>('');
  const [layout, setLayout] = useState('default');
  // const keyboard2 = useRef(null);
  const [usekeyboard, setUsekeyboard] = useState(false);  // 키보드 on/off  (useRef, focus 사용 실패함)

  const handleLogin = async () => {
    console.log(pinNumber);
    try {
      const result = await AddLoginPin(pinNumber);
      if (result) {
        navigate('/cleanup');
      } else {
        alert('로그인 실패');
        // setPinNumber('');
      }
    } catch (error) {
      alert('로그인 실패');
      // setPinNumber('');
    }
  };

  const onChange1 = (input: any) => {
    console.log('Input changed =>', input);
    setPinNumber(input);
    
  };

  const onChangeInput = (event: { target: { value: any } }) => {
    const input = event.target.value;
    setPinNumber(input);
    
  };

  const handleShift = () => {
    const newLayoutName = layout === 'default' ? 'shift' : 'default';
    console.log('newLayoutName =>', newLayoutName);
    setLayout(newLayoutName);
  };

  const onKeyPress = (button: any) => {
    console.log('Button pressed =>', button);
    if (button === '{enter}') handleLogin();
    if (button === '{shift}' || button === '{lock}') handleShift();
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
          onClick={() => {
            setUsekeyboard(!usekeyboard);
          }}
          type="password"
          placeholder="password"
          name="pinNumber"
          value={pinNumber}
          onChange={onChangeInput}
        />
      </LoginStyle.WrapIdpw>
      <LoginStyle.WrapBtn onClick={handleLogin}>Sign In</LoginStyle.WrapBtn>
      {usekeyboard ? (
        <Keyboard
          // keyboardRef={keyboard2}
          layoutName={layout} // 이거 안하면 shift 처리 안된다.
          onChange={onChange1}
          onKeyPress={onKeyPress}
          layout={{
            default: [
              "1 2 3",
              "4 5 6",
              "7 8 9",
              "{bksp} 0 {enter}"
            ],

          }}
        />
      ) : (
        <></>
      )}
    </LoginStyle.WrapLogin>
  );
}

export default PinLogin;
