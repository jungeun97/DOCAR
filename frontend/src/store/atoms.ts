import { atom } from 'recoil';

// 책 반납
export const isReturnState = atom({
  key: 'isReturnState',
  default: false,
});
