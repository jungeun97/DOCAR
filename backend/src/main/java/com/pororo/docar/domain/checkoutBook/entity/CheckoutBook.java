package com.pororo.docar.domain.checkoutBook.entity;

import com.pororo.docar.domain.book.entity.Book;
import com.pororo.docar.domain.cartBook.entity.CartBook;
import com.pororo.docar.domain.user.entity.User;
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
    @JoinColumn(name = "book_id", nullable = false)
    private Book book;

    @ManyToOne(fetch = FetchType.LAZY)
    @JoinColumn(name = "user_id")
    private User user;

    public void setBook(Book book) {
        this.book = book;
        this.book.setCheckoutBook(this);
    }

    public void setUser(User user) {
        if (this.user != null) {
            this.user.getCheckoutBooks().remove(this);
        }

        this.user = user;
        this.user.getCheckoutBooks().add(this);
    }
}
