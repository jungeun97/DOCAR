package com.pororo.docar.domain.tmpBook.repository;

import com.pororo.docar.domain.book.entity.Book;
import com.pororo.docar.domain.tmpBook.entity.TmpBook;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.query.Param;

import java.util.List;
import java.util.Optional;

public interface TmpBookRepository extends JpaRepository<TmpBook, Long> {

    Optional<TmpBook> findByBookId(Long bookId);

    @Query("SELECT cb.book.id FROM TmpBook cb WHERE cb.floor = :floor")
    List<Long> findBookIdsByFloor(@Param("floor") Long floor);

    @Query("SELECT MAX(t.site) FROM TmpBook t WHERE t.floor = :floor")
    Optional<Long> findMaxSiteByFloor(@Param("floor") Long floor);

    boolean existsByBook(Book book);

}
