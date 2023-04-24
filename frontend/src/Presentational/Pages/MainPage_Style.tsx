import styled from 'styled-components';
import { AiFillLock } from 'react-icons/ai';
import { Link } from 'react-router-dom';

// export const WrapMain = styled.div`
//   width: 100%;
//   height: 100%;
//   display: flex;
//   justify-content: center;
//   align-items: center;
// `;

// export const WrapBtn = styled.div`
//   display: flex;
//   flex-basis: 50%;
//   height: 100vh;
//   font-size: 48px;
//   justify-content: center;
//   align-items: center;
//   box-shadow: rgba(50, 50, 93, 0.25) 0px 50px 100px -20px,
//     rgba(0, 0, 0, 0.3) 0px 30px 60px -30px,
//     rgba(10, 37, 64, 0.35) 0px -2px 6px 0px inset;
// `;

// export const Mbtn = styled.div`
/* width: 99%;
height: 99%; */
// `;

export const WrapMain = styled.div`
  width: 100%;
  height: 100%;
  display: flex;
  justify-content: center;
  align-items: center;
`;

export const WrapBtn = styled.button`
  display: flex;
  flex-basis: 50%;
  width: 50vw;
  height: 100vh;
  font-size: 48px;
  justify-content: center;
  align-items: center;
  box-shadow: rgba(50, 50, 93, 0.25) 0px 50px 100px -20px,
    rgba(0, 0, 0, 0.3) 0px 30px 60px -30px,
    rgba(10, 37, 64, 0.35) 0px -2px 6px 0px inset;

  transform-style: preserve-3d;
  transition: transform 2s;

  &:hover {
    cursor: pointer;
  }

  &:first-child {
    transform-origin: top right;
  }

  &:last-child {
    transform-origin: top left;
  }
`;

export const FlipWrapper = styled.div`
  display: inline-block;
  perspective: 1000px;

  &:focus-within ${WrapBtn} {
    transform: rotateY(-180deg);
  }

  &:focus-within ${WrapBtn}:first-child {
    transition: color transparent 0.5s;
  }
`;
