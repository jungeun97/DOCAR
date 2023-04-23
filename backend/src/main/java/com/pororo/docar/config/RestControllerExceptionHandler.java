package com.pororo.docar.config;

import com.pororo.docar.common.dto.ApiResponse;
import com.pororo.docar.common.exception.*;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.ExceptionHandler;
import org.springframework.web.bind.annotation.RestControllerAdvice;

import java.io.FileNotFoundException;

@RestControllerAdvice
public class RestControllerExceptionHandler {
    /**
     * 요청이 잘못된 경우 예외 처리
     */
    @ExceptionHandler(BadRequestException.class)
    public ResponseEntity<ApiResponse> resolveException(BadRequestException exception) {
        ApiResponse apiResponse = exception.getApiResponse();
        return new ResponseEntity<>(apiResponse, HttpStatus.BAD_REQUEST);
    }

    /**
     * 데이터가 존재하지 않는 경우 예외 처리
     */
    @ExceptionHandler(ResourceNotFoundException.class)
    public ResponseEntity<ApiResponse> resolveException(ResourceNotFoundException exception) {
        ApiResponse apiResponse = exception.getApiResponse();
        return new ResponseEntity<>(apiResponse, HttpStatus.NOT_FOUND);
    }

    /**
     * 데이터에 접근 권한이 없는 경우 예외 처리
     */
    @ExceptionHandler(ResourceForbiddenException.class)
    public ResponseEntity<ApiResponse> resolveException(ResourceForbiddenException exception) {
        ApiResponse apiResponse = exception.getApiResponse();
        return new ResponseEntity<>(apiResponse, HttpStatus.FORBIDDEN);
    }

    /**
     * 이미 존재하는 데이터인 경우 예외 처리
     */
    @ExceptionHandler(ResourceAlreadyExistsException.class)
    public ResponseEntity<ApiResponse> resolveException(ResourceAlreadyExistsException exception) {
        ApiResponse apiResponse = exception.getApiResponse();
        return new ResponseEntity<>(apiResponse, HttpStatus.CONFLICT);
    }

    /**
     * 인증받지 않은 사용자인 경우 예외 처리
     */
    @ExceptionHandler(UnAuthorizedException.class)
    public ResponseEntity<ApiResponse> resolveException(UnAuthorizedException exception) {
        ApiResponse apiResponse = exception.getApiResponse();
        return new ResponseEntity<>(apiResponse, HttpStatus.UNAUTHORIZED);
    }

    /**
     * 파일이 존재하지 않는 경우 예외 처리
     */
    @ExceptionHandler(FileNotFoundException.class)
    public ResponseEntity<ApiResponse> resolveException(FileNotFoundException exception) {
        ApiResponse apiResponse = new ApiResponse(false, "파일이 존재하지 않습니다.", null);
        return new ResponseEntity<>(apiResponse, HttpStatus.NOT_FOUND);
    }
}
