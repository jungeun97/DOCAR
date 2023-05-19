package com.pororo.docar.domain.book.service;

import com.pororo.docar.common.exception.ResourceNotFoundException;
import com.pororo.docar.domain.book.dto.BookApiResponse;
import com.pororo.docar.domain.book.entity.Book;
import com.pororo.docar.domain.book.repository.BookRepository;
import com.pororo.docar.domain.bookshelf.repository.BookshelfRepository;
import lombok.RequiredArgsConstructor;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Value;
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
    @Value("${aladin.ttbKey}")
    private String ttbKey;

    RestTemplate restTemplate = new RestTemplate();
    @Transactional
    public void fetchDataFromApi() {
        List<String> isbnCodeList = List.of("9791162244760", "9791162241912", "9788997383474", "9788966263134", "9791160508567");
        List<Book> bookList = new ArrayList<>();
        for (String isbnCode : isbnCodeList) {
            String apiUrl = String.format("https://www.aladin.co.kr/ttb/api/ItemLookUp.aspx?ttbkey=%s&itemIdType=ISBN&ItemId=", ttbKey) + isbnCode + "&output=js&Version=20131101&OptResult=packing";
            BookApiResponse response = restTemplate.getForObject(apiUrl, BookApiResponse.class);
            BookApiResponse.Item item = response.getItem().get(0);
            Book book = Book.builder()
                    .name(item.getTitle())
                    .author(item.getAuthor())
                    .isbn(item.getIsbn13())
                    .depth(item.getSubInfo().getPacking().getSizeDepth())
                    .cover(item.getCover())
                    .bookshelf(bookshelfRepository.findById(1L).orElseThrow(
                            () -> new ResourceNotFoundException("안됨")
                    ))
                    .build();
            bookList.add(book);

        }
        bookRepository.saveAll(bookList);
    }
}
