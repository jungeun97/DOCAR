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
  font-size: 2rem;
  font-weight: bold;
  margin-top: 3rem;
`;

export const ImgDiv = styled.div``;

export const barcodeImg = styled.img`
  width: 6rem;
  height: 6rem;
  margin-bottom: 80px;
  margin-right: 50px;
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
      transform: rotate(5deg);
    }
    100% {
      transform: rotate(-5deg);
    }
  }
  animation: left-right 1s infinite ease-in-out alternate;
  margin-bottom: 50px;
`;
