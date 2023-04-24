import React, { useEffect, useState } from 'react';
import * as CleanupStyle from './CleanupPage_Style';
import axios from 'axios';
import { useNavigate, Outlet } from 'react-router-dom';
import BookList from './../Components/Cleanup/BookList';

function CleanupPage() {
  const [books, setBooks] = useState<[]>([]);
  const navigate = useNavigate();

  const GetBooks = () => {
    axios.get('https://jsonplaceholder.typicode.com/todos').then((res) => {
      console.log(res.data);
      setBooks(res.data);
    });
  };

  useEffect(() => {
    GetBooks();
  }, []);

  return (
    <CleanupStyle.WrapClean>
      <BookList />
    </CleanupStyle.WrapClean>
  );
}

export default CleanupPage;
