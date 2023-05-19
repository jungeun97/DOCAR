package com.pororo.docar.config.dto;

import lombok.Data;
import lombok.NoArgsConstructor;

import java.util.List;

@Data
@NoArgsConstructor
public class CartBookList {
    private List<Long> indexList;
    private List<Long> depthList;
    private Long bookShelfIndex;

    public CartBookList(List<Long> indexList, List<Long> depthList, Long bookShelfIndex) {
        this.indexList = indexList;
        this.depthList = depthList;
        this.bookShelfIndex = bookShelfIndex;
    }
}
