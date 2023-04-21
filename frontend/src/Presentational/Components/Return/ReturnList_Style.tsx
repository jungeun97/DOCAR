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
  margin-bottom: 0.6rem;
`;

export const BookDiv = styled.div`
  display: flex;
  margin-bottom: 1rem;
`;

export const BookTextDiv = styled.div`
  display: flex;
  padding: 5px;
  justify-content: space-between;
  align-items: center;
`;

export const TableDiv = styled.div`
  width: 100px;
  height: 100px;
  background-color: skyblue;
  border-radius: 10px;
`;
