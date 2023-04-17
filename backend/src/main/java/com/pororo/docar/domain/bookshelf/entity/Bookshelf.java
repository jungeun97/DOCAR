package com.pororo.docar.domain.bookshelf.entity;

import com.pororo.docar.domain.book.entity.Book;
import lombok.*;

import javax.persistence.*;
import java.util.List;

@Entity
@Builder
@Getter
@Setter
@NoArgsConstructor
@AllArgsConstructor
public class Bookshelf {

    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Long id;

    @Column(length = 100, nullable = false)
    private String qr_url;
}
