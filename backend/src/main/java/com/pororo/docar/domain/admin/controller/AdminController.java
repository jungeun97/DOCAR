package com.pororo.docar.domain.admin.controller;

import com.pororo.docar.common.dto.ApiResponse;
import com.pororo.docar.config.jwt.JwtProvider;
import com.pororo.docar.domain.admin.dto.AdminDto;
import com.pororo.docar.domain.admin.dto.AdminLoginDto;
import com.pororo.docar.domain.admin.entity.Admin;
import com.pororo.docar.domain.admin.repository.AdminRepository;
import com.pororo.docar.domain.admin.service.AdminService;
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

@Controller
@RequiredArgsConstructor
public class AdminController {
    private final AdminRepository adminRepository;
    private final AdminService adminService;
    private final JwtProvider jwtProvider;


//    @Autowired
//    public AdminController(AdminRepository adminRepository) {
//        this.adminRepository = adminRepository;
//    }

    @GetMapping("/login")
    public String loginForm() {
        return "loginForm";
    }

//    @PostMapping("/login")
//    public String login(@Valid @ModelAttribute LoginForm form, BindingResult bindingResult, HttpServletResponse response) {
//
//    }

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


//    @GetMapping("/register")
//    public String registerForm() {
//        return "registerForm";
//    }
//
//    @PostMapping("/register")
//    public String registerAdmin(@RequestParam String name, Model model) {
//        Admin admin = new Admin(name);
//        adminRepository.save(admin);
//
//        String formattedPinNumber = String.format("%04d", admin.getPinNumber());
//        model.addAttribute("pinNumber", formattedPinNumber);
//
//        return "registered";
//    }
}

