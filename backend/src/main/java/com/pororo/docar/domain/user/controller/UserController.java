package com.pororo.docar.domain.user.controller;

import com.pororo.docar.domain.user.service.UserService;
import io.swagger.v3.oas.annotations.tags.Tag;
import lombok.RequiredArgsConstructor;
import org.springframework.web.bind.annotation.RestController;

@Tag(name = "회원 관리")
@RestController
@RequiredArgsConstructor
public class UserController {
    private final UserService userService;
}
