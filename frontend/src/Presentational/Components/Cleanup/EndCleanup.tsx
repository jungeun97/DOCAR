import React from 'react';
import Btn from '../../Common/Btn';

function EndCleanup() {
  return (
    <div>
      모든 도서를 정리하였습니다. 수고하셨습니다아
      <Btn message="원위치로" go={() => {}} position="absolute" bottom="20px" />
    </div>
  );
}

export default EndCleanup;
