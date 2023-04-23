package com.pororo.docar.domain.cartBook.controller;

import com.pororo.docar.domain.cartBook.service.CartBookService;
import io.swagger.v3.oas.annotations.tags.Tag;
import lombok.RequiredArgsConstructor;
import org.springframework.web.bind.annotation.RestController;

@Tag(name = "카트 도서 목록 관리")
@RestController
@RequiredArgsConstructor
public class CartBookController {
    private final CartBookService cartBookService;
}
