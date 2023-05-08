package com.pororo.docar.domain.admin.service;

import com.pororo.docar.common.exception.BadRequestException;
import com.pororo.docar.common.exception.ResourceNotFoundException;
import com.pororo.docar.domain.admin.dto.*;
import com.pororo.docar.domain.admin.entity.Admin;
import com.pororo.docar.domain.admin.repository.AdminRepository;
import lombok.RequiredArgsConstructor;
import org.springframework.security.crypto.password.PasswordEncoder;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

@Service
@Transactional(readOnly = true)
@RequiredArgsConstructor
public class AdminService {
    private final AdminRepository adminRepository;
    private final PasswordEncoder passwordEncoder;

    public AdminDto loginAdmin(AdminLoginDto loginDto) {
        Admin admin = adminRepository.findById(1L)
                .orElseThrow(() -> new ResourceNotFoundException("관리자가 아닙니다"));

        if (!passwordEncoder.matches(loginDto.getPinNumber(), admin.getPinNumber())) {
            throw new BadRequestException("PIN NUMBER가 다릅니다");
        }
        return new AdminDto().entityToDto(admin);
    }

    @Transactional
    public AdminDto registerAdmin(AdminResisterDto resisterDto) {

        Admin admin = Admin.builder()
                .name(resisterDto.getName())
                .pinNumber(passwordEncoder.encode(resisterDto.getPinNumber()))
                .qrCode(passwordEncoder.encode(resisterDto.getQrCode()))
                .build();
        adminRepository.save(admin);
        return new AdminDto().entityToDto(admin);
    }

    @Transactional
    public AdminDto changeAdmin(AdminChangePwDto changePwDto) {
        Admin admin = adminRepository.findById(1L)
                .orElseThrow(() -> new ResourceNotFoundException("관리자가 아닙니다"));

        if(!passwordEncoder.matches(changePwDto.getPinNumber(), admin.getPinNumber())) {
            throw new BadRequestException("입력하신 비밀번호가 다릅니다.");
        }

        admin.setPinNumber(passwordEncoder.encode(changePwDto.getNewPinNumber()));
        adminRepository.save(admin);

        return new AdminDto().entityToDto(admin);
    }


    public AdminDto qrLoginAdmin(AdminQrLoginDto loginDto) {
        Admin admin = adminRepository.findById(1L)
                .orElseThrow(() -> new ResourceNotFoundException("관리자가 아닙니다"));

        if (!passwordEncoder.matches(loginDto.getQrCode(), admin.getQrCode())) {
            throw new BadRequestException("관리자가 아닙니다!");
        }
        return new AdminDto().entityToDto(admin);
    }

}
