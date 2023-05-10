package com.pororo.docar.domain.tmpBook.controller;

import com.pororo.docar.common.dto.ApiResponse;
import com.pororo.docar.domain.tmpBook.dto.TmpBookInfo;
import com.pororo.docar.domain.tmpBook.entity.TmpBook;
import com.pororo.docar.domain.tmpBook.service.TmpBookService;
import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.media.Content;
import io.swagger.v3.oas.annotations.media.Schema;
import io.swagger.v3.oas.annotations.tags.Tag;
import lombok.RequiredArgsConstructor;
import org.springframework.dao.DataIntegrityViolationException;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

import java.util.List;
import java.util.stream.Collectors;

@Tag(name = "입력된 도서 목록 관리")
@RestController
@RequiredArgsConstructor
public class TmpBookController {
    private final TmpBookService tmpBookService;

    @Operation(summary = "한권씩 바코드 인식 반납")
    @PostMapping("/isbn/{isbn}")
    @ResponseStatus(HttpStatus.OK)
    public ResponseEntity<TmpBookInfo> handleQrReturns(@PathVariable("isbn") String isbn) {
        TmpBookInfo tmpBook = tmpBookService.moveCheckedOutBookToTmpBook(isbn);
        ApiResponse<TmpBookInfo> response = new ApiResponse<>(true, "Success", tmpBook);
        return new ResponseEntity(response, HttpStatus.OK);
    }

    @Operation(summary = "책 최종 반납 전 확인")
    @GetMapping("/returns")
    @ResponseStatus(HttpStatus.OK)
    public ResponseEntity<ApiResponse<List<TmpBookInfo>>> getTmpBook() {
        List<TmpBookInfo> tmpBookInfoList = tmpBookService.getTmpBooks().stream()
                .map(book -> new TmpBookInfo(book))
                .collect(Collectors.toList());
        ApiResponse<List<TmpBookInfo>> response = new ApiResponse<>(true, "Success", tmpBookInfoList);
        return new ResponseEntity<>(response, HttpStatus.OK);
    }

    @Operation(summary = "책 최종 반납")
    @PostMapping("/returns")
    @io.swagger.v3.oas.annotations.responses.ApiResponse(responseCode = "201", description = "책 최종 반납이 완료됨")
    @io.swagger.v3.oas.annotations.responses.ApiResponse(responseCode = "409", description = "같은 도서가 이미 반납되었습니다.")
    @io.swagger.v3.oas.annotations.responses.ApiResponse(responseCode = "404", description = "임시 도서 목록이 비어있습니다.")
    public ResponseEntity<ApiResponse> returnBooks() {
        try {
            tmpBookService.insertCartBooks();
            ApiResponse response = new ApiResponse<>(true, "반납이 완료되었습니다.");
            return new ResponseEntity<>(response, HttpStatus.CREATED);
        } catch (DataIntegrityViolationException e) {
            ApiResponse response = new ApiResponse<>(false, "같은 도서가 이미 반납되었습니다.");
            return new ResponseEntity<>(response, HttpStatus.CONFLICT);
        }
    }


    @ExceptionHandler(DataIntegrityViolationException.class)
    public ResponseEntity<ApiResponse> handleDataIntegrityViolationException(DataIntegrityViolationException e) {
        ApiResponse response = new ApiResponse<>(false, "데이터 입력에 문제가 발생했습니다.");
        return new ResponseEntity<>(response, HttpStatus.BAD_REQUEST);
    }
}
