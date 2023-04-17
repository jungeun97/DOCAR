package com.pororo.docar.domain.book.controller;

import com.pororo.docar.domain.book.service.BookService;
import lombok.RequiredArgsConstructor;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequiredArgsConstructor
public class BookController {
    private final BookService bookService;
}
