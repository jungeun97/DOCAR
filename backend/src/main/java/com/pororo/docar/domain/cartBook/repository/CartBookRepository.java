package com.pororo.docar.domain.cartBook.repository;

import com.pororo.docar.domain.cartBook.entity.CartBook;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import java.util.Optional;

@Repository
public interface CartBookRepository extends JpaRepository<CartBook, Long> {
    Optional<CartBook> findByBookId(Long bookId);
}
