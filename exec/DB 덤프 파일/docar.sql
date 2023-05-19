-- MariaDB dump 10.19  Distrib 10.11.2-MariaDB, for debian-linux-gnu (x86_64)
--
-- Host: localhost    Database: docar
-- ------------------------------------------------------
-- Server version	10.11.2-MariaDB-1:10.11.2+maria~ubu2204

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `admin`
--

DROP TABLE IF EXISTS `admin`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `admin` (
  `id` bigint(20) NOT NULL AUTO_INCREMENT,
  `name` varchar(255) DEFAULT NULL,
  `pin_number` varchar(255) DEFAULT NULL,
  `qr_url` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `admin`
--

LOCK TABLES `admin` WRITE;
/*!40000 ALTER TABLE `admin` DISABLE KEYS */;
INSERT INTO `admin` VALUES
(1,'admin','$2a$10$kLj.eujZLudb.Bf1VJROM.2mDP4hSmVGIoP26lD3nl.ZGnMlqDX4u','$2a$10$4XtBauoJgKovkQQgZIfeT.F4rh42vBW88VLivROwqA/obcF6Q.QOi');
/*!40000 ALTER TABLE `admin` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `book`
--

DROP TABLE IF EXISTS `book`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `book` (
  `id` bigint(20) NOT NULL AUTO_INCREMENT,
  `author` varchar(50) DEFAULT NULL,
  `cover` varchar(100) DEFAULT NULL,
  `depth` bigint(20) NOT NULL,
  `isbn` varchar(50) NOT NULL,
  `name` varchar(100) NOT NULL,
  `bookshelf_id` bigint(20) DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `FKd8d8xgv94y9sxs6yn36uq4jb` (`bookshelf_id`),
  CONSTRAINT `FKd8d8xgv94y9sxs6yn36uq4jb` FOREIGN KEY (`bookshelf_id`) REFERENCES `bookshelf` (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=10 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `book`
--

LOCK TABLES `book` WRITE;
/*!40000 ALTER TABLE `book` DISABLE KEYS */;
INSERT INTO `book` VALUES
(1,'kim','image.jpg',10,'546872','thanks',1),
(2,'진은영 (지은이)','https://image.aladin.co.kr/product/30036/43/coversum/8932040443_1.jpg',9,'9788932040448','나는 오래된 거리처럼 너를 사랑하고',3),
(3,'나가노 히로유키 (지은이), 장진희 (옮긴이)','https://image.aladin.co.kr/product/20005/43/coversum/k282635148_1.jpg',18,'9791160508567','다시 미분 적분 - 선형대수, 확률과 통계, 알고리즘의 바탕이 되는 기초 수학',1),
(4,'댄 밴더캄 (지은이), 장원호 (옮긴이)','https://image.aladin.co.kr/product/27319/31/coversum/8966263135_1.jpg',19,'9788966263134','이펙티브 타입스크립트 - 동작 원리의 이해와 구체적인 조언 62가지',1),
(5,'조수현 (지은이)','https://image.aladin.co.kr/product/12441/63/coversum/8997383477_1.jpg',18,'9788997383474','이더리움 베이직 - 마트 컨트랙트 입문에서 DApp구현까지 | 블록체인 4차 산업혁명의 열쇠!',1),
(6,'미아 스타인 (지은이), 최길우 (옮긴이)','https://image.aladin.co.kr/product/19544/0/coversum/k652635124_1.jpg',18,'9791162241912','파이썬 자료구조와 알고리즘 - 기초 튼튼, 핵심 쏙쏙, 실력 쑥쑥',1),
(7,'클레어 정 (지은이)','https://image.aladin.co.kr/product/28225/17/coversum/k782835377_1.jpg',18,'9791162244760','UX/UI 디자이너를 위한 실무 피그마 - 디자인 시스템에서 개발 전달까지',1),
(8,'김철수 (지은이)','https://image.aladin.co.kr/product/20957/29/coversum/k512636276_1.jpg',14,'9791158391744','개발자의 글쓰기 - 변수 네이밍부터 릴리스 노트, 장애 보고서, 기술 블로그까지, 프로그래머의 글쓰기 고민 끝!',1),
(9,'최유수 (지은이)','https://image.aladin.co.kr/product/19842/30/coversum/k992635337_1.jpg',9,'9788994796871','무엇인지 무엇이었는지 무엇일 수 있는지 (리커버)',3);
/*!40000 ALTER TABLE `book` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `bookshelf`
--

DROP TABLE IF EXISTS `bookshelf`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `bookshelf` (
  `id` bigint(20) NOT NULL AUTO_INCREMENT,
  `qr_url` varchar(100) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `bookshelf`
--

LOCK TABLES `bookshelf` WRITE;
/*!40000 ALTER TABLE `bookshelf` DISABLE KEYS */;
INSERT INTO `bookshelf` VALUES
(1,'1'),
(2,'2'),
(3,'3'),
(4,'4'),
(5,'5'),
(6,'6');
/*!40000 ALTER TABLE `bookshelf` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `cart_book`
--

DROP TABLE IF EXISTS `cart_book`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `cart_book` (
  `id` bigint(20) NOT NULL AUTO_INCREMENT,
  `floor` bigint(20) DEFAULT NULL,
  `site` bigint(20) DEFAULT NULL,
  `book_id` bigint(20) NOT NULL,
  PRIMARY KEY (`id`),
  KEY `FK90ec4wn2pyrj8rm263natn6aq` (`book_id`),
  CONSTRAINT `FK90ec4wn2pyrj8rm263natn6aq` FOREIGN KEY (`book_id`) REFERENCES `book` (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `cart_book`
--

LOCK TABLES `cart_book` WRITE;
/*!40000 ALTER TABLE `cart_book` DISABLE KEYS */;
INSERT INTO `cart_book` VALUES
(1,2,2,3),
(2,2,3,4),
(3,2,4,5),
(4,2,5,6),
(5,2,6,7),
(6,2,7,8);
/*!40000 ALTER TABLE `cart_book` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `checkout_book`
--

DROP TABLE IF EXISTS `checkout_book`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `checkout_book` (
  `id` bigint(20) NOT NULL AUTO_INCREMENT,
  `book_id` bigint(20) NOT NULL,
  `user_id` bigint(20) DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `FK9i0bfd6l29b8qd45e0dv1flpk` (`book_id`),
  KEY `FKoj03k15n4gxo4ub6ks2xu646l` (`user_id`),
  CONSTRAINT `FK9i0bfd6l29b8qd45e0dv1flpk` FOREIGN KEY (`book_id`) REFERENCES `book` (`id`),
  CONSTRAINT `FKoj03k15n4gxo4ub6ks2xu646l` FOREIGN KEY (`user_id`) REFERENCES `user` (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `checkout_book`
--

LOCK TABLES `checkout_book` WRITE;
/*!40000 ALTER TABLE `checkout_book` DISABLE KEYS */;
/*!40000 ALTER TABLE `checkout_book` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tmp_book`
--

DROP TABLE IF EXISTS `tmp_book`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `tmp_book` (
  `id` bigint(20) NOT NULL AUTO_INCREMENT,
  `floor` bigint(20) DEFAULT NULL,
  `site` bigint(20) DEFAULT NULL,
  `book_id` bigint(20) NOT NULL,
  PRIMARY KEY (`id`),
  KEY `FKjvqjs59ocyspjabapdlknta9n` (`book_id`),
  CONSTRAINT `FKjvqjs59ocyspjabapdlknta9n` FOREIGN KEY (`book_id`) REFERENCES `book` (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tmp_book`
--

LOCK TABLES `tmp_book` WRITE;
/*!40000 ALTER TABLE `tmp_book` DISABLE KEYS */;
INSERT INTO `tmp_book` VALUES
(1,2,8,2),
(2,2,9,9);
/*!40000 ALTER TABLE `tmp_book` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `user`
--

DROP TABLE IF EXISTS `user`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `user` (
  `id` bigint(20) NOT NULL AUTO_INCREMENT,
  `email` varchar(100) NOT NULL,
  `name` varchar(50) NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `UK_ob8kqyqqgmefl0aco34akdtpe` (`email`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `user`
--

LOCK TABLES `user` WRITE;
/*!40000 ALTER TABLE `user` DISABLE KEYS */;
INSERT INTO `user` VALUES
(1,'123456@ssafy.com','JC');
/*!40000 ALTER TABLE `user` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2023-05-19  0:39:40
