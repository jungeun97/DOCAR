package com.pororo.docar.domain.book.repository;

import java.util.List;
import java.util.Optional;

import com.pororo.docar.domain.book.entity.Book;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.query.Param;

public interface BookRepository extends JpaRepository<Book, Long> {
    Optional<Book> findByIsbn(String isbn);

    @Query("SELECT SUM(b.depth) FROM Book b WHERE b.id IN :bookIds")
    Long findDepthByIds(@Param("bookIds") List<Long> bookIds);
}

