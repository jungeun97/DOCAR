package com.pororo.docar.domain.admin.entity;

import lombok.*;

import javax.persistence.*;

@Entity
@Builder
@Getter
@Setter
@NoArgsConstructor
@AllArgsConstructor
@Table(name = "admin")
public class Admin {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Long id;

    @Column(name = "name")
    private String name;

    @Column(name = "pin_number")
    private String pinNumber;

    @Column(name = "qr_url")
    private String qrCode;

//    public Admin() {}
//
//    public Admin(String name) {
//        this.name = name;
//    }
//
//    public int getPinNumber() {
//        return pinNumber;
//    }
//
//    public void setPinNumber(int pinNumber) {
//        this.pinNumber = pinNumber;
//    }

    // 생성자, getter, setter, toString 등 생략
}
