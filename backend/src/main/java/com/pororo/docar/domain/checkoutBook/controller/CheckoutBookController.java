package com.pororo.docar.domain.checkoutBook.controller;

import com.pororo.docar.common.dto.ApiResponse;
import com.pororo.docar.domain.checkoutBook.dto.borrowBookDto;
import com.pororo.docar.domain.checkoutBook.service.CheckoutBookService;
import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.tags.Tag;
import lombok.RequiredArgsConstructor;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;

@Tag(name = "회원이 빌린 도서 목록 관리")
@RestController
@RequiredArgsConstructor
public class CheckoutBookController {
    private final CheckoutBookService checkoutBookService;

    @Operation(summary = "책 대출하게 만들기")
    @PostMapping("/checkout")
    public ResponseEntity<ApiResponse> borrowedBooks(@RequestBody borrowBookDto input) {
        checkoutBookService.borrowBook(input);
        ApiResponse result = new ApiResponse(true, "책이 대여되었습니다.");
        return new ResponseEntity<>(result, HttpStatus.OK);
    }
}
