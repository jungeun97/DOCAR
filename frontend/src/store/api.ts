import axios, { AxiosError } from 'axios';

export interface ReturnList {
  id: number;
  floor: number;
  site: number;
  bookName: string;
}

const API_URL = 'http://k8d101.p.ssafy.io:8080/api';

function printError(error: AxiosError) {
  if (error.response) {
    // console.log(error.response.data);
  } else if (error.message) {
    // console.log('오류 메시지:', error.message);
  } else {
    // console.log('알 수 없는 오류가 발생했습니다.');
  }
}

// 반납 책 리스트 조회
export async function getReturnList(): Promise<ReturnList | null> {
  let data: ReturnList | null = null;

  try {
    const res = await axios.get(`${API_URL}/returns`, {
      withCredentials: true,
    });

    data = res.data.data as ReturnList;
  } catch (error) {
    const axiosError = error as AxiosError;
    // printError(axiosError);
  }

  return data;
}
