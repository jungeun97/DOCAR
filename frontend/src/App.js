import { BrowserRouter, Routes, Route } from "react-router-dom";
import MainPage from "./Presentational/Page/MainPage";
import BooksPage from "./Presentational/Page/BooksPage";
import AdminPage from "./Presentational/Page/AdminPage";
import styled from "styled-components";
import img from "./Assets/back.jpg";

const WrapApp = styled.div`
  width: 800px;
  height: 480px;
  background-image: url(${img});
  /* background-repeat: no-repeat; */
`;

function App() {
  return (
    <WrapApp>
      <BrowserRouter>
        <Routes>
          <Route path="/" element={<MainPage />} />
          <Route path="/bookslist" element={<BooksPage />} />
          <Route path="/admin" element={<AdminPage />} />
        </Routes>
      </BrowserRouter>
    </WrapApp>
  );
}

export default App;
