import React from 'react';
import BottomBtn from './../../Common/BottomBtn';

function EndCleanup() {
    return (
        <div>
            모든 도서를 정리하였습니다.
            수고하셨습니다아
            <BottomBtn message='원위치로' go={() => {}}/>
        </div>
    );
}

export default EndCleanup;