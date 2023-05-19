package com.pororo.docar.domain.cartBook.service;

import com.pororo.docar.common.exception.BadRequestException;
import com.pororo.docar.config.WebSocketConfig;
import com.pororo.docar.domain.cartBook.dto.BookIds;
import com.pororo.docar.domain.cartBook.dto.BookSetList;
import com.pororo.docar.domain.cartBook.entity.CartBook;
import com.pororo.docar.domain.cartBook.repository.CartBookRepository;
import com.pororo.docar.domain.tmpBook.entity.TmpBook;
import com.pororo.docar.domain.tmpBook.repository.TmpBookRepository;
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
    private final WebSocketConfig.MyWebSocketHandler myWebSocketHandler;

    public static List<Long> orderList = new LinkedList<>();
    public static List<Long> depthList = new ArrayList<>();
    public static List<Long> indexList = new ArrayList<>();

    static int N = 3, M = 5;
    static int[][] arr = {{-1, 1, -1, 1, -1}, {1, 1, 1, 1, 1}, {-1, 1, -1, 1, -1}};
    static Map<Integer, int[]> position = Map.of(1, new int[]{0, 0}, 2, new int[]{0, 2}, 3, new int[]{0, 4}, 4, new int[]{2, 0}, 5, new int[]{2, 2}, 6, new int[]{2, 4});
    static List<Long> bookshelves = new ArrayList<>();
    static int[] di = {1, 1, 0, -1, -1, -1, 0, 1};
    static int[] dj = {0, -1, -1, -1, 0, 1, 1, 1};
    static int[] dx = {1, -1};
    static int[] dy = {0, 0};
    static boolean arrange = false;

    public static void bfs(int i, int j) {
        int[][] visited = new int[N][M];
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
        // 정리할 책이 있는 책장을 체크하기 위해서 해당 위치를 2로 체크
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
        List<CartBook> bookList = cartBookRepository.findAll();
        List<TmpBook> list = new ArrayList<>();
        // 정리를 한 적이 없다면 최단경로를 구하는 로직이 실행됨
        if (!arrange) {
            for (CartBook cartBook : bookList) {
                if (!bookshelves.contains(cartBook.getBook().getBookshelf().getId())) {
                    bookshelves.add(cartBook.getBook().getBookshelf().getId());
                }
            }
            getOrderList();
            arrange = true;
            // 최단경로를 구하고 난 뒤에는 로직을 초기화시키기 위해서 책장순서 및 arr배열을 초기화시킴
            bookshelves.clear();
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < M; j++) {
                    if (arr[i][j] == 2) {
                        arr[i][j] = -1;
                    }
                }
            }
        }

        // 정리해야하는 순서가 존재한다면, 해당 책장의 책들을 정리하는 로직
        if (!orderList.isEmpty()) {
            Long idx = orderList.get(0);
            // 먼저 정리해야하는 책을 tmpbook에 저장 (tmpbook를 해당 책장에서 정리해야하는 책을 저장하는 용도로 사용)
            for (CartBook cartBook : bookList) {
                if (cartBook.getBook().getBookshelf().getId() == idx) {
                    TmpBook tmpBook = TmpBook.builder()
                            .floor(cartBook.getFloor())
                            .site(cartBook.getSite())
                            .book(cartBook.getBook())
                            .build();
                    if (!tmpBookRepository.existsByBook(tmpBook.getBook())) {
                        list.add(tmpBook);
                    }
                }
            }
            tmpBookRepository.saveAll(list);

            List<BookSetList> setList = new ArrayList<>();
            depthList = new ArrayList<>();
            indexList = new ArrayList<>();
            List<TmpBook> setBookList = tmpBookRepository.findAll();
            List<CartBook> cartBookList = cartBookRepository.findAll();
            // tmpbook에 있는 책들을 dto로 변환하여 목록을 출력
            for (TmpBook tmpBook : setBookList) {
                CartBook cartBook = CartBook.builder()
                        .floor(tmpBook.getFloor())
                        .site(tmpBook.getSite())
                        .book(tmpBook.getBook())
                        .build();
                setList.add(new BookSetList().entityToDto(cartBook));
            }

            for (int i = 0; i < cartBookList.size(); i++) {
                if (cartBookList.get(i).getBook().getBookshelf().getId() == idx) {
                    indexList.add((long)i);
                }
                depthList.add(cartBookList.get(i).getBook().getDepth());
            }
            myWebSocketHandler.sendIndexAndDepthListsToAllSessions(indexList, depthList, orderList.get(0));
            return setList;
        } else {
            myWebSocketHandler.sendIndexAndDepthListsToAllSessions(indexList, depthList, 99L);
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
            throw new BadRequestException("정리할 책장이 없습니다.");
        }
        // 정리해야하는 책이 있다면, 해당 책을 cartbook에서 삭제시킴 + tmpbook 내역도 초기화
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
    public void goHome(BookIds input) {
        List<CartBook> doneBookList = cartBookRepository.findAll();
        // 원위치로 이동시키므로, 최단 경로 구하는 flag를 초기화시킴.
        arrange = false;
        // 정리 중에 원위치로 이동시킨다면, 지금까지 정리한 책은 cart에서 삭제시키고 tmpbook내역은 그냥 초기화
        if (!input.getBookIds().isEmpty()) {
           for (Long id : input.getBookIds()) {
               for (CartBook cartBook : doneBookList) {
                   if (id == cartBook.getBook().getId()) {
                       cartBookRepository.delete(cartBook);
                   }
               }
           }
        }
        tmpBookRepository.deleteAll();
        myWebSocketHandler.sendIndexAndDepthListsToAllSessions(indexList, depthList, 0L);
    }
}
