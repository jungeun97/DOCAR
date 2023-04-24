package com.pororo.docar.domain.tmpBook.repository;

import com.pororo.docar.domain.tmpBook.entity.TmpBook;
import org.springframework.data.jpa.repository.JpaRepository;

public interface TmpBookRepository extends JpaRepository<TmpBook, Long> {
}
