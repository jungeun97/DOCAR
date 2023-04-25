import React, { useState } from 'react';
import * as MainStyle from './MainPage_Style';
import Btn from './../Common/Btn';
import { useNavigate } from 'react-router-dom';
import returnIcon from '../../Resources/Images/return.png';
import bookshelf from '../../Resources/Images/bookshelf.png';

function MainPage() {
  const navigate = useNavigate();
  const [clicked, setClicked] = useState(false);

  const ToReturn = () => {
    navigate(`/return`);
    // setClicked(true);
    // setTimeout(() => {
    //   setClicked(false);
    //   navigate(`/return`);
    // }, 2000);
  };

  const ToCleanup = () => {
    navigate(`/login`);
    // setClicked(true);
    // setTimeout(() => {
    //   setClicked(false);
    //   navigate(`/login`);
    // }, 2000);
  };

  return (
    <MainStyle.WrapMain>
      {/* MainPage입니당 */}
      <MainStyle.WrapBtn onClick={ToReturn}>
        {/* <Btn message="반납" go={ToReturn} /> */}
        {/* <MainStyle.Mbtn>반납</MainStyle.Mbtn> */}
        <MainStyle.Img src={returnIcon} />
        반납
      </MainStyle.WrapBtn>
      <MainStyle.WrapBtn onClick={ToCleanup}>
        {/* <MainStyle.Mbtn>정리</MainStyle.Mbtn> */}
        <MainStyle.Img src={bookshelf} />
        정리
        {/* <Btn message="정리" go={ToCleanup} /> */}
      </MainStyle.WrapBtn>
    </MainStyle.WrapMain>
  );
}

export default MainPage;
