package com.pororo.docar.config.jwt;

import com.pororo.docar.common.exception.UnAuthorizedException;
import lombok.RequiredArgsConstructor;
import lombok.extern.slf4j.Slf4j;
import org.springframework.http.HttpMethod;
import org.springframework.stereotype.Component;
import org.springframework.web.servlet.HandlerInterceptor;

import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@Component
@RequiredArgsConstructor
public class JwtInterceptor implements HandlerInterceptor {

    private static final String HEADER_AUTH = "Authorization";
    private final JwtProvider jwtService;

    @Override
    public boolean preHandle(HttpServletRequest request, HttpServletResponse response, Object handler) {
        if (HttpMethod.OPTIONS.matches(request.getMethod())) {
            return true;
        }
        Cookie[] cookies = request.getCookies();
        String token = "";

        if (cookies == null) {
            throw new UnAuthorizedException("권한이 없습니다.");
        }

        for (Cookie c : cookies) {
            System.out.println("cookie is name = " + c.getName());
            System.out.println("cookie is value = " + c.getValue());
            if (c.getName().equals(HEADER_AUTH)) {
                token = c.getValue();
                break;
            }
        }

        System.out.println(request.getRequestURI());

        String uri = request.getRequestURI().split("/")[2];

        System.out.println("URI = " + uri  );

        if(!jwtService.checkRole(token,uri)){
            throw new UnAuthorizedException("권한이 없습니다.");
        }

        if (!jwtService.validateToken(token)) {
//            log.error("권한이 만료되거나 없습니다.");
            throw new UnAuthorizedException("권한이 만료되었습니다.");
        } else {
            return true;
        }
    }
}
