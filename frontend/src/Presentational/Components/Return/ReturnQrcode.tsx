import React from 'react';
import * as ReturnQrStyle from './ReturnQrcode_Style';
import qrcode from '../../../Resources/Images/qrcode.png';

interface ReturnQrcode {
  ReturnMode: () => void;
}

function ReturnQrcode(props: ReturnQrcode) {
  return (
    <ReturnQrStyle.WrapReturn>
      <ReturnQrStyle.ReturnText>
        반납할 책의 QR을 찍어 주세요.
      </ReturnQrStyle.ReturnText>
      <ReturnQrStyle.Img src={qrcode} onClick={props.ReturnMode} />
    </ReturnQrStyle.WrapReturn>
  );
}

export default ReturnQrcode;
