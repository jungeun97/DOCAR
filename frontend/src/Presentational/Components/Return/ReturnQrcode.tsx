import React, { useState } from 'react';
import * as ReturnQrStyle from './ReturnQrcode_Style';
import scanner from '../../../Resources/Images/scanner.png';
import barcode from '../../../Resources/Images/barcode.png';
import socket from '../../../socket';
import { AddReturnBook } from '../../../store/api';

interface ReturnQrcode {
  ReturnMode: () => void;
}

function ReturnQrcode(props: ReturnQrcode) {
  return (
    <ReturnQrStyle.WrapReturn>
      <ReturnQrStyle.ImgDiv>
        <ReturnQrStyle.barcodeImg src={barcode} onClick={props.ReturnMode} />
        <ReturnQrStyle.Img src={scanner} onClick={props.ReturnMode} />
      </ReturnQrStyle.ImgDiv>
      <ReturnQrStyle.ReturnText>
        반납할 책의 바코드를 찍어 주세요.
      </ReturnQrStyle.ReturnText>
    </ReturnQrStyle.WrapReturn>
  );
}

export default ReturnQrcode;
