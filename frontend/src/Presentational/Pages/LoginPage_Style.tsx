import styled, { keyframes } from 'styled-components';
import { AiOutlineUser, AiFillLock } from 'react-icons/ai';

export const WrapLogin = styled.div`
  width: 100%;
  height: 100%;
  display: flex;
  flex-direction: column;
  justify-content: center;
  align-items: center;
`;

export const Img = styled.img`

  @keyframes up-down {
    from {
      transform: translatey(0px);
    }
    to {
      transform: translatey(-20px);
    }
  }
  animation: up-down 1.4s infinite ease-in-out alternate;
`;

export const Span = styled.span``;

export const Option = styled.div`
  /* width: 400px; */
  /* height: 50px; */
  background-color: blue;
  display: flex;
  justify-content: center;
  align-items: center;
  font-size: 24px;
`;

export const WrapPin = styled.form`
  display: flex;
  justify-content: center;
  align-items: center;
  flex-direction: column;
  background-color: white;
  border-radius: 10px;
  width: 600px;
  height: 330px;
`;
export const PinTitle = styled.div`
  font-size: 36px;
  margin-bottom: 20px;
`;

export const WrapIdpw = styled.div`
  display: flex;
  align-items: center;
  width: 400px;
  height: 40px;
  border-radius: 10px;
  margin-bottom: 10px;
  border: 5px solid gray;
`;

export const PwInput = styled.input`
  width: 350px;
  height: 35px;
  color: black;
  /* background-color: violet; */
  font-size: 24px;
  outline: none;
  border: none;
  /* :focus {
    outline: none;
  } */
`;

// 핀 번호 - 아이콘
export const IdIcon = styled(AiOutlineUser)`
  width: 40px;
  height: 40px;
`;
export const PwIcon = styled(AiFillLock)`
  width: 40px;
  height: 40px;
`;

// 핀 번호 - 로그인 버튼
export const BtnLogin = styled.div`
  display: flex;
  justify-content: center;
  align-items: center;
  /* font-weight: 30px; */
  font-size: 36px;
  width: 400px;
  height: 60px;
  background-color: skyblue;
  border-radius: 10px;
  margin-top: 20px;
`;
