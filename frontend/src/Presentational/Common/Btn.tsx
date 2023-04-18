import React from 'react';
import styled from 'styled-components';

const WrapBtn = styled.div`
  display: flex;
  justify-content: center;
  align-items: center;
  background-color: black;
  border-radius: 50%;
  width: 100px;
  height: 100px;
  color: white;
`;

interface Props {
  text: string;
  go: () => void;
}

function Btn({ text, go }: Props) {
  return <WrapBtn onClick={go}>{text}</WrapBtn>;
}

export default Btn;
