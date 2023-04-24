package com.pororo.docar.domain.checkoutBook.repository;

import com.pororo.docar.domain.checkoutBook.entity.CheckoutBook;
import org.springframework.data.jpa.repository.JpaRepository;

public interface CheckoutBookRepository extends JpaRepository<CheckoutBook, Long> {
}
