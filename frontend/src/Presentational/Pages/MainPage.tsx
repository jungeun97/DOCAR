import React from 'react';
import * as MainStyle from './MainPage_Style';
import Btn from './../Common/Btn';
import { useNavigate } from 'react-router-dom';

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
      {/* MainPage입니당 */}
      <MainStyle.WrapBtn onClick={ToReturn}>
        {/* <Btn message="반납" go={ToReturn} /> */}
        {/* <MainStyle.Mbtn>반납</MainStyle.Mbtn> */}
        반납
      </MainStyle.WrapBtn>
      <MainStyle.WrapBtn onClick={ToCleanup}>
        {/* <MainStyle.Mbtn>정리</MainStyle.Mbtn> */}
        정리
        {/* <Btn message="정리" go={ToCleanup} /> */}
      </MainStyle.WrapBtn>
    </MainStyle.WrapMain>
  );
}

export default MainPage;
