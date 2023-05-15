import React from 'react';
import * as CleanupStyle from './CleanupPage_Style';
import { Outlet } from 'react-router-dom';
import { RecoilRoot } from 'recoil';

function CleanupPage() {

  return (
    <RecoilRoot>
      <CleanupStyle.WrapClean>
        <Outlet />
      </CleanupStyle.WrapClean>
    </RecoilRoot>
  );
}

export default CleanupPage;
