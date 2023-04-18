package com.pororo.docar.domain.cartBook.repository;

import com.pororo.docar.domain.cartBook.entity.CartBook;
import org.springframework.data.jpa.repository.JpaRepository;

public interface CartBookRepository extends JpaRepository<CartBook, Long> {
}
