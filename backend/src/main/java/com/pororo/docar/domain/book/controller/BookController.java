package com.pororo.docar.domain.book.controller;

import com.pororo.docar.domain.book.service.BookApiResponse;
import com.pororo.docar.domain.book.service.BookService;
import io.swagger.v3.oas.annotations.tags.Tag;
import lombok.RequiredArgsConstructor;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@Tag(name = "도서 관리")
@RestController
//@RequiredArgsConstructor
@RequestMapping("/books")
public class BookController {
    private final BookService bookService;

    public BookController(BookService bookService) {
        this.bookService = bookService;
    }

    @PostMapping("/fetch")
    public ResponseEntity<Void> fetchDataFromApi() {
        bookService.fetchDataFromApi();
        return ResponseEntity.ok().build();
    }




}
