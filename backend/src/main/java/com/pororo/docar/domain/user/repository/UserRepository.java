package com.pororo.docar.domain.user.repository;

import com.pororo.docar.domain.user.entity.User;
import org.springframework.data.jpa.repository.JpaRepository;

public interface UserRepository extends JpaRepository<User, Long> {
}
