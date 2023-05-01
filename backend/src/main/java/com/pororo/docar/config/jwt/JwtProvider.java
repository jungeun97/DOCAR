package com.pororo.docar.config.jwt;

import com.pororo.docar.domain.admin.dto.AdminDto;
import com.pororo.docar.domain.admin.entity.Admin;
import com.pororo.docar.domain.tmpBook.dto.TmpBookInfo;
import io.jsonwebtoken.Claims;
import io.jsonwebtoken.Jwts;
import io.jsonwebtoken.SignatureAlgorithm;
import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.stereotype.Component;

import java.util.Date;

@Component
@Slf4j
public class JwtProvider {

    @Value("${jwt.secretKey}")
    private String secretKey;

    @Value("${jwt.expirationTime}")
    private long expiredTime;

    public String createToken(AdminDto adminDto) {
        Claims claims = Jwts.claims();
        claims.put("name", adminDto.getName());
        claims.put("role", 1);
        Date now = new Date();
        return Jwts.builder()
                .setClaims(claims)
                .setIssuedAt(now)
                .setExpiration(new Date(now.getTime() + expiredTime))
                .signWith(SignatureAlgorithm.HS256, secretKey.getBytes())
                .compact();
    }

    public String createExpireToken() {
        Claims claims = Jwts.claims();
        Date now = new Date();
        return Jwts.builder()
                .setClaims(claims)
                .setIssuedAt(now)
                .setExpiration(new Date(now.getTime() + 0))
                .signWith(SignatureAlgorithm.HS256, secretKey)
                .compact();
    }

    public String getAdminInfo(String token) {
        return Jwts.parser().setSigningKey(secretKey).parseClaimsJws(token).getBody().get("id").toString();
    }

    public boolean validateToken(String jwtToken) {
        try {
            Claims claims = Jwts.parser()
                    .setSigningKey(secretKey.getBytes())
                    .parseClaimsJws(jwtToken)
                    .getBody();
            return !claims.getExpiration().before(new Date());
        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }

    public boolean checkRole(String jwtToken, String URI){
        log.info("check role");
        try {
            Claims claims = Jwts.parser()
                    .setSigningKey(secretKey.getBytes())
                    .parseClaimsJws(jwtToken)
                    .getBody();

            int role = Integer.parseInt(String.valueOf(claims.get("role")));

            if(role != 1) return false;

            if(URI.equals("cartbooks") && role == 1){
                return true;
            }else if(URI.equals("returns") && role == 1){
                return true;
            }else if(URI.equals("users") && role == 1){
                return true;
            }else if(URI.equals("turtlebot") && role == 1) {
                return true;
            }else if(URI.equals("isbn") && role == 1) {
                return true;
            }else{
                return false;
            }

        } catch (Exception e) {
            e.printStackTrace();
            return false;
        }
    }
}
