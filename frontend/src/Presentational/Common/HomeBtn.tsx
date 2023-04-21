import React from 'react';
import { useNavigate } from 'react-router-dom';
import styled from 'styled-components';
import home from '../../Resources/Images/home.png';

interface HomeBtn {
  goHome: () => void;
}
const HomeBtnStyle = styled.img`
  width: 1.5rem;
  height: 1.5rem;
  position: fixed;
  color: gray;
  top: 15px;
  left: 15px;
  z-index: 1;
`;

function HomeBtn(props: HomeBtn) {
  return <HomeBtnStyle src={home} onClick={props.goHome} />;
}

export default HomeBtn;
