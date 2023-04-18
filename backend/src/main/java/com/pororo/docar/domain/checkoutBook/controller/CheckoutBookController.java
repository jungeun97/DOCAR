package com.pororo.docar.domain.checkoutBook.controller;

import com.pororo.docar.domain.checkoutBook.service.CheckoutBookService;
import io.swagger.v3.oas.annotations.tags.Tag;
import lombok.RequiredArgsConstructor;
import org.springframework.web.bind.annotation.RestController;

@Tag(name = "회원이 빌린 도서 목록 관리")
@RestController
@RequiredArgsConstructor
public class CheckoutBookController {
    private final CheckoutBookService checkoutBookService;
}
