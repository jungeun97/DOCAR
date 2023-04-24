import { Outlet, useNavigate } from 'react-router-dom';
import styled from 'styled-components';
import HomeBtn from '../Common/HomeBtn';

function Layout() {
  const navigate = useNavigate();

  const goHome = () => {
    navigate(`/`);
  };
  return (
    <>
      <HomeBtn goHome={goHome} />
      <Outlet />
    </>
  );
}

export default Layout;
