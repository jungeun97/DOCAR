import React, { useState, ChangeEvent, useRef, useEffect } from 'react';
import * as LoginStyle from '../../Pages/LoginPage_Style';
import { useNavigate } from 'react-router-dom';
import { AddLoginPin } from '../../../store/api';
import Keyboard from 'react-simple-keyboard';
import 'react-simple-keyboard/build/css/index.css';
import { LoginError } from './LoginError';
import styled from 'styled-components';

const StyledKeyboardWrapper = styled.div`
  width: 100%;
`;

const StyledButton = styled.button`
  width: 20%;
`;

function PinLogin() {
  const navigate = useNavigate();
  const [pinNumber, setPinNumber] = useState<string>('');
  const [layout, setLayout] = useState('default');
  const keyboard2 = useRef<any>();
  const [usekeyboard, setUsekeyboard] = useState(false);

  useEffect(() => {
    keyboard2.current?.setInput(pinNumber);
  }, [usekeyboard]);

  const handleLogin = async () => {
    console.log(pinNumber);
    try {
      const result = await AddLoginPin(pinNumber);
      if (result) {
        navigate('/cleanup');
      } else {
        LoginError();
        setPinNumber('');
        keyboard2.current.clearInput();
      }
    } catch (error) {
      LoginError();
      setPinNumber('');
      keyboard2.current.clearInput();
    }
  };

  const onChange1 = (input: any) => {
    setPinNumber(input);
  };

  const onChangeInput = (event: React.ChangeEvent<HTMLInputElement>): void => {
    const input = event.target.value;
    setPinNumber(input);
    keyboard2.current.setInput(input);
  };

  const onKeyPress = (button: string) => {
    if (button === '{enter}') handleLogin();
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
          onChange={(e) => onChangeInput(e)}
        />
      </LoginStyle.WrapIdpw>
      <LoginStyle.WrapBtn onClick={handleLogin}>Sign In</LoginStyle.WrapBtn>
      {usekeyboard && (
        <StyledKeyboardWrapper>
          <Keyboard
            keyboardRef={(r) => (keyboard2.current = r)}
            layoutName={layout}
            onChange={onChange1}
            onKeyPress={onKeyPress}
            mergeDisplay={true}
            layout={{
              default: ['1 2 3', '4 5 6', '7 8 9', '{bksp} 0 {enter}'],
            }}
            buttonTheme={[
              {
                class: 'hg-button',
                buttons: '{enter} {bksp}',
              },
            ]}
            renderButton={(button: string) => (
              <StyledButton>{button}</StyledButton>
            )}
          />
        </StyledKeyboardWrapper>
      )}
    </LoginStyle.WrapLogin>
  );
}

export default PinLogin;
