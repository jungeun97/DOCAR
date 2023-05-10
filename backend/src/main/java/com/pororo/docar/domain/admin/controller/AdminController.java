package com.pororo.docar.domain.admin.controller;

import com.pororo.docar.common.dto.ApiResponse;
import com.pororo.docar.config.jwt.JwtProvider;
import com.pororo.docar.domain.admin.dto.*;
import com.pororo.docar.domain.admin.entity.Admin;
import com.pororo.docar.domain.admin.repository.AdminRepository;
import com.pororo.docar.domain.admin.service.AdminService;
import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.tags.Tag;
import lombok.RequiredArgsConstructor;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.validation.BindingResult;
import org.springframework.web.bind.annotation.*;

import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServletResponse;
import javax.validation.Valid;

@Tag(name = "관리자 로그인")
@Controller
@RequiredArgsConstructor
public class AdminController {
    private final AdminRepository adminRepository;
    private final AdminService adminService;
    private final JwtProvider jwtProvider;


    @Operation(summary = "핀번호로 관리자 로그인")
    @PostMapping("/login")
    public ResponseEntity<ApiResponse<AdminDto>> loginAdmin(@RequestBody AdminLoginDto input, HttpServletResponse response) {
        AdminDto adminDto = adminService.loginAdmin(input);
        ApiResponse<AdminDto> result = new ApiResponse<>(true, "관리자 로그인 되었습니다", adminDto);

        String Key = jwtProvider.createToken(adminDto);
        Cookie cookie = new Cookie("Authorization", Key);
        cookie.setMaxAge(60*60*24);
        cookie.setPath("/");
        response.addCookie(cookie);
        return new ResponseEntity<>(result, HttpStatus.OK);
    }

    @Operation(summary = "admin 등록")
    @PostMapping("/register")
    public ResponseEntity<ApiResponse<AdminDto>> resisterAdmin(@RequestBody AdminResisterDto input) {
        AdminDto adminDto = adminService.registerAdmin(input);
        ApiResponse<AdminDto> result = new ApiResponse<>(true, "관리자 생성되었습니다", adminDto);
        return new ResponseEntity<>(result, HttpStatus.OK);
    }

    @Operation(summary = "admin 수정")
    @PutMapping("/change")
    public ResponseEntity<ApiResponse<AdminDto>> changeAdmin(@RequestBody AdminChangePwDto input) {
        AdminDto adminDto = adminService.changeAdmin(input);
        ApiResponse<AdminDto> result = new ApiResponse<>(true, "관리자 비밀번호 수정되었습니다", adminDto);
        return new ResponseEntity<>(result, HttpStatus.OK);
    }

    @Operation(summary = "QR코드로 관리자 로그인")
    @PostMapping("/qrlogin")
    public ResponseEntity<ApiResponse<AdminDto>> loginQRAdmin(@RequestBody AdminQrLoginDto input, HttpServletResponse response) {
        AdminDto adminDto = adminService.qrLoginAdmin(input);
        ApiResponse<AdminDto> result = new ApiResponse<>(true, "관리자 로그인 되었습니다", adminDto);

        String Key = jwtProvider.createToken(adminDto);
        Cookie cookie = new Cookie("Authorization", Key);
        cookie.setMaxAge(60*60*24);
        cookie.setPath("/");
        response.addCookie(cookie);
        return new ResponseEntity<>(result, HttpStatus.OK);
    }
}

