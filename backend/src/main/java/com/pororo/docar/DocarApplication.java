package com.pororo.docar;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.data.jpa.repository.config.EnableJpaAuditing;

@SpringBootApplication
@EnableJpaAuditing
public class DocarApplication {

	public static void main(String[] args) {
		SpringApplication.run(DocarApplication.class, args);
	}

}
