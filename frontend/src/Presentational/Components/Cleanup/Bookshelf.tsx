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

const API_URL = 'http://k8d101.p.ssafy.io:8080/api';

function Bookshelf() {
  const [books, setBooks] = useState<null | API.CartBookType>(null);
  const [curbooks, setCurbooks] = useState<API.CartBookType[]>([]);
  // const { id } = useParams() as { id: string };

  // 카트 도서 목록 전체 조회
  useEffect(() => {
    const PostCartBooks = async () => {
      const request = await API.PostCartBookList();
<<<<<<< HEAD
      console.log("해당 책장 데이터 읽기")
      console.log(request);
=======
      console.log('데이터 읽기');
>>>>>>> 01200929377f49a6d39c3487e6016a2cf283ae1a
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
                  // 책장 정리 완료했으니깐 삭제
                  .then((res) => {
                    console.log('다시데이터 읽기');
                    setBooks(res.data.data);
                    booksData(res.data.data);
                  })
                  .catch((res) => console.log(res));
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
          {/* {books ? <BookTableCheck books={books}/> : <></>} */}
          
          <BookTableCheck books={curbooks} />
        </>
      ),
    }).then((result) => {
      // 확인 버튼을 누르면 반납된 책들만 보여준다.
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
              <BookTableChecked />
            </>
          ),
        }).then((result) => {
          if (result.isConfirmed) {
            // 확인 버튼을 눌렀을 때,
            // 확인 버튼을 누르면 axios로 다음 책장을 받는다.
            console.log(result); // 다음 책장이 있으면 다음 페이지로 넘어가고, 없으면 마무리 페이지로 간다.
            axios
              .get('https://jsonplaceholder.typicode.com/todos')
              .then((res) => {
                // setBooks(res.data);
                console.log('도서 정리 완료 요청 성공');
                navigate(`/cleanup/end`);
              });
          } else {
            setCheckModal();
          }
        });
      } else {
        MySwal.fire({
          title: '실팽',
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
