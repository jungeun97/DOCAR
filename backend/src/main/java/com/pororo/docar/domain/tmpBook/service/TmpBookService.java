package com.pororo.docar.domain.tmpBook.service;

import com.pororo.docar.common.exception.BadRequestException;
import com.pororo.docar.common.exception.ResourceAlreadyExistsException;
import com.pororo.docar.common.exception.ResourceNotFoundException;
import com.pororo.docar.domain.book.entity.Book;
import com.pororo.docar.domain.book.repository.BookRepository;
import com.pororo.docar.domain.cartBook.entity.CartBook;
import com.pororo.docar.domain.cartBook.repository.CartBookRepository;
import com.pororo.docar.domain.checkoutBook.entity.CheckoutBook;
import com.pororo.docar.domain.checkoutBook.repository.CheckoutBookRepository;
import com.pororo.docar.domain.tmpBook.dto.TmpBookInfo;
import com.pororo.docar.domain.tmpBook.entity.TmpBook;
import com.pororo.docar.domain.tmpBook.repository.TmpBookRepository;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import java.util.Arrays;
import java.util.List;
import java.util.Optional;
import java.util.stream.Collectors;
import java.util.stream.Stream;

@Service
@Transactional(readOnly = true)
@RequiredArgsConstructor
public class TmpBookService {
    private final BookRepository bookRepository;
    private final CheckoutBookRepository checkoutBookRepository;
    private final TmpBookRepository tmpBookRepository;
    private final CartBookRepository cartBookRepository;

    // 바코드 인식 후 반납 처리
    @Transactional
    public TmpBookInfo moveCheckedOutBookToTmpBook(String isbn) {

        Double cartLength = 300.0;
        Long cartFloor = 2L;
        Long cartSite = 1L;

        // 바코드로 Book 조회
        Book book = bookRepository.findByIsbn(isbn)
                .orElseThrow(() -> new ResourceNotFoundException("해당 바코드에 해당하는 책이 없습니다."));

        // 찾은 책의 id로 checkout_book 테이블에서 조회
        CheckoutBook checkoutBook = checkoutBookRepository.findByBookId(book.getId())
                .orElseThrow(() -> new ResourceNotFoundException("대출 중인 책이 아닙니다."));

        Long bookId = book.getId();
        Long bookDepth = book.getDepth();

        List<CartBook> cartBooks = cartBookRepository.findAll();
        List<TmpBook> tmpBooks = tmpBookRepository.findAll();

        // 1. 카트에도 아무 것도 없고 아예 처음 반납하는 책일 때
        if (cartBooks.isEmpty() && tmpBooks.isEmpty()) {
            cartFloor = 2L;
            cartSite = 1L;
        } else {
            // CartBook과 TmpBook에서 floor가 2인 책들의 id값을 찾아옵니다.
            List<Long> cartBook2Ids = cartBookRepository.findBookIdsByFloor(2L);
            List<Long> tmpBook2Ids = tmpBookRepository.findBookIdsByFloor(2L);

            // 두 리스트를 합쳐서 중복을 제거합니다.
            List<Long> book2Ids = Stream.concat(cartBook2Ids.stream(), tmpBook2Ids.stream())
                    .distinct()
                    .collect(Collectors.toList());

            // Book 테이블에서 해당 id의 책들의 depth 값을 더합니다.
            Long depthOnFloor2 = bookRepository.findDepthByIds(book2Ids);

            if (cartLength - (depthOnFloor2+bookDepth) >= 50) {
                List<Long> tmpBookIds2 = tmpBookRepository.findBookIdsByFloor(2L);

                if (!tmpBookIds2.isEmpty()) {
                    Optional<Long> maxSite = tmpBookRepository.findMaxSiteByFloor(2L);
                    cartSite = maxSite.orElse(0L) + 1L;
                } else {
                    List<Long> cartBookIds2 = cartBookRepository.findBookIdsByFloor(2L);
                    if (!cartBookIds2.isEmpty()) {
                        Optional<Long> maxSite = cartBookRepository.findMaxSiteByFloor(2L);
                        cartSite = maxSite.orElse(0L) + 1L;
                    } else {
                        cartSite = 1L;
                    }
                }
            } else {

                if (cartLength - (depthOnFloor2+bookDepth) >= 50) {
                    cartFloor = 1L;
                    List<Long> tmpBookIds1 = tmpBookRepository.findBookIdsByFloor(1L);

                    if (!tmpBookIds1.isEmpty()) {
                        Optional<Long> maxSite = tmpBookRepository.findMaxSiteByFloor(1L);
                        cartSite = maxSite.orElse(0L) + 1L;
                    } else {
                        List<Long> cartBookIds1 = cartBookRepository.findBookIdsByFloor(1L);
                        if (!cartBookIds1.isEmpty()) {
                            Optional<Long> maxSite = cartBookRepository.findMaxSiteByFloor(1L);
                            cartSite = maxSite.orElse(0L) + 1L;
                        } else {
                            cartSite = 1L;
                        }
                    }
                } else {
                    throw new BadRequestException("더 이상 책을 반납할 수 없습니다. 카트의 책을 정리 해주세요.");
                }
            }
        }
        if (tmpBookRepository.findByBookId(book.getId()).isPresent()) {
            throw new BadRequestException("이미 임시 책으로 등록된 책입니다.");
        }

        // TmpBook으로 이동
        TmpBook tmpBook = TmpBook.builder()
                .floor(cartFloor)
                .site(cartSite)
                .book(book)
                .build();
        tmpBookRepository.save(tmpBook);

        // checkout_book에서 해당 Book 삭제
        checkoutBookRepository.deleteByBookId(book.getId());
        return new TmpBookInfo(tmpBook);
    }

    public List<TmpBook> getTmpBooks() {
        return tmpBookRepository.findAll();
    }

    @Transactional
    public void insertCartBooks() {
        List<TmpBook> tmpBooks = tmpBookRepository.findAll();
        if (tmpBooks.isEmpty()) {
            throw new ResourceNotFoundException("임시 도서 목록이 비어있습니다.");
        }

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
                throw new ResourceAlreadyExistsException("이미 카트에 존재하는 책 입니다.");
            }
        }
    }
}
