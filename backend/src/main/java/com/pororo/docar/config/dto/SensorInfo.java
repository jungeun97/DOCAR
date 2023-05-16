package com.pororo.docar.config.dto;

import lombok.Data;
import lombok.NoArgsConstructor;

@Data
@NoArgsConstructor
public class SensorInfo {
    private long distance;
    private String barcode;

    public SensorInfo(long distance, String barcode) {
        this.distance = distance;
        this.barcode = barcode;
    }
}
