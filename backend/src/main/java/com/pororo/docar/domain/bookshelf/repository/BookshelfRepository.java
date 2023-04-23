package com.pororo.docar.domain.bookshelf.repository;

import com.pororo.docar.domain.bookshelf.entity.Bookshelf;
import org.springframework.data.jpa.repository.JpaRepository;

public interface BookshelfRepository extends JpaRepository<Bookshelf, Long> {
}
