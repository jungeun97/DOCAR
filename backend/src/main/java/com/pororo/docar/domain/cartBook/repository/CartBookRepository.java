package com.pororo.docar.domain.cartBook.repository;

import com.pororo.docar.domain.cartBook.entity.CartBook;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.query.Param;
import org.springframework.stereotype.Repository;

import java.util.List;
import java.util.Optional;

@Repository
public interface CartBookRepository extends JpaRepository<CartBook, Long> {
    Optional<CartBook> findByBookId(Long bookId);

    @Query("SELECT cb.book.id FROM CartBook cb WHERE cb.floor = :floor")
    List<Long> findBookIdsByFloor(@Param("floor") Long floor);

    @Query("SELECT MAX(cb.site) FROM CartBook cb WHERE cb.floor = :floor")
    Optional<Long> findMaxSiteByFloor(@Param("floor") Long floor);

    boolean existsById(Long id);
}
