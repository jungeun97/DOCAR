package com.pororo.docar.config;

import io.swagger.v3.oas.models.OpenAPI;
import io.swagger.v3.oas.models.info.Info;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;

@Configuration
public class OpenApiConfig {

    @Bean
    public OpenAPI openAPI() {
        Info info = new Info()
                .version("v0.0.1")
                .title("도카 - Rest API")
                .description("도카 Rest API 문서입니다.");

        return new OpenAPI()
                .info(info);
    }

}
