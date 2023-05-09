package com.pororo.docar.domain.cartBook.service;

import com.pororo.docar.common.exception.BadRequestException;
import com.pororo.docar.common.exception.ResourceNotFoundException;
import com.pororo.docar.domain.cartBook.dto.BookSetList;
import com.pororo.docar.domain.cartBook.entity.CartBook;
import com.pororo.docar.domain.cartBook.repository.CartBookRepository;
import com.pororo.docar.domain.tmpBook.entity.TmpBook;
import com.pororo.docar.domain.tmpBook.repository.TmpBookRepository;
import com.pororo.docar.domain.tmpBook.service.TmpBookService;
import lombok.RequiredArgsConstructor;
import lombok.extern.slf4j.Slf4j;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

import java.util.*;

@Slf4j
@Service
@Transactional(readOnly = true)
@RequiredArgsConstructor
public class CartBookService {
    private final CartBookRepository cartBookRepository;
    private final TmpBookRepository tmpBookRepository;
    private final TmpBookService tmpBookService;

    public static List<Long> orderList = new LinkedList<>();

    static int N = 3, M = 5;
    static int[][] arr = {{-1, 1, -1, 1, -1}, {1, 1, 1, 1, 1}, {-1, 1, -1, 1, -1}};
    static Map<Integer, int[]> position = Map.of(1, new int[]{0, 0}, 2, new int[]{0, 2}, 3, new int[]{0, 4}, 4, new int[]{2, 0}, 5, new int[]{2, 2}, 6, new int[]{2, 4});
    static int[][] visited = new int[N][M];
    static List<Long> bookshelves = new ArrayList<>();
    static int[] di = {1, 1, 0, -1, -1, -1, 0, 1};
    static int[] dj = {0, -1, -1, -1, 0, 1, 1, 1};
    static int[] dx = {1, -1};
    static int[] dy = {0, 0};
    static boolean arrange = false;

    public static void bfs(int i, int j) {
        Queue<int[]> q = new LinkedList<>();
        q.offer(new int[]{i, j});
        visited[i][j] = 1;

        while (!q.isEmpty()) {
            int[] curr = q.poll();
            i = curr[0];
            j = curr[1];

            for (int k = 0; k < 2; k++) {
                int nx = i + dx[k];
                int ny = j + dy[k];
                if (0 <= nx && nx < N && 0 <= ny && ny < M) {
                    if (arr[nx][ny] == 2) {
                        for (Map.Entry<Integer, int[]> entry : position.entrySet()) {
                            if (Arrays.equals(entry.getValue(), new int[]{nx, ny})) {
                                if (!orderList.contains(Long.parseLong(Integer.toString(entry.getKey())))) {
                                    orderList.add(Long.parseLong(Integer.toString(entry.getKey())));
                                }
                            }
                        }
                    }
                }
            }

            for (int k = 0; k < 8; k++) {
                int ni = i + di[k];
                int nj = j + dj[k];
                if (0 <= ni && ni < N && 0 <= nj && nj < M) {
                    if (visited[ni][nj] == 0 && arr[ni][nj] == 1) {
                        q.offer(new int[]{ni, nj});
                        visited[ni][nj] = 1;
                    }
                }
            }
        }
    }

    public static void getOrderList() {
        for (Long bookshelf : bookshelves) {
            int[] pos = position.get(Integer.parseInt(String.valueOf(bookshelf)));
            arr[pos[0]][pos[1]] = 2;
        }
        bfs(1, 0);
    }


    public List<BookSetList> getBooks() {
        List<BookSetList> list = new ArrayList<>();
        List<CartBook> bookList = cartBookRepository.findAll();

        for (CartBook cartBook : bookList) {
            list.add(new BookSetList().entityToDto(cartBook));
        }
        return list;
    }

    @Transactional
    public List<BookSetList> getBooksByBookshelf() {
        log.info("=====================post 메소드 시작");
        List<CartBook> bookList = cartBookRepository.findAll();
        List<TmpBook> list = new ArrayList<>();
        if (!arrange) {
            for (CartBook cartBook : bookList) {
                if (!bookshelves.contains(cartBook.getBook().getBookshelf().getId())) {
                    bookshelves.add(cartBook.getBook().getBookshelf().getId());
                }
            }
            getOrderList();
            arrange = true;
            bookshelves.clear();
        }
        log.info("=======================bfs 로직 돌아감");
        log.info("=====================orderlist: " + orderList);


        if (!orderList.isEmpty()) {
            System.out.println(orderList);
            log.info("=====================orderlist: " + orderList);
            Long idx = orderList.get(0);
            System.out.println(idx);
            log.info("=====================정리할 책장번호: " + idx);
            for (CartBook cartBook : bookList) {
                if (cartBook.getBook().getBookshelf().getId() == idx) {
                    TmpBook tmpBook = TmpBook.builder()
                            .floor(cartBook.getFloor())
                            .site(cartBook.getSite())
                            .book(cartBook.getBook())
                            .build();
                    System.out.println(tmpBook.getBook().getName());
                    if (!tmpBookRepository.existsByBook(tmpBook.getBook())) {
                        list.add(tmpBook);
                    }
                }
            }

            List<BookSetList> setList = new ArrayList<>();
            List<TmpBook> setBookList = tmpBookRepository.findAll();

            for (TmpBook tmpBook : setBookList) {
                CartBook cartBook = CartBook.builder()
                        .floor(tmpBook.getFloor())
                        .site(tmpBook.getSite())
                        .book(tmpBook.getBook())
                        .build();
                setList.add(new BookSetList().entityToDto(cartBook));
            }
            return setList;
        } else {
            throw new BadRequestException("정리할 책장이 없습니다.");
        }
    }

    @Transactional
    public void deleteSetBooks() {
        List<TmpBook> setBookList = tmpBookRepository.findAll();
        List<CartBook> doneBookList = cartBookRepository.findAll();

        if (!orderList.isEmpty()) {
            orderList.remove(0);
        } else {
            throw new BadRequestException("정리할 책장이 업습니다.");
        }

        if (!setBookList.isEmpty()) {
            for (TmpBook tmpBook : setBookList) {
                for (CartBook cartBook : doneBookList) {
                    Long id = tmpBook.getBook().getId();
                    if (id == cartBook.getBook().getId()) {
                        cartBookRepository.delete(cartBook);
                    }
                }
            }
            tmpBookRepository.deleteAll();
        } else {
            throw new BadRequestException("정리할 책이 없습니다");
        }
    }

    @Transactional
    public void goHome(List<Long> bookIds) {
        List<CartBook> doneBookList = cartBookRepository.findAll();
        arrange = false;
        if (!bookIds.isEmpty()) {
           for (Long idx : bookIds) {
               for (CartBook cartBook : doneBookList) {
                   if (idx == cartBook.getBook().getId()) {
                       cartBookRepository.delete(cartBook);
                   }
               }
           }
        }
        tmpBookRepository.deleteAll();
//        System.out.println("===============================gohome후 arrange:" + arrange);
        log.info("=====================gohome 후 arrange: " + arrange);

    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    public CartBook findById(Long id) {
        return cartBookRepository.findById(id)
                .orElseThrow(() -> new ResourceNotFoundException("Id를 확인해주세요."));
    }

    public TmpBook getBookById(Long id) {
        return tmpBookRepository.findById(id)
                .orElseThrow(() -> new ResourceNotFoundException("Id를 확인해주세요."));
    }


}
