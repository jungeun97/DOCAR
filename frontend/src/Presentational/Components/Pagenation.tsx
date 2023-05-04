import React, { useState } from 'react';
import styled from 'styled-components';
import * as PageStyle from './Pagenation_Style';

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

  // 페이지 블록 구하기
  const block = Math.ceil(page / 5);
  const start = (block - 1) * 5 + 1;
  const end = Math.min(start + 4, numPages);

  return (
    <PageStyle.WrapPagenation>
      <PageStyle.NextPreBtn onClick={() => setPage(page - 1)} disabled={page === 1}>
        &lt;
      </PageStyle.NextPreBtn>
      {Array(end - start + 1)
        .fill(0)
        .map((_, i) => (
          <React.Fragment key={i}>
            {start + i === page ? (
              <PageStyle.SelectedBtn key={start + i} onClick={() => setPage(start + i)}>
                {start + i}
              </PageStyle.SelectedBtn>
            ) : (
              <PageStyle.NonSelectedBtn
                key={start + i}
                onClick={() => setPage(start + i)}
              >
                {start + i}
              </PageStyle.NonSelectedBtn>
            )}
          </React.Fragment>
        ))}
      <PageStyle.NextPreBtn onClick={() => setPage(page + 1)} disabled={page === numPages}>
        &gt;
      </PageStyle.NextPreBtn>
    </PageStyle.WrapPagenation>
  );
}

export default Pagenation;
