package com.pororo.docar.common.dto;

import lombok.AllArgsConstructor;
import lombok.Data;

@Data
@AllArgsConstructor
public class ApiResponse<T> {

    private Boolean success;
    private String message;
    private T data;

    public ApiResponse(Boolean success, String message) {
        this.success = success;
        this.message = message;
    }
}
