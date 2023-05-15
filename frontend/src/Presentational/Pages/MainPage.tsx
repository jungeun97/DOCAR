import React from 'react';
import * as MainStyle from './MainPage_Style';
import { useNavigate } from 'react-router-dom';
import returnIcon from '../../Resources/Images/return.png';
import bookshelf from '../../Resources/Images/bookshelf.png';

function MainPage() {
  const navigate = useNavigate();

  const ToReturn = () => {
    navigate(`/return`);
  };

  const ToCleanup = () => {
    navigate(`/login`);
  };

  return (
    <MainStyle.WrapMain>
      <MainStyle.WrapBtn onClick={ToReturn}>
        <MainStyle.Img src={returnIcon} />
        반납
      </MainStyle.WrapBtn>
      <MainStyle.WrapBtn onClick={ToCleanup}>
        <MainStyle.Img src={bookshelf} />
        정리
      </MainStyle.WrapBtn>
    </MainStyle.WrapMain>
  );
}

export default MainPage;
