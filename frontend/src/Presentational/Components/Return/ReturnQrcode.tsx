import React from 'react';
import * as ReturnQrStyle from './ReturnQrcode_Style';
import qrcode from '../../../Resources/Images/qrcode.png';

function ReturnQrcode() {
  return (
    <ReturnQrStyle.WrapReturn>
      <ReturnQrStyle.ReturnText>
        반납할 책의 QR을 찍어 주세요.
      </ReturnQrStyle.ReturnText>
      <ReturnQrStyle.Img src={qrcode} />
    </ReturnQrStyle.WrapReturn>
  );
}

export default ReturnQrcode;
