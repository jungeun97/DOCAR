import React from 'react';
import { useNavigate } from 'react-router-dom';
import { getTurtlebot } from '../../../store/api';
import Btn from '../../Common/Btn';

function EndCleanup() {
  const navigate = useNavigate();

  const goTurtlebot = () => {
    getTurtlebot();
    navigate('/');
  };

  return (
    <div>
      모든 도서를 정리하였습니다. 수고하셨습니다아
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
