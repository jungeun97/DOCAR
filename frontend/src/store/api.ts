import axios, { AxiosError } from 'axios';

export interface BookDetail {
  id: number;
  floor?: number;
  site?: number;
  bookName: string;
  author: string;
  cover: string;
}

export interface BookDetail extends Array<BookDetail> {
  content: [];
}

const API_URL = 'https://k8d101.p.ssafy.io/api';

function printError(error: AxiosError) {
  if (error.response) {
    console.log(error.response.data);
  } else if (error.message) {
    console.log('오류 메시지:', error.message);
  } else {
    console.log('알 수 없는 오류가 발생했습니다.');
  }
}

// 책 바코드 체크 후 반납
export async function AddReturnBook(
  barcodeNum: number
): Promise<BookDetail | null> {
  let data: BookDetail | null = null;
  try {
    const res = await axios.post(`${API_URL}/isbn/${barcodeNum}`, {
      withCredentials: true,
    });
    data = res.data.data as BookDetail;
  } catch (error) {
    const axiosError = error as AxiosError;
    printError(axiosError);
    return null;
  }
  return data;
}

// 반납 책 리스트 조회
export async function getReturnList(): Promise<BookDetail[] | null> {
  let data: BookDetail[] | null = null; // BookDetail[]로 타입 변경

  try {
    const res = await axios.get(`${API_URL}/returns`, {
      withCredentials: true,
    });

    data = res.data.data as BookDetail[]; // 배열로 파싱
  } catch (error) {
    const axiosError = error as AxiosError;
    printError(axiosError);
  }

  return data;
}

// 책 최종 반납
export async function AddReturnBookList(): Promise<Boolean | null> {
  let success: Boolean | null = null;
  try {
    const res = await axios.post(`${API_URL}/returns`, {
      withCredentials: true,
    });
    success = res.data.success as Boolean;
  } catch (error) {
    const axiosError = error as AxiosError;
    printError(axiosError);
  }

  return success;
}

// cartbooks GET
// cartbooks 카트 도서 목록 전체 조회
export async function getCartBookList(): Promise<BookDetail | null> {
  let data: BookDetail | null = null;

  try {
    const res = await axios.get(`${API_URL}/cartbooks`, {
      withCredentials: true,
    });

    data = res.data.data as BookDetail;
  } catch (error) {
    const axiosError = error as AxiosError;
  }

  return data;
}

// cartbooks POST
// cartbooks 책장 정리
export async function PostCartBookList(): Promise<BookDetail | null> {
  let data: BookDetail | null = null;

  try {
    const res = await axios.post(`${API_URL}/cartbooks`, {
      withCredentials: true,
    });

    data = res.data.data as BookDetail;
  } catch (error) {
    const axiosError = error as AxiosError;
  }

  return data;
}

export function CleanBookShelf() {
  return axios
    .delete(`${API_URL}/cartbooks`, {
      withCredentials: true,
    })
    .then((res) => res.data)
    .catch((res) => res);
}

// cartbooks 청소완료 후 원위치로
// export async function ReturnCart(): Promise
