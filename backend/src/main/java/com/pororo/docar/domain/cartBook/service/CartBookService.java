package com.pororo.docar.domain.cartBook.service;

import com.pororo.docar.domain.cartBook.dto.BookSetList;
import com.pororo.docar.domain.cartBook.entity.CartBook;
import com.pororo.docar.domain.cartBook.repository.CartBookRepository;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import java.util.ArrayList;
import java.util.List;

@Service
@Transactional(readOnly = true)
@RequiredArgsConstructor
public class CartBookService {
    private final CartBookRepository cartBookRepository;

    public List<BookSetList> getBooks() {
        List<BookSetList> list = new ArrayList<>();
        List<CartBook> bookList = cartBookRepository.findAll();

        for (CartBook cartBook : bookList) {
            list.add(new BookSetList().entityToDto(cartBook));
        }

        return list;
    }
}
