import styled from 'styled-components';

export const WrapList = styled.div`
  width: 100%;
  height: 100%;
  display: flex;
  flex-direction: column;
  justify-content: center;
  align-items: center;
`;

export const ListDiv = styled.div`
  height: 250px;
  overflow-y: scroll;
`;

export const ListTitle = styled.div`
  font-size: 1.5rem;
  font-weight: bold;
  text-align: center;
`;

export const BookDiv = styled.div`
  display: flex;
  margin-bottom: 1rem;
`;

export const BookImg = styled.img`
  /* width: 3rem;
  height: 4rem;
  margin-right: 0.5rem; */
  height: 100px;
  
`;

export const BookTextDiv = styled.div`
  display: flex;
  /* flex-direction: column; */
  /* width: 20rem; */
  padding: 5px;
  justify-content: space-between;
  align-items: center;
`;

export const BookName = styled.div`
  font-size: 1rem;
  /* margin-right: 0.5rem; */
  /* text-align: center; */
`;

export const BookWriter = styled.div`
  /* font-size: 0.75rem; */
  /* text-align: end; */
`;

// 미스터리액트
// Table = Thead + Tbody ;; Thead는 상단 고정 Tbody는 scroll
export const Table = styled.table`
  /* tr태그에 border를 적용시키기 위해 아래 코드 추가  */
  border-collapse: collapse;
  border: 2px solid skyblue;
`;

export const Thead = styled.thead`
  display: block;
`;

export const Tbody = styled.tbody`
  display: block;
  height: 300px;
  overflow: auto;
`;

export const Tbody2 = styled.tbody`
  display: block;
  height: 225px;
  overflow: auto;
`;

// tr = 하나의 행
export const TableTr = styled.tr`
  height: 100px;
  background-color: pink;
  border-bottom: 1px solid black;
  /* padding-bottom: 10px; */
`;

// 상단 고정 행
export const TableTr2 = styled.tr`
  height: 30px;
  background-color: skyblue;
  border-bottom: 1px solid black;
`;

export const TableTr3 = styled.tr`
  height: 40px;
  /* background-color: blue; */
  border-bottom: 1px solid black;
`;

// Tbody에 들어가는 셀, th는 가운데 정렬, td는 왼쪽 정렬
export const ThImg = styled.th`
  width: 150px;
  /* display: flex; */
  /* align-items: center; */
  padding: 10px;
  /* border: 5px solid yellowgreen; */
`;

export const ThTitle = styled.th`
  width: 250px;
`;

export const ThTitle2 = styled.th`
  width: 250px;
  border-left: 1px solid black;
  border-right: 1px solid black;
`;

export const ThWriter = styled.th`
  width: 200px;
`;

export const ThCheck = styled.th`
  width: 50px;
`;
