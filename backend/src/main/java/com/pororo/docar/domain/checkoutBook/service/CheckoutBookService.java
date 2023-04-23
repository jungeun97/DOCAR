package com.pororo.docar.domain.checkoutBook.service;

import com.pororo.docar.domain.checkoutBook.repository.CheckoutBookRepository;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

@Service
@Transactional(readOnly = true)
@RequiredArgsConstructor
public class CheckoutBookService {
    private final CheckoutBookRepository checkoutBookRepository;
}
