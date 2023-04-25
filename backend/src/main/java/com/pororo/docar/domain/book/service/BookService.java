package com.pororo.docar.domain.book.service;

import com.pororo.docar.common.exception.ResourceNotFoundException;
import com.pororo.docar.domain.book.entity.Book;
import com.pororo.docar.domain.book.repository.BookRepository;
import com.pororo.docar.domain.bookshelf.repository.BookshelfRepository;
import lombok.RequiredArgsConstructor;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;
import org.springframework.web.client.RestTemplate;

import java.util.ArrayList;
import java.util.List;

@Service
@Transactional(readOnly = true)
@RequiredArgsConstructor
public class BookService {
    @Autowired
    private final BookRepository bookRepository;
    private final BookshelfRepository bookshelfRepository;

    RestTemplate restTemplate = new RestTemplate();
    @Transactional
    public void fetchDataFromApi() {
        List<String> isbnCodeList = List.of("9791133487516", "9791133487523", "9791133487530", "9791133487547", "9791133487554", "9791133487561", "9791133487578", "9791133487585", "9791133487592", "9791133487608");
        List<Book> bookList = new ArrayList<>();
        for (String isbnCode : isbnCodeList) {
            String apiUrl = "https://www.aladin.co.kr/ttb/api/ItemLookUp.aspx?ttbkey=ttbchn98011431002&itemIdType=ISBN&ItemId=" + isbnCode + "&output=js&Version=20131101&OptResult=packing";
            BookApiResponse response = restTemplate.getForObject(apiUrl, BookApiResponse.class);
            BookApiResponse.Item item = response.getItem().get(0);
            System.out.println("==========================item: " + item.getTitle());
            System.out.println("==========================item: " + item.getAuthor());
            Book book = Book.builder()
                    .name(item.getTitle())
                    .author(item.getAuthor())
                    .isbn(item.getIsbn13())
                    .depth(item.getSubInfo().getPacking().getSizeDepth())
                    .title_url(item.getCover())
                    .qr_url("바보")
                    .build();
            bookList.add(book);

        }
        bookRepository.saveAll(bookList);
    }
}
