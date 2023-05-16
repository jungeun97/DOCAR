import React, { useState, useEffect } from 'react';
import * as DetailStyle from './ReturnDetail_Style';
import Swal from 'sweetalert2';
import withReactContent from 'sweetalert2-react-content';
import Btn from '../../Common/Btn';
import { AddReturnBook, ReturnBookType } from '../../../store/api';
import { useRecoilValue, useRecoilState } from 'recoil';
import {
  barcodeNumState,
  distanceState,
  isBookInfoState,
  isReturnError,
} from '../../../store/atoms';

interface ReturnDetail {
  ClickedReturnBtn: () => void;
}

function ReturnDetail(props: ReturnDetail) {
  const barcodeNum = useRecoilValue(barcodeNumState);
  const distance = useRecoilValue(distanceState);
  const [bookInfo, setBookInfo] = useRecoilState(isBookInfoState);
  const [tmpDistance, setTmpDistance] = useState(0);
  const [tmpBarcode, setTmpBarcode] = useState(0);
  const [isApiCalled, setIsApiCalled] = useState(false);
  const [returnError, setReturnError] = useRecoilState(isReturnError);

  const MySwal = withReactContent(Swal);

  useEffect(() => {
    if (barcodeNum !== 0) {
      if (!isApiCalled) {
        setTmpDistance(distance);
        AddReturnBookAPI();
        setIsApiCalled(true);
      } else {
        handleReturn();
      }
    }
  }, [barcodeNum, distance]);

  const AddReturnBookAPI = async () => {
    const result = await AddReturnBook(barcodeNum);
    if (typeof result === 'object' && result !== null) {
      setTmpBarcode(barcodeNum);
      setBookInfo(result);
    } else {
      console.log(result);
      setReturnError(result);
      setModal(result);
    }
    console.log('반납바코드', barcodeNum);
  };

  const handleReturn = async () => {
    if (tmpBarcode !== barcodeNum) {
      if (tmpDistance !== distance) {
        setTmpDistance(distance);
        console.log('책 반납 처리');
        AddReturnBookAPI();
      } else {
        setModal('이전의 책을 선반에 올려놓은 뒤 다시 시도해주세요.');
      }
    }
  };

  const setModal = (message: string | null) => {
    if (message) {
      MySwal.fire({
        title: '책 반납 실패',
        text: message,
        icon: 'error',
        confirmButtonColor: '#3085d6',
        cancelButtonColor: '#d33',
        confirmButtonText: '확인',
        reverseButtons: true,
      });
    }
  };

  return (
    <DetailStyle.WrapDetail>
      <DetailStyle.BookDetailDiv>
        <DetailStyle.BookDiv>
          <DetailStyle.BookImg src={bookInfo?.cover} />
          <DetailStyle.BookTextDiv>
            <DetailStyle.BookName>{bookInfo?.bookName}</DetailStyle.BookName>
            <DetailStyle.BookWriter>
              {bookInfo?.author.split('(')[0].trim()} 저
            </DetailStyle.BookWriter>
          </DetailStyle.BookTextDiv>
        </DetailStyle.BookDiv>
        <DetailStyle.PositionText>
          {bookInfo?.floor}번째 선반에 책을 넣으세요.
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
