package com.pororo.docar.domain.cartBook.controller;

import com.pororo.docar.common.dto.ApiResponse;
import com.pororo.docar.domain.cartBook.dto.BookSetList;
import com.pororo.docar.domain.cartBook.service.CartBookService;
import com.pororo.docar.domain.user.dto.UserCreateRequest;
import com.pororo.docar.domain.user.dto.UserSimpleInfo;
import io.swagger.v3.oas.annotations.tags.Tag;
import lombok.RequiredArgsConstructor;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;

import java.util.List;

@Tag(name = "카트 도서 목록 관리")
@RestController
@RequiredArgsConstructor
public class CartBookController {
    private final CartBookService cartBookService;

    @GetMapping("cartbook/all")
    public ResponseEntity<ApiResponse<List<BookSetList>>> getBooks() {
        List<BookSetList> bookSetList = cartBookService.getBooks();
        ApiResponse<List<BookSetList>> result = new ApiResponse<>(true, "책 정리 리스트", bookSetList);
        return new ResponseEntity<>(result, HttpStatus.CREATED);
    }
}
