import React from 'react';
import styled from 'styled-components';

interface BtnProps {
  message: string;
  go?: () => void;
  position?: string;
  top?: string;
  right?: string;
  bottom?: string;
}

const baseColor = '#8088A2';
const transition = 'all 0.25s cubic-bezier(0.53, 0.01, 0.35, 1.5)';

const ButtonStyle = styled.button<BtnProps>`
  margin-top: 35px;
  background-color: white;
  border: 1px solid ${baseColor};
  line-height: 0;
  font-size: 17px;
  display: inline-block;
  box-sizing: border-box;
  padding: 20px 15px;
  border-radius: 60px;
  color: ${baseColor};
  font-weight: 100;
  letter-spacing: 0.01em;
  position: ${(props) => props.position};
  top: ${(props) => props.top};
  right: ${(props) => props.right};
  bottom: ${(props) => props.bottom};
  transition: ${transition};

  &:focus,
  &:hover {
    color: white;
    background-color: ${baseColor};
  }
`;

function Btn(props: BtnProps) {
  return (
    <ButtonStyle onClick={props.go} {...props}>
      {props.message}
    </ButtonStyle>
  );
}

export default Btn;
