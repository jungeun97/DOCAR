package com.pororo.docar.config;

import lombok.RequiredArgsConstructor;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import org.springframework.http.HttpMethod;
import org.springframework.security.config.annotation.web.builders.HttpSecurity;
import org.springframework.security.config.annotation.web.configuration.EnableWebSecurity;
import org.springframework.security.config.annotation.web.configuration.WebSecurityConfigurerAdapter;
import org.springframework.security.config.http.SessionCreationPolicy;
import org.springframework.security.crypto.bcrypt.BCryptPasswordEncoder;
import org.springframework.security.crypto.password.PasswordEncoder;
import org.springframework.web.cors.CorsConfiguration;
import org.springframework.web.cors.CorsConfigurationSource;
import org.springframework.web.cors.UrlBasedCorsConfigurationSource;

@Configuration
@EnableWebSecurity
@RequiredArgsConstructor
public class SecurityConfig extends WebSecurityConfigurerAdapter {

    @Override
    protected void configure(HttpSecurity http) throws Exception {
        http.authorizeRequests() // 애플리케이션에 들어오는 요청에 대한 사용 권한을 체크
//                .antMatchers(HttpMethod.POST, "/**").authenticated()
//                .antMatchers(HttpMethod.PUT, "/**").authenticated()
//                .antMatchers(HttpMethod.DELETE, "/**").authenticated()
//                .antMatchers(HttpMethod.PATCH, "/**").authenticated()
//                .antMatchers(HttpMethod.GET, "/**").authenticated();
                .antMatchers("/**").permitAll()
                 .antMatchers("/login").permitAll();


//        http.cors()                     // CORS on
//                .and()
//                .csrf().disable()           // CSRF off
//                .httpBasic().disable()     // Basic Auth off
//                .sessionManagement().sessionCreationPolicy(SessionCreationPolicy.STATELESS);    // Session off
        http.cors().disable()
                .csrf().disable()
                .formLogin().disable()
                .headers().frameOptions().disable();


        http.logout()
                .disable();
    }


    @Bean
    public CorsConfigurationSource corsConfigurationSource() {
        CorsConfiguration configuration = new CorsConfiguration();
        configuration.addAllowedOriginPattern("*");
        configuration.addAllowedHeader("*");
        configuration.addAllowedMethod("*");
        configuration.setAllowCredentials(true);
        configuration.setMaxAge(3600L);

        UrlBasedCorsConfigurationSource source = new UrlBasedCorsConfigurationSource();
        source.registerCorsConfiguration("/**", configuration);
        return source;
    }

    @Bean
    public PasswordEncoder getPasswordEncoder(){
        return new BCryptPasswordEncoder();
    }
}
