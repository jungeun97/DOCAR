package com.pororo.docar.domain.admin.dto;

import com.pororo.docar.domain.admin.entity.Admin;
import com.pororo.docar.domain.cartBook.dto.BookSetList;
import com.pororo.docar.domain.cartBook.entity.CartBook;
import lombok.AllArgsConstructor;
import lombok.Builder;
import lombok.Getter;
import lombok.NoArgsConstructor;

@Getter
@NoArgsConstructor
@AllArgsConstructor
@Builder
public class AdminDto {
    private String name;

    public AdminDto entityToDto(Admin admin){
        return AdminDto.builder()
                .name(admin.getName())
                .build();
    }
}
