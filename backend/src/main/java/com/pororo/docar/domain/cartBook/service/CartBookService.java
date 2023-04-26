package com.pororo.docar.domain.cartBook.service;

import com.pororo.docar.common.exception.ResourceNotFoundException;
import com.pororo.docar.domain.cartBook.dto.BookSetList;
import com.pororo.docar.domain.cartBook.entity.CartBook;
import com.pororo.docar.domain.cartBook.repository.CartBookRepository;
import com.pororo.docar.domain.tmpBook.entity.TmpBook;
import com.pororo.docar.domain.tmpBook.repository.TmpBookRepository;
import com.pororo.docar.domain.tmpBook.service.TmpBookService;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;


@Service
@Transactional(readOnly = true)
@RequiredArgsConstructor
public class CartBookService {
    private final CartBookRepository cartBookRepository;
    private final TmpBookRepository tmpBookRepository;
    private final TmpBookService tmpBookService;

//    public List<Long> orderList = tmpBookService.orderList;
    public static List<Long> orderList = new LinkedList<>();


    public List<BookSetList> getBooks() {
        List<BookSetList> list = new ArrayList<>();
        List<CartBook> bookList = cartBookRepository.findAll();

        for (CartBook cartBook : bookList) {
            list.add(new BookSetList().entityToDto(cartBook));
        }
        return list;
    }



    @Transactional
    public List<BookSetList> getBooksByBookshelf() {
        List<TmpBook> list = new ArrayList<>();
        orderList.add(1L);
        orderList.add(2L);
        Long idx = orderList.remove(0);

        List<CartBook> bookList = cartBookRepository.findAll();
        for (CartBook cartBook : bookList) {
            if (cartBook.getBook().getBookshelf().getId() == idx) {
                TmpBook tmpBook = TmpBook.builder()
                        .floor(cartBook.getFloor())
                        .site(cartBook.getSite())
                        .book(cartBook.getBook())
                        .build();
                list.add(tmpBook);
            }
        }
        tmpBookRepository.saveAll(list);

        List<BookSetList> setList = new ArrayList<>();
        List<TmpBook> setBookList = tmpBookRepository.findAll();

        for (TmpBook tmpBook : setBookList) {
            CartBook cartBook = CartBook.builder()
                    .floor(tmpBook.getFloor())
                    .site(tmpBook.getSite())
                    .book(tmpBook.getBook())
                    .build();
            System.out.println(cartBook);
            setList.add(new BookSetList().entityToDto(cartBook));
        }
        System.out.println(setList);
        return setList;
    }

    @Transactional
    public void deleteSetBooks() {
        List<TmpBook> setBookList = tmpBookRepository.findAll();
        List<CartBook> doneBookList = cartBookRepository.findAll();

        for (TmpBook tmpBook : setBookList) {
            for (CartBook cartBook : doneBookList) {
                Long id = tmpBook.getBook().getId();
                if (id == cartBook.getBook().getId()) {
                    cartBookRepository.delete(cartBook);
                }
            }
        }
        tmpBookRepository.deleteAll();
    }



    ///////////////////////////////

    public CartBook getBookById(Long id) {
        return cartBookRepository.findById(id)
                .orElseThrow(() -> new ResourceNotFoundException("Id를 확인해주세요."));
    }


}
