package com.pororo.docar.domain.user.controller;

import com.pororo.docar.common.dto.ApiResponse;
import com.pororo.docar.domain.user.dto.UserCreateRequest;
import com.pororo.docar.domain.user.dto.UserSimpleInfo;
import com.pororo.docar.domain.user.service.UserService;
import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.tags.Tag;
import lombok.RequiredArgsConstructor;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;

@Tag(name = "회원 관리")
@RestController
@RequiredArgsConstructor
public class UserController {
    private final UserService userService;

    @Operation(summary = "회원 생성")
    @PostMapping("/users")
    public ResponseEntity<ApiResponse<UserSimpleInfo>> createUser(@RequestBody UserCreateRequest dto) {
        UserSimpleInfo userSimpleInfo = userService.createUser(dto);
        ApiResponse<UserSimpleInfo> result = new ApiResponse<>(true, "회원 생성 성공", userSimpleInfo);
        return new ResponseEntity<>(result, HttpStatus.CREATED);
    }
}
