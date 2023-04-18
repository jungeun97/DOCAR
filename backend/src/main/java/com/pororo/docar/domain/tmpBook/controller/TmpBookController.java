package com.pororo.docar.domain.tmpBook.controller;

import com.pororo.docar.domain.tmpBook.service.TmpBookService;
import io.swagger.v3.oas.annotations.tags.Tag;
import lombok.RequiredArgsConstructor;
import org.springframework.web.bind.annotation.RestController;

@Tag(name = "입력된 도서 목록 관리")
@RestController
@RequiredArgsConstructor
public class TmpBookController {
    private final TmpBookService tmpBookService;
}
