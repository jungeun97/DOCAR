package com.pororo.docar.domain.user.dto;

import com.pororo.docar.domain.user.entity.User;
import lombok.Data;

@Data
public class UserSimpleInfo {
    private Long id;
    private String name;

    public UserSimpleInfo(User user) {
        this.id = user.getId();
        this.name = user.getName();
    }
}
