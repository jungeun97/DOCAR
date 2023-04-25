package com.pororo.docar.domain.tmpBook.service;

import com.pororo.docar.domain.book.entity.Book;
import com.pororo.docar.domain.cartBook.entity.CartBook;
import com.pororo.docar.domain.cartBook.repository.CartBookRepository;
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
    private final CartBookRepository cartBookRepository;

    public List<TmpBook> getTmpBooks() {
        return tmpBookRepository.findAll();
    }

    @Transactional
    public void insertCartBooks() {
        List<TmpBook> tmpBooks = tmpBookRepository.findAll();

        for (TmpBook tmpBook : tmpBooks) {
            Long bookId = tmpBook.getBook().getId();
            if (!(cartBookRepository.findByBookId(bookId).isPresent())) {
                CartBook cartBook = CartBook.builder()
                        .floor(tmpBook.getFloor())
                        .site(tmpBook.getSite())
                        .book(tmpBook.getBook())
                        .build();
                cartBookRepository.save(cartBook);
                tmpBookRepository.deleteAll();
            } else {
                throw new RuntimeException("이미 카트에 존재하는 도서입니다.");
            }
        }

    }

}
