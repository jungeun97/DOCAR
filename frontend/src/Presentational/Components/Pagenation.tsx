import React, { useState } from 'react';
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
  // 총 페이지
  const numPages = Math.ceil(totalPosts / limit);
  console.log('총 페이지');
  console.log(numPages);
  
  // 페이지 블록 구하기
  const block = Math.ceil(page / 5);
  const start = (block - 1) * 5 + 1;
  const end = Math.min(start + 4, numPages);

  return (
    <div>
      <button onClick={() => setPage(page - 1)} disabled={page === 1}>
        &lt;
      </button>
      {Array(end - start + 1)
        .fill(0)
        .map((_, i) => (
          <button
            key={start + i}
            onClick={() => setPage(start + i)}
            style={{
              backgroundColor: start + i === page ? 'red' : 'blue'
            }}
          >
            {start + i}
          </button>
        ))}
      <button onClick={() => setPage(page + 1)} disabled={page === numPages}>
        &gt;
      </button>
    </div>
  );
}

export default Pagenation;