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
@Transactional()
@RequiredArgsConstructor
public class TmpBookService {
    private final TmpBookRepository tmpBookRepository;
    private final CartBookRepository cartBookRepository;

    public List<TmpBook> getTmpBooks() {
        return tmpBookRepository.findAll();
    }

    public void insertCartBooks() {
        List<TmpBook> tmpBooks = tmpBookRepository.findAll();

        for (TmpBook tmpBook : tmpBooks) {
            CartBook cartBook = CartBook.builder()
                    .floor(tmpBook.getFloor())
                    .site(tmpBook.getSite())
                    .book(tmpBook.getBook())
//                    .user(tmpBook.getUser())
                    .build();
            cartBookRepository.save(cartBook);
        }

        tmpBookRepository.deleteAll();
    }
}
