package com.pororo.docar.domain.cartBook.controller;

import com.pororo.docar.common.dto.ApiResponse;
import com.pororo.docar.domain.cartBook.dto.BookSetList;
import com.pororo.docar.domain.cartBook.service.CartBookService;
import com.pororo.docar.domain.tmpBook.dto.TmpBookInfo;
import com.pororo.docar.domain.user.dto.UserCreateRequest;
import com.pororo.docar.domain.user.dto.UserSimpleInfo;
import io.swagger.v3.oas.annotations.tags.Tag;
import lombok.RequiredArgsConstructor;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

import java.util.List;

@Tag(name = "카트 도서 목록 관리")
@RestController
@RequiredArgsConstructor
public class CartBookController {
    private final CartBookService cartBookService;

    @GetMapping("/cartbooks")
    public ResponseEntity<ApiResponse<List<BookSetList>>> getBooks() {
        List<BookSetList> bookSetList = cartBookService.getBooks();
        ApiResponse<List<BookSetList>> result = new ApiResponse<>(true, "책 정리 리스트", bookSetList);
        return new ResponseEntity<>(result, HttpStatus.OK);
    }

    @DeleteMapping("/cartbooks")
    public ResponseEntity<ApiResponse> deleteCartBooks() {
        cartBookService.deleteSetBooks();
        ApiResponse result = new ApiResponse(true, "다음 책장으로 이동하세요");
        return new ResponseEntity<>(result, HttpStatus.OK);
    }

    @PostMapping("/cartbooks")
    public ResponseEntity<ApiResponse<List<BookSetList>>> setBooks() {
        List<BookSetList> bookSetLists = cartBookService.getBooksByBookshelf();
        ApiResponse<List<BookSetList>> result = new ApiResponse<>(true, "정리를 시작하세요", bookSetLists);
        return new ResponseEntity<>(result, HttpStatus.CREATED);
    }

}
