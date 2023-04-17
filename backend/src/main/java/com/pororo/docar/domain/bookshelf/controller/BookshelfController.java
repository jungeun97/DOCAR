package com.pororo.docar.domain.bookshelf.controller;

import com.pororo.docar.domain.bookshelf.service.BookshelfService;
import lombok.RequiredArgsConstructor;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequiredArgsConstructor
public class BookshelfController {
    private final BookshelfService bookshelfService;
}
