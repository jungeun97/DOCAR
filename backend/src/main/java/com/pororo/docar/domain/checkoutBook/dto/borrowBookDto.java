package com.pororo.docar.domain.checkoutBook.dto;

import com.pororo.docar.domain.cartBook.dto.BookSetList;
import com.pororo.docar.domain.cartBook.entity.CartBook;
import com.pororo.docar.domain.checkoutBook.entity.CheckoutBook;
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
