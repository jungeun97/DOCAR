import styled from 'styled-components';

export const WrapReturn = styled.div`
  width: 100%;
  height: 100%;
  display: flex;
  flex-direction: column;
  justify-content: center;
  align-items: center;
`;

export const ReturnText = styled.div`
  font-size: 1.5rem;
  font-weight: bold;
  margin-bottom: 3rem;
`;

export const Img = styled.img`
  width: 8rem;
  height: 8rem;
  @keyframes left-right {
    0% {
      transform: rotate(0deg);
    }
    50% {
      transform: rotate(0deg);
    }
    75% {
      transform: rotate(10deg);
    }
    100% {
      transform: rotate(-10deg);
    }
  }
  margin-bottom: 50px;
  animation: left-right 1s infinite ease-in-out alternate;
`;
