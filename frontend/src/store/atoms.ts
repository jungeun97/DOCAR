import { atom } from 'recoil';
import { CartBookType } from './api';

// 책 반납
export const isReturnState = atom({
  key: 'isReturnState',
  default: false,
});

// 책 바코드
export const barcodeNumState = atom({
  key: 'barcodeNumState',
  default: 0,
});

// 체크표시 된 책
export const checkedBookState = atom<CartBookType[]>({
  key: 'checkedBookState',
  default: [],
});
