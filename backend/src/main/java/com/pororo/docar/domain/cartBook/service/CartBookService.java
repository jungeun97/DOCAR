package com.pororo.docar.domain.cartBook.service;

import com.pororo.docar.common.exception.BadRequestException;
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
        List<CartBook> bookList = cartBookRepository.findAll();
        List<TmpBook> list = new ArrayList<>();
        orderList.add(1L);
        orderList.add(2L);
        orderList.add(3L);
        orderList.add(4L);
        orderList.add(5L);
        Long idx = orderList.get(0);

        if (!orderList.isEmpty()) {
            for (CartBook cartBook : bookList) {
                if (cartBook.getBook().getBookshelf().getId() == idx) {
                    TmpBook tmpBook = TmpBook.builder()
                            .floor(cartBook.getFloor())
                            .site(cartBook.getSite())
                            .book(cartBook.getBook())
                            .build();
                    if (!tmpBookRepository.existsById(tmpBook.getBook().getId())) {
                        list.add(tmpBook);
                    }
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
                setList.add(new BookSetList().entityToDto(cartBook));
            }
            return setList;
        } else {
            throw new BadRequestException("모든 책장 정리가 완료되었습니다.");
        }
    }

    @Transactional
    public void deleteSetBooks() {
        List<TmpBook> setBookList = tmpBookRepository.findAll();
        List<CartBook> doneBookList = cartBookRepository.findAll();
        Long idx = orderList.remove(0);

        if (!setBookList.isEmpty()) {
            for (TmpBook tmpBook : setBookList) {
                for (CartBook cartBook : doneBookList) {
                    Long id = tmpBook.getBook().getId();
                    if (id == cartBook.getBook().getId()) {
                        cartBookRepository.delete(cartBook);
                    }
                }
            }
            tmpBookRepository.deleteAll();
        } else {
            throw new BadRequestException("정리할 책이 없습니다");
        }
    }

    @Transactional
    public void goHome(List<Long> bookIds) {
        List<CartBook> doneBookList = cartBookRepository.findAll();
        if (!bookIds.isEmpty()) {
           for (Long idx : bookIds) {
               for (CartBook cartBook : doneBookList) {
                   if (idx == cartBook.getBook().getId()) {
                       cartBookRepository.delete(cartBook);
                   }
               }
           }
        }
        tmpBookRepository.deleteAll();
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public CartBook findById(Long id) {
        return cartBookRepository.findById(id)
                .orElseThrow(() -> new ResourceNotFoundException("Id를 확인해주세요."));
    }

    public TmpBook getBookById(Long id) {
        return tmpBookRepository.findById(id)
                .orElseThrow(() -> new ResourceNotFoundException("Id를 확인해주세요."));
    }


}
