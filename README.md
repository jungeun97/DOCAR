# DoCar
> 도서관 스마트 카트

> __PORORO(D101)__  
최종현, 김지현, 박정은, 신동윤, 이진성, 이햇살

> __개발 기간__: 2023.04.10 ~ 2023.05.19 (6주) 

<br>

## 팀원 역할
| 이름   | 역할 | 내용                        |
| ------ | ---- | --------------------------- |
| 최종현 | BE | 백앤드 개발, JWT 관리 |
| 김지현 | INFRA, IoT | 서버 구축, ROS 구현 |
| 박정은 | BE | 백앤드 개발, REST API 관리 |
| 신동윤 | INFRA, BE | 서버 구축, 백엔드 개발 |
| 이진성 | FE, IoT | 프론트엔드 개발, ROS 구현 |
| 이햇살 | FE, IoT | 프론트엔드 개발, 라즈베리파이 구현 |

<br>

### UCC ➡ [유튜브](https://www.youtube.com/watch?v=XqWZ3UWdW3c)
### 발표자료 ➡ [최종 발표자료](docs/구미_1반_D101_발표자료.pdf)
### Notion ➡ [노션](https://dent-asiago-e07.notion.site/D101-edc6bd849b91436abe5038a4d9b2465e)

<br>

-------

<br>

## 프로젝트 소개
```
로봇의 발전과 이에 따른 시장 구모가 확대가 되어있는 상황에서, 
다양한 분야로의 활용을 경험해보고자 도서관에 접목시켜 
책 정리를 위한 자율주행카트 개발을 실시함
```

<br>

## 개발환경
소통채널

- Mattermost
- Discord
- Notion
- FigJam

데이터베이스

- MariaDB : 10.11.2

서버

- AWS EC2
- Ubuntu : 20.04 LTS
- Docker : 23.0.4

Raspberry Pi

- Raspbian : GNU/Linux 11

이슈관리

- Jira

UI/UX

- Figma

형상관리

- GitLab

IDE

- IntelliJ IDEA : 2022.3.1
- Visual Studio Code : 1.74.2

기타 툴

- Postman : 10.13.5
- Swagger
- Jenkins

<br>

## 아키텍쳐

<img src = "./docs/imgs/architecture.png">

<br>

## 통신과정

<img src = "./docs/imgs/websocket.png">

<br>

## 기술스택

### Front-End
<div>
	<img src="https://img.shields.io/badge/React-61DAFB?style=flat&logo=React&logoColor=white" />
	<img src="https://img.shields.io/badge/TypeScript-3178C6?style=flat&logo=typescriptt&logoColor=white" />
	<img src="https://img.shields.io/badge/Node.js-339933?style=flat&logo=Node.js&logoColor=white" />
	<img src="https://img.shields.io/badge/Redux-764ABC?style=flat&logo=Redux&logoColor=white" />
    <img src="https://img.shields.io/badge/axios-5A29E4?style=flat&logo=axios&logoColor=white" />
	<img src="https://img.shields.io/badge/ReactRouter-CA4245?style=flat&logo=ReactRouter&logoColor=white" />
</div>

### Back-end
<div>
	<img src="https://img.shields.io/badge/Springboot-6DB33F?style=flat&logo=Springboot&logoColor=white" />
	<img src="https://img.shields.io/badge/JPA-6DB33F?style=flat&logo=JPA&logoColor=white" />
    <img src="https://img.shields.io/badge/hibernate-59666C?style=flat&logo=hibernate&logoColor=white" />
	<img src="https://img.shields.io/badge/jsonwebtokens-000000?style=flat&logo=jsonwebtokens&logoColor=white" />
    <img src="https://img.shields.io/badge/Swagger-85EA2D?style=flat&logo=Swagger&logoColor=white" />
	<img src="https://img.shields.io/badge/mariadb-003545?style=flat&logo=mariadb&logoColor=white" />
	<img src="https://img.shields.io/badge/postman-FF6C37?style=flat&logo=postman&logoColor=white" />
</div>

### IoT
<div>
	<img src="https://img.shields.io/badge/ROS-22314E?style=flat&logo=ros&logoColor=white"/>
	<img src="https://img.shields.io/badge/Raspberry Pi-A22846?style=flat&logo=raspberrypi&logoColor=white"/>
</div>

### TEAM Cooperation
<div>
	<img src="https://img.shields.io/badge/gitlab-FC6D26?style=flat&logo=gitlab&logoColor=white" />
	<img src="https://img.shields.io/badge/jirasoftware-0052CC?style=flat&logo=jirasoftware&logoColor=white" />
    <img src="https://img.shields.io/badge/notion-000000?style=flat&logo=notion&logoColor=white" />
	<img src="https://img.shields.io/badge/mattermost-0058CC?style=flat&logo=mattermost&logoColor=white" />
	<img src="https://img.shields.io/badge/figma-F24E1E?style=flat&logo=figma&logoColor=white" />
</div>

<br>

-----

<br>

## 서비스 및 기능 소개
- 대여했던 책을 반납하는 기능
- 반납이 필요한 책을 반납해야하는 책장으로 최단거리로 이동하는 로직 구현
- 해당 책장에서 반납이 필요한 책 위치를 카트에 네오픽셀로 표시

<br>

## 화면 구성
### 메인페이지
<div>
<img src = "./docs/imgs/main.png" width="700px">
- 반납이나 정리 가능
<div>

<div>
<img src = "./docs/imgs/return.png" width="700px">
- 해당 페이지에서 바코드 리더기에서 책의 바코드를 통해 책을 반납
<div>

<div>
<img src = "./docs/imgs/return_book.png" width="700px">
<br>
- 책을 인식 후에 각 선반의 용량에 따라 어느 선반에 위치하라는 안내
- 초음파 센서 상으로 책이 제대로 선반에 놓아지지 않을 시에 에러 출력
<div>

<div>
<img src = "./docs/imgs/return_list.png" width="700px">
- 반납한 책을 모두 보이고, 정리 목록에 추가
<div>

<div>
<img src = "./docs/imgs/login_qr.png" width="700px">
- 메인에서 정리를 선택시에 관리자 로그인이 필요
- 출입증의 QR로 로그인
<div>

<div>
<img src = "./docs/imgs/login_pin.png" width="700px">
- 메인에서 정리를 선택시에 관리자 로그인이 필요
- 출입증의 핀넘버로 로그인
<div>

<div>
<img src = "./docs/imgs/cart_list.png" width="700px">
- 반납 카트에 있는 전체 도서 목록 출력
- 이동하기 버튼으로 책 정리 시작
<div>

<div>
<img src = "./docs/imgs/present_return.png" width="700px">
- 정리해야하는 책들로 최단거리 구현 후 목적지의 책장의 책 목록 출력 
<div>

<div>
<img src = "./docs/imgs/cart_done.png" width="700px">
- 해당 책장에서 정리를 완료했다면 다음 책장으로 이동 가능
<div>

<div>
<img src = "./docs/imgs/all_done.png" width="700px">
- 책을 모두 정리해 이동할 다음 책장이 없다면 원위치로 이동 가능
<div>

<div>
<img src = "./docs/imgs/go_home.png" width="700px">
- 정리과정 중에 정리를 급종료 및 원위치로 이동해야할 때 사용
- 현재까지 정리한 책 목록 선택 후 해당 책 카트목록에서 삭제
<div>
