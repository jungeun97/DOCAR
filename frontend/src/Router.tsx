import { BrowserRouter, Route, Routes } from 'react-router-dom';
import CleanupPage from './Presentational/Pages/CleanupPage';
import MainPage from './Presentational/Pages/MainPage';
import ReturnPage from './Presentational/Pages/ReturnPage';
import LoginPage from './Presentational/Pages/LoginPage';
import BookList from './Presentational/Components/Cleanup/BookList';
import Bookshelf from './Presentational/Components/Cleanup/Bookshelf';

function Router() {
  return (
    <BrowserRouter>
      <Routes>
        <Route path="/" element={<MainPage />} />
        <Route path="/return" element={<ReturnPage />} />
        <Route path="/cleanup" element={<CleanupPage />}>
          <Route index element={<BookList />} />
          <Route path=":id" element={<Bookshelf />} />
        </Route>
        <Route path="/login" element={<LoginPage />} />
      </Routes>
    </BrowserRouter>
  );
}

export default Router;
