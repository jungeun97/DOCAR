/* eslint-disable react/jsx-pascal-case */
import React from "react";
import * as MainPageStyle from "./MainPage_Style";
import Btn from "./../Components/Btn";
import { Link } from "react-router-dom";

function MainPage() {
  return (
    <MainPageStyle.mainpage>
      <Btn name="조회" url="/bookslist" />
      <Btn name="반납" url="/returns" />
    </MainPageStyle.mainpage>
  );
}

export default MainPage;
