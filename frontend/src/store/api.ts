import axios, { AxiosError } from 'axios';

export interface ReturnBookType {
  id: number;
  floor?: number;
  site?: number;
  bookName: string;
  author: string;
  cover: string;
}

export interface CartBookType {
  bookId: number;
  bookshelfId: number;
  cartBookFloor: number;
  cartBookSite: number;
  bookName: string;
  coverImg: string;
  depth: number;
  author: string;
}

export interface ReturnBookResponse {
  success: boolean;
  message: string;
  data: null;
}

export interface CartBookType extends Array<CartBookType> {
  content: [];
}

interface ErrorResponse {
  message: string;
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

// 핀번호 로그인 API
export async function AddLoginPin(pinNumber: string): Promise<boolean> {
  try {
    const response = await axios.post(`${API_URL}/login`, {
      pinNumber: pinNumber,
      withCredentials: true,
    });
    console.log(response);
    return response.data.success as boolean;
  } catch (error) {
    const axiosError = error as AxiosError;
    console.error(axiosError);
    return false;
  }
}

// Qrcode 로그인 API
export async function AddLoginQr(QrNumber: string): Promise<boolean> {
  try {
    const response = await axios.post(`${API_URL}/qrlogin`, {
      qrCode: QrNumber,
      withCredentials: true,
    });
    console.log(response);
    return response.data.success as boolean;
  } catch (error) {
    const axiosError = error as AxiosError;
    console.error(axiosError);
    return false;
  }
}

// 책 바코드 체크 후 반납
export async function AddReturnBook(
  barcodeNum: number
): Promise<ReturnBookType | null | string> {
  // Promise에 반환 타입 |string 추가
  try {
    const res = await axios.post(`${API_URL}/isbn/${barcodeNum}`, {
      withCredentials: true,
    });
    const data: ReturnBookType = res.data.data;
    return data;
  } catch (error) {
    const axiosError = error as AxiosError<ErrorResponse>;
    printError(axiosError);
    if (axiosError.response?.data?.message) {
      return axiosError.response.data.message; // API로부터 받은 에러 메시지를 반환합니다.
    } else {
      return '오류가 발생했습니다. 다시 시도해주세요.';
    }
  }
}

// 반납 책 리스트 조회
export async function getReturnList(): Promise<ReturnBookType[] | null> {
  let data: ReturnBookType[] | null = null; // BookDetail[]로 타입 변경

  try {
    const res = await axios.get(`${API_URL}/returns`, {
      withCredentials: true,
    });

    data = res.data.data as ReturnBookType[]; // 배열로 파싱
  } catch (error) {
    const axiosError = error as AxiosError;
    printError(axiosError);
  }

  return data;
}

// 책 최종 반납
export async function AddReturnBookList(): Promise<ReturnBookResponse | string> {
  try {
    const res = await axios.post<ReturnBookResponse>(`${API_URL}/returns`, {
      withCredentials: true,
    });
    return res.data;
  } catch (error) {
    const axiosError = error as AxiosError<ErrorResponse>;
    printError(axiosError);
    if (axiosError.response?.data?.message) {
      return axiosError.response.data.message; // API로부터 받은 에러 메시지를 반환합니다.
    } else {
      return '오류가 발생했습니다. 다시 시도해주세요.';
    }
  }
}

// cartbooks GET
// cartbooks 카트 도서 목록 전체 조회
export async function getCartBookList(): Promise<CartBookType | null> {
  let data: CartBookType | null = null;

  try {
    const res = await axios.get(`${API_URL}/cartbooks`, {
      withCredentials: true,
    });

    data = res.data.data as CartBookType;
  } catch (error) {
    const axiosError = error as AxiosError;
  }

  return data;
}

// cartbooks POST
// cartbooks 책장 정리
export async function PostCartBookList(): Promise<CartBookType | null> {
  let data: CartBookType | null = null;

  try {
    const res = await axios.post(`${API_URL}/cartbooks`, {
      withCredentials: true,
    });

    data = res.data.data as CartBookType;
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
export async function getTurtlebot() {
  return axios
    .get(`${API_URL}/turtlebot`, {
      withCredentials: true,
    })
    .then((res) => {
      // API 요청이 성공한 후에 쿠키에서 Authorization 토큰 삭제
      delete axios.defaults.headers.common['Authorization'];
      return res.data;
    })
    .catch((res) => res);
}
