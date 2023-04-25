package com.pororo.docar.domain.book.dto;

import lombok.AllArgsConstructor;
import lombok.Builder;
import lombok.Getter;
import lombok.NoArgsConstructor;

import java.util.ArrayList;
import java.util.List;

@Getter
@NoArgsConstructor
@AllArgsConstructor
@Builder
public class BookDto {
    List<String> items = new ArrayList<>();

    static class Items {
        public String name;
        public String author;
        public String qr_url;
        public String title_url;
        public int depth;
        public String isbn;
        public Long bookshelf;
    }
}
