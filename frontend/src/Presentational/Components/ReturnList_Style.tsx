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
  width: 3rem;
  height: 4rem;
  margin-right: 0.5rem;
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
  margin-right: 0.5rem;
  text-align: center;
`;

export const BookWriter = styled.div`
  font-size: 0.75rem;
  text-align: end;
`;
