import { BrowserRouter, Route, Routes } from 'react-router-dom';
import CleanupPage from './Presentational/Pages/CleanupPage';
import MainPage from './Presentational/Pages/MainPage';
import ReturnPage from './Presentational/Pages/ReturnPage';

function Router() {
  return (
    <BrowserRouter>
      <Routes>
        <Route path="/" element={<MainPage />} />
        <Route path="/return" element={<ReturnPage />} />
        <Route path="/cleanup" element={<CleanupPage />} />
      </Routes>
    </BrowserRouter>
  );
}

export default Router;
