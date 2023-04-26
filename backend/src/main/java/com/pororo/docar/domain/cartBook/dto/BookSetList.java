package com.pororo.docar.domain.cartBook.dto;

import com.pororo.docar.domain.bookshelf.entity.Bookshelf;
import com.pororo.docar.domain.cartBook.entity.CartBook;
import lombok.AllArgsConstructor;
import lombok.Builder;
import lombok.Data;
import lombok.NoArgsConstructor;

@Data
@Builder
@AllArgsConstructor
@NoArgsConstructor
public class BookSetList {
    private String bookName;
    private Long cartBookFloor;
    private Long cartBookSite;
    private Long bookshelfId;

    public BookSetList entityToDto(CartBook cartBook){
        return BookSetList.builder()
                .bookName(cartBook.getBook().getName())
                .cartBookFloor(cartBook.getFloor())
                .cartBookSite(cartBook.getSite())
                .bookshelfId(cartBook.getBook().getBookshelf().getId())
                .build();
    }
}
