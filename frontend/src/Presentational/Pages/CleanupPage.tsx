import React, { useEffect, useState } from 'react';
import * as CleanupStyle from './CleanupPage_Style';
import axios from 'axios';
import { useNavigate, Outlet } from 'react-router-dom';
import BookList from './../Components/Cleanup/BookList';
import { RecoilRoot } from 'recoil';

function CleanupPage() {
  const navigate = useNavigate();

  return (
    <RecoilRoot>
      <CleanupStyle.WrapClean>
        <Outlet />
      </CleanupStyle.WrapClean>
    </RecoilRoot>
  );
}

export default CleanupPage;
