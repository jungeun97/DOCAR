import React, { useEffect, useState } from 'react';
import * as ListStyle from './ReturnList_Style';
import Btn from '../../Common/Btn';
import { ReturnBookType, getReturnList } from '../../../store/api';
import ReturnBookTable from '../ReturnBookTable';

interface ReturnList {
  ReturnComplete: () => void;
}

function ReturnList(props: ReturnList) {
  const [bookList, setbookList] = useState<ReturnBookType[]>([]);

  useEffect(() => {
    const getReturnListAPI = async () => {
      const result = await getReturnList();
      console.log('result', result);
      if (result) {
        setbookList(result);
      }
    };
    getReturnListAPI();
  }, []);

  return (
    <ListStyle.WrapList>
      <ListStyle.ListTitle>반납 책 목록</ListStyle.ListTitle>
      <ReturnBookTable books={bookList} />
      <Btn
        message="위 사항이 맞다면 버튼을 눌러주세요."
        go={props.ReturnComplete}
        position="relative"
      />
    </ListStyle.WrapList>
  );
}

export default ReturnList;
