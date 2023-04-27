package com.pororo.docar.domain.admin.controller;

import com.pororo.docar.config.jwt.JwtProvider;
import com.pororo.docar.domain.admin.dto.AdminLoginDto;
import com.pororo.docar.domain.admin.entity.Admin;
import com.pororo.docar.domain.admin.repository.AdminRepository;
import io.jsonwebtoken.Jwt;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.validation.BindingResult;
import org.springframework.web.bind.annotation.*;

import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServletResponse;
import javax.validation.Valid;

@Controller
public class AdminController {
    private final AdminRepository adminRepository;

    @Autowired
    public AdminController(AdminRepository adminRepository) {
        this.adminRepository = adminRepository;
    }

    @GetMapping("/login")
    public String loginForm() {
        return "loginForm";
    }

//    @PostMapping("/login")
//    public String login(@Valid @ModelAttribute LoginForm form, BindingResult bindingResult, HttpServletResponse response) {
//
//    }

//    @PostMapping("/login")
//    public String login(@ResponseBody AdminLoginDto input, HttpServletResponse response) {
//        String Key = JwtProvider.createToken(adminDto);
//
//        Cookie cookie = new Cookie("Authorization", Key);
//        cookie.setMaxAge(60*60);
//        cookie.setPath("/");
//        response.addCookie(cookie);
//    }

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

