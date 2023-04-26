package com.pororo.docar.domain.book.entity;

import com.pororo.docar.domain.bookshelf.entity.Bookshelf;
import com.pororo.docar.domain.cartBook.entity.CartBook;
import com.pororo.docar.domain.checkoutBook.entity.CheckoutBook;
import com.pororo.docar.domain.tmpBook.entity.TmpBook;
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

    @Column(nullable = false)
    private Long depth;

    @Column(length = 100)
    private String cover;

    @ManyToOne(fetch = FetchType.LAZY)
    @JoinColumn(name = "bookshelf_id")
    private Bookshelf bookshelf;

    @Builder.Default
    @OneToOne(mappedBy = "book", cascade = CascadeType.ALL)
    private CheckoutBook checkoutBook = new CheckoutBook();

    @Builder.Default
    @OneToOne(mappedBy = "book", cascade = CascadeType.ALL)
    private CartBook cartBook = new CartBook();

    @Builder.Default
    @OneToOne(mappedBy = "book", cascade = CascadeType.ALL)
    private TmpBook tmpBook = new TmpBook();

    public void setBookshelf(Bookshelf bookshelf) {
        if (this.bookshelf != null) {
            this.bookshelf.getBooks().remove(this);
        }

        this.bookshelf = bookshelf;
        this.bookshelf.getBooks().add(this);
    }
}
