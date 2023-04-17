package com.pororo.docar.domain.book.service;

import com.pororo.docar.domain.book.repository.BookRepository;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

@Service
@Transactional(readOnly = true)
@RequiredArgsConstructor
public class BookService {
    private final BookRepository bookRepository;
}
