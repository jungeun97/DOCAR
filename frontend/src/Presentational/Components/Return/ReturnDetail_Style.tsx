import styled from 'styled-components';

export const WrapDetail = styled.div`
  width: 100%;
  height: 100%;
  display: flex;
  flex-direction: column;
  /* justify-content: center; */
  align-items: center;
`;

export const BookDetailDiv = styled.div`
  display: flex;
  align-items: center;
  margin-top: 1.5rem;
  margin-bottom: 3rem;
`;

export const BookDiv = styled.div`
  display: flex;
  border-radius: 1rem;
  box-shadow: 0 2px 8px rgba(0, 0, 0, 0.2);
  margin-right: 1.3rem;
  flex-direction: column;
  align-items: center;
  text-align: center;
`;

export const BookImg = styled.img`
  width: 7.5rem;
  height: 10rem;
  margin-top: 1rem;
`;

export const BookTextDiv = styled.div`
  display: flex;
  flex-direction: column;
  width: 13rem;
  padding: 20px;
  justify-content: center;
  text-align: center;
`;

export const BookName = styled.span`
  font-size: 1.1rem;
  font-weight: bold;
  margin-bottom: 0.5rem;
`;

export const BookWriter = styled.span``;

export const PositionText = styled.div`
  font-size: 1.5rem;
  font-weight: bold;
  width: 10rem;
`;

export const DetailText = styled.div`
  font-size: 1.25rem;
  font-weight: bold;
`;
