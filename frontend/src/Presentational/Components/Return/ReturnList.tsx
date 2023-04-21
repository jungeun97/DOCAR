import React from 'react';
import * as ListStyle from './ReturnList_Style';
import BookData from '../BookData.json';
import Btn from '../../Common/Btn';
import BookTable from '../BookTable';

interface ReturnList {
  ReturnComplete: () => void;
}

function ReturnList(props: ReturnList) {
  return (
    <ListStyle.WrapList>
      <ListStyle.ListTitle>반납 책 목록</ListStyle.ListTitle>
      <BookTable />
      <Btn
        message="위 사항이 맞다면 버튼을 눌러주세요."
        go={props.ReturnComplete}
        position="relative"
      />
    </ListStyle.WrapList>
  );
}

export default ReturnList;
