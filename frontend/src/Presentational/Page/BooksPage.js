import React, { useEffect, useState } from "react";
import * as BooksPageStyle from "./BooksPage_Style";
import Btn from "./../Components/Btn";
import axios from "axios";
import BookItem from "./../Components/BookItem";

function BooksPage(props) {
  const [books, setBooks] = useState([]);

  const GetPost = () => {
    axios.get("https://jsonplaceholder.typicode.com/posts").then((res) => {
      console.log(res.data);
      setBooks(res.data);
    });
  };

  useEffect(() => {
    GetPost();
  }, []);

  return (
    <BooksPageStyle.bookspage>
      <BooksPageStyle.booktitle>도서목록</BooksPageStyle.booktitle>
      {books.map((book) => (
        <BookItem book={book} />
      ))}
    </BooksPageStyle.bookspage>
  );
}

export default BooksPage;
