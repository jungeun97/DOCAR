package com.pororo.docar.domain.bookshelf.controller;

import com.pororo.docar.domain.bookshelf.service.BookshelfService;
import io.swagger.v3.oas.annotations.tags.Tag;
import lombok.RequiredArgsConstructor;
import org.springframework.web.bind.annotation.RestController;

@Tag(name = "책장 관리")
@RestController
@RequiredArgsConstructor
public class BookshelfController {
    private final BookshelfService bookshelfService;


}
