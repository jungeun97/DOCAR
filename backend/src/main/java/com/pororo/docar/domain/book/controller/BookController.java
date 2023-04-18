package com.pororo.docar.domain.book.controller;

import com.pororo.docar.domain.book.service.BookService;
import io.swagger.v3.oas.annotations.tags.Tag;
import lombok.RequiredArgsConstructor;
import org.springframework.web.bind.annotation.RestController;

@Tag(name = "도서 관리")
@RestController
@RequiredArgsConstructor
public class BookController {
    private final BookService bookService;
}
