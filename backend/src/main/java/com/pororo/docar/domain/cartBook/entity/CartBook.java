package com.pororo.docar.domain.cartBook.entity;

import com.pororo.docar.domain.book.entity.Book;
import lombok.*;

import javax.persistence.*;
import java.util.ArrayList;
import java.util.List;

@Entity
@Builder
@Getter
@Setter
@NoArgsConstructor
@AllArgsConstructor
public class CartBook {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Long id;

    @Column
    private Long floor;

    @Column
    private Long column;

    @Builder.Default
    @OneToMany(mappedBy = "cartBook", cascade = CascadeType.ALL, fetch = FetchType.LAZY)
    private List<Book> books = new ArrayList<>();
}
