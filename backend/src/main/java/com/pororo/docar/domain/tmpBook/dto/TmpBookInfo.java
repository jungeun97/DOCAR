package com.pororo.docar.domain.tmpBook.dto;

import com.pororo.docar.domain.book.entity.Book;
import com.pororo.docar.domain.tmpBook.entity.TmpBook;
import lombok.Data;

@Data
public class TmpBookInfo {
    private Long id;
    private Long floor;
    private Long site;
    private String bookName;
    private String author;
    private String cover;

    public TmpBookInfo(TmpBook tmpBook) {
        this.id = tmpBook.getId();
        this.floor = tmpBook.getFloor();
        this.site = tmpBook.getSite();
        this.bookName = tmpBook.getBook().getName();
        this.author = tmpBook.getBook().getAuthor();
        this.cover = tmpBook.getBook().getCover();
    }
}
