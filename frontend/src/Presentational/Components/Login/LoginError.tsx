import Swal from 'sweetalert2';
import withReactContent from 'sweetalert2-react-content';

const MySwal = withReactContent(Swal);

export const LoginError = () => {
  MySwal.fire({
    title: '로그인 실패',
    icon: 'error',
    confirmButtonColor: '#3085d6',
    cancelButtonColor: '#d33',
    confirmButtonText: '확인',
    reverseButtons: true,
  });
};