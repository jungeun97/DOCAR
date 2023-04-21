import { atom } from 'recoil';

// 오류 방지용 예시 - 다크 모드 예시
export const isDarkAtom = atom({
  key: 'isDark',
  default: true,
});
