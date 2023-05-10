package com.pororo.docar.domain.book.controller;

import com.google.protobuf.Api;
import com.pororo.docar.common.dto.ApiResponse;
import com.pororo.docar.domain.book.service.BookService;
import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.tags.Tag;
import lombok.RequiredArgsConstructor;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@Tag(name = "도서 관리")
@RestController
@RequiredArgsConstructor
@RequestMapping("/books")
public class BookController {
    private final BookService bookService;

    @PostMapping("")
    @Operation(hidden = true)
    public ResponseEntity<ApiResponse> fetchDataFromApi() {
        bookService.fetchDataFromApi();
        ApiResponse response = new ApiResponse<>(true, "책 데이터 DB 저장 완료");
        return new ResponseEntity<>(response, HttpStatus.OK);
    }
}
