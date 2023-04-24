package com.pororo.docar.domain.tmpBook.controller;

import com.pororo.docar.common.dto.ApiResponse;
import com.pororo.docar.domain.tmpBook.dto.TmpBookInfo;
import com.pororo.docar.domain.tmpBook.service.TmpBookService;
import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.tags.Tag;
import lombok.RequiredArgsConstructor;
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

    @Operation(summary = "책 최종 반납 확인")
    @GetMapping("/returns")
    @ResponseStatus(HttpStatus.OK)
    public ResponseEntity<ApiResponse<List<TmpBookInfo>>> getTmpBook() {
        List<TmpBookInfo> tmpBookInfoList = tmpBookService.getTmpBooks().stream()
                .map(book -> new TmpBookInfo(book))
                .collect(Collectors.toList());
        ApiResponse<List<TmpBookInfo>> response = new ApiResponse<>(true, "Success", tmpBookInfoList);
        return ResponseEntity.ok().body(response);
    }
}
