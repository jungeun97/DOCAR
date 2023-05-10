import React, { useState, useEffect } from 'react';
import axios from 'axios';
import * as BookStyle from './BookList_Style';
import Btn from './../../Common/Btn';
import { useNavigate } from 'react-router-dom';
import Swal from 'sweetalert2';
import withReactContent from 'sweetalert2-react-content';
import BookTable from './../BookTable';
import BookTableCheck from './../BookTableCheck';
import BookTableChecked from './../BookTableChecked';
import Pagenation from './../Pagenation';
import * as API from '../../../store/api';
import { checkBookType } from '../../../store/types';

const API_URL = 'https://k8d101.p.ssafy.io/api';

function Bookshelf() {
  const [books, setBooks] = useState<null | API.CartBookType>(null);
  const [curbooks, setCurbooks] = useState<API.CartBookType[]>([]);

  // 카트 도서 목록 전체 조회
  useEffect(() => {
    const PostCartBooks = async () => {
      const request = await API.PostCartBookList();
      console.log('데이터 읽기');
      setBooks(request);
      booksData(request);
    };
    PostCartBooks();
  }, []);

  // 페이지 네이션
  const [page, setPage] = useState(1); // 페이지
  const limit = 3; // 몇개 볼거?
  const offset = (page - 1) * limit; // 시작점과 끝점을 구하는 offset

  const booksData = (books: null | API.CartBookType) => {
    if (books) {
      let result = books.slice(offset, offset + limit);
      setCurbooks(result);
    }
  };

  useEffect(() => {
    booksData(books);
  }, [page]);

  const navigate = useNavigate();

  const MySwal = withReactContent(Swal);

  // 다음 책장으로 가는 모달
  const setModal = () => {
    MySwal.fire({
      title: '모든 책을 정리하셨습니까?',
      timerProgressBar: true,
      showCancelButton: true,
      showConfirmButton: true,
      cancelButtonText: '아니오',
      confirmButtonText: '네',
      allowOutsideClick: false,
      html: <div></div>,
    }).then((result) => {
      if (result.isConfirmed) {
        // 확인 버튼을 눌렀을 때,
        axios
          .delete(`${API_URL}/cartbooks`, {
            withCredentials: true,
          })
          // 책장 정리 완료했으니깐 삭제
          .then((res) => {
            console.log('삭제');
            MySwal.fire({
              icon: 'success',
              title: '책장 정리 완료!',
              // timer: 1500,
              timerProgressBar: true,
              // showConfirmButton: false,
              showCancelButton: true,
              showConfirmButton: true,
              cancelButtonText: '정리 종료',
              confirmButtonText: '다음 책장으로 이동',
              allowOutsideClick: false,
              html: <div></div>,
            }).then((result) => {
              if (result.isConfirmed) {
                axios
                  .post(`${API_URL}/cartbooks`, {
                    withCredentials: true,
                  })
                  .then((res) => {
                    console.log(res);
                    console.log('다시데이터 읽기');
                    setBooks(res.data.data);
                    booksData(res.data.data);
                  })
                  .catch((res) => {
                    console.log(res);
                    navigate(`/cleanup/end`);
                    // MySwal.fire({
                    //   title: '모든 책을 정리하였습니다.',
                    //   timerProgressBar: true,
                    //   showCancelButton: false,
                    //   showConfirmButton: true,
                    //   confirmButtonText: '홈으로 이동',
                    //   allowOutsideClick: false,
                    // }).then(() => {
                    //   axios
                    //     .post(`${API_URL}/turtlebot`, {
                    //       bookIds: [],
                    //       withCredentials: true,
                    //     })
                    //     .then((res) => {
                    //       console.log(res);
                    //       navigate(`/`);
                    //     });
                    // });
                  });
              } else {
              }
            });
          })
          .catch((res) => res);
      } else {
      }
    });
  };

  // 중간에 원위치로 돌아가는 모달
  const setCheckModal = () => {
    let modalCheckedBooks: checkBookType[] = [];

    MySwal.fire({
      title: '현재 정리된 책을 체크해주세요',
      timerProgressBar: true,
      showCancelButton: true,
      showConfirmButton: true,
      cancelButtonText: '취소',
      confirmButtonText: '반납하기',
      allowOutsideClick: false,
      html: (
        <>
          <BookTableCheck
            books={curbooks}
            onCheckedItemsChange={(checkedItems) => {
              modalCheckedBooks = checkedItems.map((bookId) => {
                const book = curbooks.find((book) => book.bookId === bookId);
                const checkBook: checkBookType = {
                  bookId: book?.bookId || 0,
                  bookName: book?.bookName || '',
                  author: book?.author || '',
                };
                return checkBook;
              });
            }}
          />
        </>
      ),
    }).then((result) => {
      if (result.isConfirmed) {
        MySwal.fire({
          title: '반납된 책이 맞습니까?',
          timerProgressBar: true,
          showCancelButton: true,
          showConfirmButton: true,
          cancelButtonText: '아니오',
          confirmButtonText: '네',
          allowOutsideClick: false,
          html: (
            <>
              <BookTableChecked books={modalCheckedBooks} />
            </>
          ),
        }).then((result) => {
          if (result.isConfirmed) {
            const bookIds = modalCheckedBooks.map((book) => book.bookId);
            console.log(bookIds);
            axios
              .post(`${API_URL}/turtlebot`, {
                bookIds: bookIds,
                withCredentials: true,
              })
              .then((res) => {
                console.log(res);
                console.log('도서 정리 완료 요청 성공');
                navigate(`/cleanup/end`);
              });
          } else {
            setCheckModal();
          }
        });
      } else {
        MySwal.fire({
          title: '실패',
        });
      }
    });
  };

  return (
    <BookStyle.WrapClean>
      <Btn
        message="원위치로"
        go={() => {
          setCheckModal();
        }}
        position="absolute"
        top="-20px"
        right="18px"
      />
      <BookStyle.Title>현재 책장 반납도서</BookStyle.Title>
      <BookTable books={curbooks} />
      {books ? (
        <Pagenation
          limit={limit}
          page={page}
          totalPosts={books.length}
          setPage={setPage}
        />
      ) : null}
      {/* 여기서 이동할 때 이동해야할 책장 경로 */}
      <Btn
        message={`정리완료`}
        go={() => {
          setModal();
        }}
        position="absolute"
        bottom="10px"
        right="5px"
      />
      {/* 모달 띄어서 다음 책장으로 이동시키기 */}
    </BookStyle.WrapClean>
  );
}

export default Bookshelf;
