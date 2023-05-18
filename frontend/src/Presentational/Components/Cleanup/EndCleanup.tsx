import React from 'react';
import { useNavigate } from 'react-router-dom';
import { getTurtlebot } from '../../../store/api';
import Btn from '../../Common/Btn';
import axios from 'axios';

const API_URL = 'https://k8d101.p.ssafy.io/api';

function EndCleanup() {
  const navigate = useNavigate();

  const goTurtlebot = () => {
    axios
      .post(`${API_URL}/turtlebot`, {
        bookIds: [],
        withCredentials: true,
      })
      .then((res) => {
        console.log(res);
        navigate(`/`);
      });
    navigate('/');
  };

  return (
    <div>
      모든 도서를 정리하였습니다.
      <Btn
        message="원위치로"
        go={goTurtlebot}
        position="absolute"
        bottom="20px"
      />
    </div>
  );
}

export default EndCleanup;
