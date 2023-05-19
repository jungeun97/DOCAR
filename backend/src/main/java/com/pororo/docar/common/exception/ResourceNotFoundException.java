package com.pororo.docar.common.exception;

import com.pororo.docar.common.dto.ApiResponse;
import org.springframework.http.HttpStatus;
import org.springframework.web.bind.annotation.ResponseStatus;

@ResponseStatus(value = HttpStatus.NOT_FOUND)
public class ResourceNotFoundException extends RuntimeException {
    private ApiResponse apiResponse;

    public ResourceNotFoundException(String message) {
        super();
        apiResponse = new ApiResponse(false, message);
    }

    public ApiResponse getApiResponse() {
        return apiResponse;
    }
}
