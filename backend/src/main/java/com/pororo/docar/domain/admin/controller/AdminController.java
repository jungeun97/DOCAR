package com.pororo.docar.domain.admin.controller;

import com.pororo.docar.domain.admin.entity.Admin;
import com.pororo.docar.domain.admin.repository.AdminRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.validation.BindingResult;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestParam;

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

