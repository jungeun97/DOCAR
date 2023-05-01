import React, { useState, useEffect } from 'react';
import * as DetailStyle from './ReturnDetail_Style';
import BookImage from '../../../Resources/Images/BookImage.jpg';
import defaultImage from '../../../Resources/Images/defaultImage.png';
import Swal from 'sweetalert2';
import withReactContent from 'sweetalert2-react-content';
import Btn from '../../Common/Btn';
import socket from '../../../socket';
import { AddReturnBook, BookDetail } from '../../../store/api';
import { useRecoilState } from 'recoil';
import { barcodeNumState } from '../../../store/atoms';

interface ReturnDetail {
  ClickedReturnBtn: () => void;
}

function ReturnDetail(props: ReturnDetail) {
  const [barcodeNum, setBarcodeNum] = useRecoilState(barcodeNumState);
  const [distance, setDistance] = useState(0);
  const [seosorData, setSensorData] = useState(0);
  const [bookInfo, setBookInfo] = useState<BookDetail | null>(null);
  const [qrUrl, setQrUrl] = useState('');

  const MySwal = withReactContent(Swal);

  const ChangeDistance = () => {
    setDistance(distance + 1);
  };

  useEffect(() => {
    if (barcodeNum !== 0) {
      AddReturnBookAPI();
    } else {
      console.log('디테일페이지', barcodeNum);
    }
  }, []);

  // useEffect(() => {
  //   AddReturnBookAPI();
  // }, [barcodeNum]);

  const AddReturnBookAPI = async () => {
    const result = await AddReturnBook(barcodeNum);
    if (result) {
      setBookInfo(result);
    } else {
      setModal();
    }
    console.log('반납바코드', barcodeNum);
  };

  useEffect(() => {
    //     if (barcodeNum !== 0) {
    //   AddReturnBookAPI();
    // } else {
    //   console.log('디테일페이지', barcodeNum);
    if (barcodeNum !== 0) {
      console.log('handleReturn 함수 실행');
      handleReturn();
    }
  }, [barcodeNum]);

  const handleReturn = async () => {
    if (seosorData !== distance) {
      setDistance(seosorData);
      console.log('책 반납 처리');
      AddReturnBookAPI();
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
          <DetailStyle.BookImg src={bookInfo?.cover} />
          <DetailStyle.BookTextDiv>
            <DetailStyle.BookName>{bookInfo?.bookName}</DetailStyle.BookName>
            <DetailStyle.BookWriter>
              {bookInfo?.author} 저
            </DetailStyle.BookWriter>
          </DetailStyle.BookTextDiv>
        </DetailStyle.BookDiv>
        <DetailStyle.PositionText>
          {bookInfo?.floor}번째 선반에 책을 넣으세요.
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
        go={props.ClickedReturnBtn}
        position="absolute"
        bottom="20px"
        right="20px"
      />
    </DetailStyle.WrapDetail>
  );
}

export default ReturnDetail;
