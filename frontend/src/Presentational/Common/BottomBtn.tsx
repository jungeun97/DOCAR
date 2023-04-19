import React from 'react';
import styled from 'styled-components';

interface BtnProps {
  message: string;
  go: () => void;
}

const redColor = '#8088A2';
const transition = 'all 0.25s cubic-bezier(0.53, 0.01, 0.35, 1.5)';
const submitButtonBorderRadius = '60px';

const ButtonStyle = styled.button`
  margin-top: 35px;
  background-color: white;
  border: 1px solid ${redColor};
  line-height: 0;
  font-size: 17px;
  display: inline-block;
  box-sizing: border-box;
  padding: 20px 15px;
  border-radius: ${submitButtonBorderRadius};
  color: ${redColor};
  font-weight: 100;
  letter-spacing: 0.01em;
  position: absolute;
  bottom: 20px;
  transition: ${transition};
  /* font-family: 'GmarketSansMedium'; */

  &:hover {
    color: white;
    background-color: ${redColor};
  }
  &:focus {
    color: white;
    background-color: ${redColor};
  }
`;

function BottomBtn(props: BtnProps) {
  return <ButtonStyle onClick={props.go}>{props.message}</ButtonStyle>;
}

export default BottomBtn;
