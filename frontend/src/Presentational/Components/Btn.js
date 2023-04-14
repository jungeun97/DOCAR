import React, { useNavigate } from "react";
import styled from "styled-components";
import { Link } from "react-router-dom";

const WrapBtn = styled(Link)`
  display: flex;
  justify-content: center;
  align-items: center;
  width: 150px;
  height: 150px;
  background-color: pink;
  border-radius: 50%;
  cursor: pointer;
`;

function Btn({ name, url }) {
  return <WrapBtn to={`${url}`}>{name}</WrapBtn>;
}

export default Btn;
