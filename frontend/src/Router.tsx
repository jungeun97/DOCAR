import { BrowserRouter, Route, Routes } from 'react-router-dom';
import CleanupPage from './Presentational/Pages/CleanupPage';
import MainPage from './Presentational/Pages/MainPage';
import ReturnPage from './Presentational/Pages/ReturnPage';
import LoginPage from './Presentational/Pages/LoginPage';
import EndCleanup from './Presentational/Components/Cleanup/EndCleanup';
import Bookshelf from './Presentational/Components/Cleanup/Bookshelf';
import Layout from './Presentational/layout/Layout';
import BookList from './Presentational/Components/Cleanup/BookList';

function Router() {
  return (
    <BrowserRouter>
      <Routes>
        <Route path="/" element={<MainPage />} />
        <Route element={<Layout />}>
          <Route path="/return" element={<ReturnPage />} />
          <Route path="/login" element={<LoginPage />} />
        </Route>
        <Route path="/cleanup" element={<CleanupPage />}>
          <Route path="" element={<BookList /> } />
          <Route path="end" element={<EndCleanup />} />
          {/* <Route path=":id" element={<Bookshelf />} /> */}
          <Route path="shelf" element={<Bookshelf />} />
        </Route>
        {/* <Route path="/cleanup/end" element={<EndCleanup />} />
        <Route path="/cleanup/:id" element={<Bookshelf />} /> */}
      </Routes>
    </BrowserRouter>
  );
}

export default Router;
