import React from 'react';
import * as DetailStyle from './ReturnDetail_Style';
import BookImage from '../../Resources/Images/BookImage.jpg';

function ReturnDetail() {
  return (
    <div>
      <DetailStyle.BookDiv>
        <DetailStyle.BookImg src={BookImage} />
        <DetailStyle.BookName>
          24단계 실습으로 정복하는 쿠버네티스
        </DetailStyle.BookName>
        <DetailStyle.BookWriter>이정훈 저</DetailStyle.BookWriter>
      </DetailStyle.BookDiv>
    </div>
  );
}

export default ReturnDetail;
