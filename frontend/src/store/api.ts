import axios, { AxiosInstance } from 'axios';

const API_URL = 'https://j8d109.p.ssafy.io/api/';

const API: AxiosInstance = axios.create({
  baseURL: API_URL,
  withCredentials: true,
  headers: {
    'Content-Type': 'application/json;charset=UTF-8',
    accept: 'application/json,',
  },
});

// API.interceptors.request.use((config) => {
//   const accessToken = Cookies.get('accessToken');
//   if (accessToken) {
//     config.headers.Authorization = `Bearer ${accessToken}`;
//   }
//   return config;
// });

API.interceptors.response.use(
  (response) => {
    return response;
  },
  async (error) => {
    const responseStatus = error?.response?.status || null;
    // console.log(`Error: ${responseStatus}`);
    // Handle error cases
    return Promise.reject(error);
  }
);

export default API;
