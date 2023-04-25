import styled, { keyframes } from 'styled-components';
import { FiUser, FiLock } from 'react-icons/fi';

export const WrapLogin = styled.div`
  width: 100%;
  height: 100%;
  display: flex;
  flex-direction: column;
  justify-content: center;
  align-items: center;
  /* border: 3px solid red; */
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
  margin-bottom: 50px;
  /* animation: up-down 1.4s infinite ease-in-out alternate; */
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
  height: 350px;
  margin-bottom: 40px;
  /* background-color: #e4ebf5; */
  background-color: #f1f3f4;
  border-radius: 1rem;
  box-shadow: 0.3rem 0.3rem 0.6rem #c8d0e7, -0.2rem -0.2rem 0.5rem #ffffff;
`;

export const PinTitle = styled.div`
  font-size: 36px;
  font-weight: Bold;
  margin-bottom: 20px;
`;

export const WrapIdpw = styled.div`
  display: flex;
  align-items: center;
  width: 420px;
  height: 45px;
  border-radius: 10px;
  margin-bottom: 10px;
  /* border: 5px solid gray; */
`;

export const PwInput = styled.input`
  width: 350px;
  height: 50px;
  color: black;
  /* background-color: violet; */
  font-size: 24px;
  outline: none;
  border: none;
  /* :focus {
    outline: none;
  } */
`;

export const LoginInput = styled.input`
  width: 350px;
  height: 40px;
  border: none;
  border-radius: 1rem;
  font-size: 1.4rem;
  padding-left: 1.4rem;
  box-shadow: inset 0.2rem 0.2rem 0.5rem #c8d0e7,
    inset -0.2rem -0.2rem 0.5rem #ffffff;
  background: none;
  font-family: inherit;
  color: #9baacf;

  &::placeholder {
    color: #bec8e4;
  }
  &:focus {
    outline: none;
    box-shadow: 0.3rem 0.3rem 0.6rem #c8d0e7, -0.2rem -0.2rem 0.5rem #ffffff;
  }
`;

// 핀 번호 - 아이콘
export const IdIcon = styled(FiUser)`
  width: 40px;
  height: 30px;
  margin-right: 10px;
`;
export const PwIcon = styled(FiLock)`
  width: 40px;
  height: 30px;
  margin-right: 10px;
`;

// 핀 번호 - 로그인 버튼
export const BtnLogin = styled.div`
  display: flex;
  justify-content: center;
  align-items: center;
  /* font-weight: 30px; */
  font-size: 36px;
  width: 425px;
  height: 80px;
  background-color: skyblue;
  border-radius: 10px;
  margin-top: 20px;
`;

export const WrapBtn = styled.div`
  display: flex;
  width: 425px;
  height: 60px;
  font-size: 30px;
  justify-content: center;
  align-items: center;
  box-shadow: 0.3rem 0.3rem 0.6rem #c8d0e7, -0.2rem -0.2rem 0.5rem #ffffff;
  border-radius: 1rem;
  margin-top: 2rem;
  /* color: #7f7f7f; */
  color: #9baacf;
  /* box-shadow: ; */
  /* rgba(50, 50, 93, 0.25) 0px 50px 100px -20px; */
  /* rgba(0, 0, 0, 0.3) 0px 30px 60px -30px; */
  /* rgba(10, 37, 64, 0.35) 0px -2px 6px 0px inset; */
  &:focus,
  :active {
    box-shadow: inset 0.2rem 0.2rem 0.5rem #c8d0e7,
      inset -0.2rem -0.2rem 0.5rem #ffffff;
  }
`;
