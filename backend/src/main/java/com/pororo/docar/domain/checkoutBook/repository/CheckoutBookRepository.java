package com.pororo.docar.domain.checkoutBook.repository;

import com.pororo.docar.domain.book.entity.Book;
import com.pororo.docar.domain.checkoutBook.entity.CheckoutBook;
import org.springframework.data.jpa.repository.JpaRepository;

import java.util.Optional;

public interface CheckoutBookRepository extends JpaRepository<CheckoutBook, Long> {

    Optional<CheckoutBook> findByBookId(Long id);

    boolean existsByBookId(Long bookId);
}
