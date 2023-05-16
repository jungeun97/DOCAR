import styled from 'styled-components';

// Table = Thead + Tbody ;; Thead는 상단 고정 Tbody는 scroll
export const Table = styled.table`
  /* tr태그에 border를 적용시키기 위해 아래 코드 추가  */
  border-collapse: collapse;
  box-shadow: 0 2px 8px rgba(0, 0, 0, 0.2);
`;

export const Thead = styled.thead`
  display: block;
`;

export const Tbody = styled.tbody`
  display: block;
  height: 300px;
  /* overflow: auto; */
`;

export const Tbody2 = styled.tbody`
  display: block;
  height: 225px;
  overflow: auto;
`;

// tr = 하나의 행
export const TableTr = styled.tr`
  height: 100px;
  background-color: white;
  border-bottom: 2px solid #f5f5f5;
`;

// 상단 고정 행
export const TableTr2 = styled.tr`
  height: 30px;
  background-color: #cfd0d0;
`;

export const TableTr3 = styled.tr`
  height: 40px;
  /* background-color: blue; */
  border-bottom: 1px solid black;
`;

// Tbody에 들어가는 셀, th는 가운데 정렬, td는 왼쪽 정렬
export const ThImg = styled.th`
  width: 150px;
  padding: 5px;
`;

export const ThTitle = styled.th`
  width: 325px;
`;

export const ThBookFloor = styled.th`
  width: 225px;
`;

export const ThBookFloorCheck = styled.th`
  width: 225px;
  font-size: 1rem;
`;

export const BookFloor = styled.div``;

export const ThTitle2 = styled.th`
  width: 250px;
  border-left: 1px solid black;
  border-right: 1px solid black;
`;
export const checkedTitle = styled.th`
  width: 250px;
  border-right: 1px solid black;
`;

export const ThCheck = styled.th`
  width: 50px;
`;

export const BookImg = styled.img`
  height: 80px;
  border-radius: 0.3rem;
`;

export const BookName = styled.div`
  font-size: 1rem;
`;

export const ThWriter = styled.th`
  width: 150px;
`;

export const BookWriter = styled.div``;
