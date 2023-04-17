package com.pororo.docar.domain.book.entity;

import lombok.*;

import javax.persistence.*;

@Entity
@Builder
@Getter
@Setter
@NoArgsConstructor
@AllArgsConstructor
public class Book {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Long id;

    @Column(length = 50, nullable = false)
    private String name;

    @Column(length = 50)
    private String author;

    @Column(length = 50)
    private String isbn;

    @Column(columnDefinition = "DECIMAL(9,6)", nullable = false)
    private double depth;

    @Column(length = 100)
    private String title_url;

    @Column(length = 100, nullable = false)
    private String qr_url;
}
