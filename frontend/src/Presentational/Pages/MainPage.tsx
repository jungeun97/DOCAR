import React, { useState } from 'react';
import * as MainStyle from './MainPage_Style';
import Btn from './../Common/Btn';
import { useNavigate } from 'react-router-dom';

function MainPage() {
  const navigate = useNavigate();
  const [clicked, setClicked] = useState(false);

  const ToReturn = () => {
    setClicked(true);
    setTimeout(() => {
      setClicked(false);
      navigate(`/return`);
    }, 2000);
  };

  const ToCleanup = () => {
    setClicked(true);
    setTimeout(() => {
      setClicked(false);
      navigate(`/login`);
    }, 2000);
  };

  return (
    <MainStyle.WrapMain>
      {/* MainPage입니당 */}
      <MainStyle.FlipWrapper>
        <MainStyle.WrapBtn onClick={ToReturn}>
          {/* <Btn message="반납" go={ToReturn} /> */}
          {/* <MainStyle.Mbtn>반납</MainStyle.Mbtn> */}
          반납
        </MainStyle.WrapBtn>
      </MainStyle.FlipWrapper>
      <MainStyle.FlipWrapper>
        <MainStyle.WrapBtn onClick={ToCleanup}>
          {/* <MainStyle.Mbtn>정리</MainStyle.Mbtn> */}
          정리
          {/* <Btn message="정리" go={ToCleanup} /> */}
        </MainStyle.WrapBtn>
      </MainStyle.FlipWrapper>
    </MainStyle.WrapMain>
  );
}

export default MainPage;
