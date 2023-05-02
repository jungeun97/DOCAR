import React, { useEffect, useState } from 'react';
import * as CleanupStyle from './CleanupPage_Style';
import axios from 'axios';
import { useNavigate, Outlet } from 'react-router-dom';
import BookList from './../Components/Cleanup/BookList';

function CleanupPage() {
  const navigate = useNavigate();

  return (
    <CleanupStyle.WrapClean>
      {/* <BookList /> */}
      <Outlet />
      {/* <div>123</div> */}
    </CleanupStyle.WrapClean>
  );
}

export default CleanupPage;
