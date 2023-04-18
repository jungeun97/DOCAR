package com.pororo.docar.domain.user.service;

import com.pororo.docar.domain.user.dto.UserCreateRequest;
import com.pororo.docar.domain.user.dto.UserSimpleInfo;
import com.pororo.docar.domain.user.entity.User;
import com.pororo.docar.domain.user.repository.UserRepository;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

@Service
@Transactional(readOnly = true)
@RequiredArgsConstructor
public class UserService {
    private final UserRepository userRepository;

    @Transactional
    public UserSimpleInfo createUser(UserCreateRequest dto) {
        User user = User.builder()
                .name(dto.getName())
                .email(dto.getEmail())
                .build();

        userRepository.save(user);

        return new UserSimpleInfo(user);
    }
}
