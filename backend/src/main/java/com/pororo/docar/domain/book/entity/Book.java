package com.pororo.docar.domain.book.entity;

import com.pororo.docar.domain.bookshelf.entity.Bookshelf;
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

    @ManyToOne(fetch = FetchType.LAZY)
    @JoinColumn(name = "bookshelf_id")
    private Bookshelf bookshelf;

    public void setBookshelf(Bookshelf bookshelf) {
        if (this.bookshelf != null) {
            this.bookshelf.getBooks().remove(this);
        }

        this.bookshelf = bookshelf;
        this.bookshelf.getBooks().add(this);
    }
}
