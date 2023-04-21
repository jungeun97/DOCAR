import React, { useState, useEffect } from 'react';
import * as DetailStyle from './ReturnDetail_Style';
import BookImage from '../../../Resources/Images/BookImage.jpg';
import Swal from 'sweetalert2';
import withReactContent from 'sweetalert2-react-content';
import Btn from '../../Common/Btn';
import API from '../../../store/api';

interface ReturnDetail {
  ReturnState: () => void;
}

function ReturnDetail(props: ReturnDetail) {
  const [distance, setDistance] = useState(0);
  const [seosorData, setSensorData] = useState(0);
  const [qrUrl, setQrUrl] = useState('');

  const MySwal = withReactContent(Swal);

  const ChangeDistance = () => {
    setDistance(distance + 1);
  };

  const handleReturn = () => {
    if (seosorData !== distance) {
      setDistance(seosorData);
      // 반납 처리 API 호출
      // API.post('return', { qr_url: qrUrl })
      //   .then((response) => {
      //     console.log(response.data);
      //   })
      //   .catch((error) => {
      //     console.error(error);
      //   });
      console.log('반납 완료');
    } else {
      setModal();
    }
  };

  const setModal = () => {
    MySwal.fire({
      title: '책 반납 실패',
      text: '이전의 책을 선반에 올려놓은 뒤 다시 시도해주세요.',
      icon: 'error',
      confirmButtonColor: '#3085d6',
      cancelButtonColor: '#d33',
      confirmButtonText: '확인',
      reverseButtons: true,
    });
  };

  return (
    <DetailStyle.WrapDetail>
      <DetailStyle.BookDetailDiv>
        <DetailStyle.BookDiv>
          <DetailStyle.BookImg src={BookImage} />
          <DetailStyle.BookTextDiv>
            <DetailStyle.BookName>
              24단계 실습으로 정복하는 쿠버네티스
            </DetailStyle.BookName>
            <DetailStyle.BookWriter>이정훈 저</DetailStyle.BookWriter>
          </DetailStyle.BookTextDiv>
        </DetailStyle.BookDiv>
        <DetailStyle.PositionText>
          2번째 선반에 책을 넣으세요.
          <button onClick={ChangeDistance}>책장에 책 넣기</button>
          <button onClick={handleReturn}>바코드 인식</button>
        </DetailStyle.PositionText>
      </DetailStyle.BookDetailDiv>
      <DetailStyle.DetailText>
        계속 반납하시려면 바코드를 찍어주세요.
      </DetailStyle.DetailText>
      <DetailStyle.DetailText>
        책을 모두 반납하셨으면 버튼을 눌러주세요.
      </DetailStyle.DetailText>
      <Btn
        message="반납완료"
        go={props.ReturnState}
        position="absolute"
        bottom="20px"
        right="20px"
      />
    </DetailStyle.WrapDetail>
  );
}

export default ReturnDetail;
