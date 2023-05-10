import React from 'react';
import styled from 'styled-components';
import Swal from 'sweetalert2';
import withReactContent from 'sweetalert2-react-content';

const MySwal = withReactContent(Swal);

interface ModalProps {
  title: string;
  text: string;
  icon?: 'warning' | 'error' | 'success' | 'info' | 'question' | undefined;
  confirmButtonText?: string;
}

const Modal = ({ title, text, icon, confirmButtonText }: ModalProps) => {
  MySwal.fire({
    title,
    text,
    icon,
    confirmButtonText,
  });
  
  return null;
};

export default Modal;

