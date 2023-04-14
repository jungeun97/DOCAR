import React from "react";
import * as AdminPageStyle from "./AdminPage_Style";
import Btn from "./../Components/Btn";

function AdminPage(props) {
  return (
    <AdminPageStyle.adminpage>
      <Btn name="정리" />
      <Btn name="이동" />
    </AdminPageStyle.adminpage>
  );
}

export default AdminPage;
