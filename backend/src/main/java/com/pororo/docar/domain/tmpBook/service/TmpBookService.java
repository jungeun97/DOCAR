package com.pororo.docar.domain.tmpBook.service;

import com.pororo.docar.domain.book.entity.Book;
import com.pororo.docar.domain.tmpBook.entity.TmpBook;
import com.pororo.docar.domain.tmpBook.repository.TmpBookRepository;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import java.util.List;

@Service
@Transactional(readOnly = true)
@RequiredArgsConstructor
public class TmpBookService {
    private final TmpBookRepository tmpBookRepository;

    public List<TmpBook> getTmpBooks() {
        return tmpBookRepository.findAll();
    }
}
