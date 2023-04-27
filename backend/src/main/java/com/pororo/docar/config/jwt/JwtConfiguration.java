package com.pororo.docar.config.jwt;

import org.springframework.web.servlet.config.annotation.InterceptorRegistry;
import org.springframework.web.servlet.config.annotation.WebMvcConfigurer;

public class JwtConfiguration implements WebMvcConfigurer {
    private final JwtInterceptor jwtInterceptor;
    public JwtConfiguration(JwtInterceptor jwtInterceptor) {
        this.jwtInterceptor = jwtInterceptor;
    }

    @Override
    public void addInterceptors(InterceptorRegistry registry) {
        registry.addInterceptor(jwtInterceptor)
                .order(1)
                .addPathPatterns(
                        "/cartbooks/**",
                        "/returns/**",
                        "/turtlebot/**",
                        "user/**"
                        )
                .excludePathPatterns(
                        "/login/**"
                );
    }
}