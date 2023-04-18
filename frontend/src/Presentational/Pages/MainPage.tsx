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
      <MainStyle.WrapBtn>
        <Btn message="반납" go={ToReturn} />
        <Btn message="정리" go={ToCleanup} />
      </MainStyle.WrapBtn>
    </MainStyle.WrapMain>
  );
}

export default MainPage;
