import { atom } from 'recoil';
import { CartBookType, ReturnBookType } from './api';

// 책 반납
export const isReturnState = atom({
  key: 'isReturnState',
  default: false,
});

export const isReturnError = atom<string | null>({
  key: 'isReturnError',
  default: null,
});

// 책 정보
export const isBookInfoState = atom<ReturnBookType | null>({
  key: 'isBookInfoState',
  default: null,
});

// 책 바코드
export const barcodeNumState = atom({
  key: 'barcodeNumState',
  default: 0,
});

// 거리값
export const distanceState = atom({
  key: 'distanceState',
  default: 0,
});

// 체크표시 된 책
export const checkedBookState = atom<CartBookType[]>({
  key: 'checkedBookState',
  default: [],
});
