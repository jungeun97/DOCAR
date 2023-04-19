import React from 'react';
import * as DetailStyle from './ReturnDetail_Style';
import BookImage from '../../Resources/Images/BookImage.jpg';

function ReturnDetail() {
  return (
    <div>
      <DetailStyle.BookDiv>
        <DetailStyle.BookImg src={BookImage} />
        <DetailStyle.BookTextDiv>
          <DetailStyle.BookName>
            24단계 실습으로 정복하는 쿠버네티스
          </DetailStyle.BookName>
          <DetailStyle.BookWriter>이정훈 저</DetailStyle.BookWriter>
        </DetailStyle.BookTextDiv>
      </DetailStyle.BookDiv>
      <p>2번째 선반에 책을 넣으세요.</p>
    </div>
  );
}

export default ReturnDetail;
