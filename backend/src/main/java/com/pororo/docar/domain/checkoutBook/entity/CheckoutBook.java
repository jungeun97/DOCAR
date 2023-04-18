package com.pororo.docar.domain.checkoutBook.entity;

import com.pororo.docar.domain.book.entity.Book;
import lombok.*;

import javax.persistence.*;

@Entity
@Builder
@Getter
@Setter
@NoArgsConstructor
@AllArgsConstructor
public class CheckoutBook {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Long id;

    @OneToOne(fetch = FetchType.LAZY)
    @JoinColumn(name = "book_id")
    private Book book;

//    @ManyToOne(fetch = FetchType.LAZY)
//    @JoinColumn(name = "user_id")
//    private User user;

    public void setBook(Book book) {
        this.book = book;
        this.book.setCheckoutBook(this);
    }
}
