package com.pororo.docar.domain.checkoutBook.controller;

import com.pororo.docar.common.dto.ApiResponse;
import com.pororo.docar.domain.cartBook.dto.BookSetList;
import com.pororo.docar.domain.checkoutBook.dto.borrowBookDto;
import com.pororo.docar.domain.checkoutBook.service.CheckoutBookService;
import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.tags.Tag;
import lombok.Getter;
import lombok.RequiredArgsConstructor;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;

import java.util.List;

@Tag(name = "회원이 빌린 도서 목록 관리")
@RestController
@RequiredArgsConstructor
public class CheckoutBookController {
    private final CheckoutBookService checkoutBookService;
    @Operation(summary = "대출된 책 목록 확인하기")
    @GetMapping("/checkout")
    public ResponseEntity<ApiResponse<List<borrowBookDto>>> getBorrowedBooks() {
        List<borrowBookDto> borrowedBooks = checkoutBookService.getBorrowedBooks();
        ApiResponse<List<borrowBookDto>> result = new ApiResponse<>(true, "대여된 책 리스트", borrowedBooks);
        return new ResponseEntity<>(result, HttpStatus.OK);
    }

    @Operation(summary = "책 대출하게 만들기")
    @PostMapping("/checkout")
    public ResponseEntity<ApiResponse> borrowedBooks(@RequestBody borrowBookDto input) {
        checkoutBookService.borrowBook(input);
        ApiResponse result = new ApiResponse(true, "책이 대여되었습니다.");
        return new ResponseEntity<>(result, HttpStatus.OK);
    }
}
