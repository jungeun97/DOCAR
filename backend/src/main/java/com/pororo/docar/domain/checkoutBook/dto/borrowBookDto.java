package com.pororo.docar.domain.checkoutBook.dto;

import lombok.AllArgsConstructor;
import lombok.Builder;
import lombok.Data;
import lombok.NoArgsConstructor;

@Data
@Builder
@AllArgsConstructor
@NoArgsConstructor
public class borrowBookDto {
    private Long bookId;
    private Long userId;
}
