import React from 'react';
import styled from 'styled-components';

interface Type {
  totalPosts: number;
  limit: number;
  page: number;
  setPage: React.Dispatch<React.SetStateAction<number>>;
}

// styled
const SelectedBtn = styled.button`
  background-color: red;
`;
const NonSelectedBtn = styled.button`
  background-color: blue;
`;

function Pagenation({ totalPosts, limit, page, setPage }: Type) {
  const numPages = Math.ceil(totalPosts / limit);
  console.log('총 페이지');
  console.log(numPages);
  const showedLecture = new Array(numPages).fill(0);

  return (
    <div>
      <button onClick={() => setPage(page - 1)} disabled={page === 1}>
        &lt;
      </button>
      {showedLecture.map((item, index) => (
        <>
          {index + 1 === page ? (
            <SelectedBtn key={index + 1} onClick={() => setPage(index + 1)} >{index+1}</SelectedBtn>
          ) : (
            <NonSelectedBtn
              key={index + 1}
              onClick={() => setPage(index + 1)}
            >{index+1}</NonSelectedBtn>
          )}
        </>
      ))}

      <button onClick={() => setPage(page + 1)} disabled={page === numPages}>
        &gt;
      </button>
    </div>
  );
}

export default Pagenation;
