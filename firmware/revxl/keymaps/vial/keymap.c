// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum revxl_layers {
    _MAC,
    _LOWER,
    _RAISE,
    _ADJUST,
};

enum custom_keycodes {
    KVM_MAC = SAFE_RANGE,
    KVM_WIN
};

#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_180; }

bool oled_task_user(void) {
    static const char PROGMEM logo_mac[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0xC0,
    0xF0, 0x7C, 0x1E, 0x0E, 0x0E, 0x1C,
    0x38, 0x70, 0xE0, 0xC0, 0xC0, 0xE0,
    0x70, 0x38, 0x1C, 0x0E, 0x0E, 0x1E,
    0x7C, 0xF0, 0xC0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
    0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x7C,
    0x7C, 0x7C, 0x7C, 0x7C, 0x00, 0x00,
    0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
    0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x7C,
    0x7C, 0x7C, 0x7C, 0x7C, 0x00, 0x00,
    0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xFC,
    0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x00,
    0x00, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x7C,
    0x7C, 0x7C, 0x7C, 0x7C, 0x00, 0x00,
    0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xC0, 0xF0, 0x7C,
    0x1F, 0x07, 0x01, 0xF8, 0xF8, 0xF8,
    0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x61,
    0x61, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8,
    0xF8, 0xF8, 0xF8, 0x01, 0x07, 0x1F,
    0x7C, 0xF0, 0xC0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0x0F, 0x0F, 0x0F, 0x0F,
    0x0F, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
    0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F,
    0x0F, 0x0F, 0xF0, 0xF0, 0xF0, 0xF0,
    0xF0, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F,
    0x00, 0x00, 0x00, 0xF0, 0xF0, 0xF0,
    0xF0, 0xF0, 0x0F, 0x0F, 0x0F, 0x0F,
    0x0F, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xF0, 0xF0, 0xF0, 0xF0,
    0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x03, 0x07, 0x0E, 0x1C, 0x38, 0x70,
    0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x80, 0xC0, 0xE0, 0x70, 0x38,
    0x1C, 0x0E, 0x07, 0x03, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xF1,
    0xF1, 0xF1, 0xF1, 0xF1, 0xF0, 0xF0,
    0xF0, 0xF0, 0x00, 0x01, 0x81, 0x81,
    0x81, 0xF1, 0xF0, 0xF0, 0x80, 0x81,
    0x81, 0x01, 0x01, 0xF1, 0xF1, 0xF1,
    0x71, 0x71, 0x71, 0x71, 0x71, 0x71,
    0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x00, 0x00, 0x00, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x03, 0x07,
    0x0E, 0x1E, 0x3E, 0x7E, 0x7E, 0x3E,
    0x1E, 0x0E, 0x07, 0x03, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x1F, 0x1F, 0x1F, 0x03, 0x03,
    0x03, 0x1F, 0x1F, 0x1F, 0x00, 0x00,
    0x1F, 0x1F, 0x1F, 0x03, 0x03, 0x03,
    0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x1F,
    0x1F, 0x1F, 0x1C, 0x1C, 0x1C, 0x1C,
    0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00,
    };

    static const char PROGMEM logo_win[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0xC0,
    0xF0, 0x7C, 0x1E, 0x0E, 0x0E, 0x1C,
    0x38, 0x70, 0xE0, 0xC0, 0xC0, 0xE0,
    0x70, 0x38, 0x1C, 0x0E, 0x0E, 0x1E,
    0x7C, 0xF0, 0xC0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
    0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x7C,
    0x7C, 0x7C, 0x7C, 0x7C, 0x00, 0x00,
    0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
    0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x7C,
    0x7C, 0x7C, 0x7C, 0x7C, 0x00, 0x00,
    0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xFC,
    0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x00,
    0x00, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x7C,
    0x7C, 0x7C, 0x7C, 0x7C, 0x00, 0x00,
    0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xC0, 0xF0, 0x7C,
    0x1F, 0x07, 0x01, 0xF8, 0xF8, 0xF8,
    0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x61,
    0x61, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8,
    0xF8, 0xF8, 0xF8, 0x01, 0x07, 0x1F,
    0x7C, 0xF0, 0xC0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0x0F, 0x0F, 0x0F, 0x0F,
    0x0F, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
    0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F,
    0x0F, 0x0F, 0xF0, 0xF0, 0xF0, 0xF0,
    0xF0, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F,
    0x00, 0x00, 0x00, 0xF0, 0xF0, 0xF0,
    0xF0, 0xF0, 0x0F, 0x0F, 0x0F, 0x0F,
    0x0F, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xF0, 0xF0, 0xF0, 0xF0,
    0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x03, 0x07, 0x0E, 0x1C, 0x38, 0x70,
    0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x80, 0xC0, 0xE0, 0x70, 0x38,
    0x1C, 0x0E, 0x07, 0x03, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xF1,
    0xF1, 0xF1, 0x81, 0x81, 0x80, 0xF0,
    0xF0, 0xF0, 0x00, 0x01, 0x71, 0x71,
    0x71, 0xF1, 0xF0, 0xF0, 0x70, 0x71,
    0x71, 0x01, 0x01, 0xF1, 0xF1, 0xF1,
    0x71, 0x71, 0x71, 0xF1, 0xF1, 0xF1,
    0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x00, 0x00, 0x00, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x03, 0x07,
    0x0E, 0x1E, 0x3E, 0x7E, 0x7E, 0x3E,
    0x1E, 0x0E, 0x07, 0x03, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,
    0x1F, 0x1F, 0x1F, 0x1F, 0x00, 0x00,
    0x1C, 0x1C, 0x1C, 0x1F, 0x1F, 0x1F,
    0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x1F,
    0x1F, 0x1F, 0x00, 0x00, 0x00, 0x1F,
    0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00,
    };

    static const char PROGMEM logo_lower[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0xC0,
    0xF0, 0x7C, 0x1E, 0x0E, 0x0E, 0x1C,
    0x38, 0x70, 0xE0, 0xC0, 0xC0, 0xE0,
    0x70, 0x38, 0x1C, 0x0E, 0x0E, 0x1E,
    0x7C, 0xF0, 0xC0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
    0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x7C,
    0x7C, 0x7C, 0x7C, 0x7C, 0x00, 0x00,
    0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
    0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x7C,
    0x7C, 0x7C, 0x7C, 0x7C, 0x00, 0x00,
    0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xFC,
    0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x00,
    0x00, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x7C,
    0x7C, 0x7C, 0x7C, 0x7C, 0x00, 0x00,
    0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xC0, 0xF0, 0x7C,
    0x1F, 0x07, 0x01, 0xF8, 0xF8, 0xF8,
    0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x61,
    0x61, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8,
    0xF8, 0xF8, 0xF8, 0x01, 0x07, 0x1F,
    0x7C, 0xF0, 0xC0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0x0F, 0x0F, 0x0F, 0x0F,
    0x0F, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
    0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F,
    0x0F, 0x0F, 0xF0, 0xF0, 0xF0, 0xF0,
    0xF0, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F,
    0x00, 0x00, 0x00, 0xF0, 0xF0, 0xF0,
    0xF0, 0xF0, 0x0F, 0x0F, 0x0F, 0x0F,
    0x0F, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xF0, 0xF0, 0xF0, 0xF0,
    0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x03, 0x07, 0x0E, 0x1C, 0x38, 0x70,
    0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x80, 0xC0, 0xE0, 0x70, 0x38,
    0x1C, 0x0E, 0x07, 0x03, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xF1,
    0xF1, 0xF1, 0x01, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0xF1, 0xF1,
    0xF1, 0x71, 0x70, 0x70, 0xF0, 0xF1,
    0xF1, 0x01, 0x01, 0xF1, 0xF1, 0xF1,
    0x81, 0x81, 0x81, 0xF1, 0xF1, 0xF1,
    0x01, 0x01, 0xF0, 0xF0, 0xF0, 0xF0,
    0xF0, 0xF0, 0x70, 0x70, 0x71, 0x01,
    0x01, 0xF1, 0xF1, 0xF0, 0xF0, 0xF0,
    0xF0, 0x70, 0x70, 0x70, 0x00, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x00, 0x00, 0x00, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x03, 0x07,
    0x0E, 0x1E, 0x3E, 0x7E, 0x7E, 0x3E,
    0x1E, 0x0E, 0x07, 0x03, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x1F, 0x1F, 0x1F, 0x1C, 0x1C,
    0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00,
    0x1F, 0x1F, 0x1F, 0x1C, 0x1C, 0x1C,
    0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x1F,
    0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F,
    0x1F, 0x1F, 0x00, 0x00, 0x1F, 0x1F,
    0x1F, 0x1F, 0x1F, 0x1F, 0x1C, 0x1C,
    0x1C, 0x00, 0x00, 0x1F, 0x1F, 0x1F,
    0x03, 0x03, 0x03, 0x1C, 0x1C, 0x1C,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00,
    };

    static const char PROGMEM logo_raise[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0xC0,
    0xF0, 0x7C, 0x1E, 0x0E, 0x0E, 0x1C,
    0x38, 0x70, 0xE0, 0xC0, 0xC0, 0xE0,
    0x70, 0x38, 0x1C, 0x0E, 0x0E, 0x1E,
    0x7C, 0xF0, 0xC0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
    0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x7C,
    0x7C, 0x7C, 0x7C, 0x7C, 0x00, 0x00,
    0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
    0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x7C,
    0x7C, 0x7C, 0x7C, 0x7C, 0x00, 0x00,
    0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xFC,
    0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x00,
    0x00, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x7C,
    0x7C, 0x7C, 0x7C, 0x7C, 0x00, 0x00,
    0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xC0, 0xF0, 0x7C,
    0x1F, 0x07, 0x01, 0xF8, 0xF8, 0xF8,
    0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x61,
    0x61, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8,
    0xF8, 0xF8, 0xF8, 0x01, 0x07, 0x1F,
    0x7C, 0xF0, 0xC0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0x0F, 0x0F, 0x0F, 0x0F,
    0x0F, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
    0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F,
    0x0F, 0x0F, 0xF0, 0xF0, 0xF0, 0xF0,
    0xF0, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F,
    0x00, 0x00, 0x00, 0xF0, 0xF0, 0xF0,
    0xF0, 0xF0, 0x0F, 0x0F, 0x0F, 0x0F,
    0x0F, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xF0, 0xF0, 0xF0, 0xF0,
    0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x03, 0x07, 0x0E, 0x1C, 0x38, 0x70,
    0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x80, 0xC0, 0xE0, 0x70, 0x38,
    0x1C, 0x0E, 0x07, 0x03, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xF1,
    0xF1, 0xF1, 0xF1, 0xF1, 0xF0, 0x70,
    0x70, 0x70, 0x00, 0x01, 0x81, 0x81,
    0x81, 0xF1, 0xF0, 0xF0, 0x80, 0x81,
    0x81, 0x01, 0x01, 0x71, 0x71, 0x71,
    0xF1, 0xF1, 0xF1, 0x71, 0x71, 0x71,
    0x01, 0x01, 0x00, 0x00, 0x00, 0xF0,
    0xF0, 0xF0, 0x70, 0x70, 0x71, 0x01,
    0x01, 0xF1, 0xF1, 0xF0, 0xF0, 0xF0,
    0xF0, 0x70, 0x70, 0x70, 0x00, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x00, 0x00, 0x00, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x03, 0x07,
    0x0E, 0x1E, 0x3E, 0x7E, 0x7E, 0x3E,
    0x1E, 0x0E, 0x07, 0x03, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x1F, 0x1F, 0x1F, 0x03, 0x03,
    0x03, 0x1C, 0x1C, 0x1C, 0x00, 0x00,
    0x1F, 0x1F, 0x1F, 0x03, 0x03, 0x03,
    0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x1C,
    0x1C, 0x1C, 0x1F, 0x1F, 0x1F, 0x1C,
    0x1C, 0x1C, 0x00, 0x00, 0x1C, 0x1C,
    0x1C, 0x1F, 0x1F, 0x1F, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F,
    0x1F, 0x1F, 0x1F, 0x1C, 0x1C, 0x1C,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00,
    };

    static const char PROGMEM logo_adjust[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0xC0,
    0xF0, 0x7C, 0x1E, 0x0E, 0x0E, 0x1C,
    0x38, 0x70, 0xE0, 0xC0, 0xC0, 0xE0,
    0x70, 0x38, 0x1C, 0x0E, 0x0E, 0x1E,
    0x7C, 0xF0, 0xC0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
    0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x7C,
    0x7C, 0x7C, 0x7C, 0x7C, 0x00, 0x00,
    0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
    0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x7C,
    0x7C, 0x7C, 0x7C, 0x7C, 0x00, 0x00,
    0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xFC,
    0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0x00,
    0x00, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x7C,
    0x7C, 0x7C, 0x7C, 0x7C, 0x00, 0x00,
    0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xC0, 0xF0, 0x7C,
    0x1F, 0x07, 0x01, 0xF8, 0xF8, 0xF8,
    0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x61,
    0x61, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8,
    0xF8, 0xF8, 0xF8, 0x01, 0x07, 0x1F,
    0x7C, 0xF0, 0xC0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0x0F, 0x0F, 0x0F, 0x0F,
    0x0F, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
    0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F,
    0x0F, 0x0F, 0xF0, 0xF0, 0xF0, 0xF0,
    0xF0, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F,
    0x00, 0x00, 0x00, 0xF0, 0xF0, 0xF0,
    0xF0, 0xF0, 0x0F, 0x0F, 0x0F, 0x0F,
    0x0F, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xF0, 0xF0, 0xF0, 0xF0,
    0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x03, 0x07, 0x0E, 0x1C, 0x38, 0x70,
    0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x80, 0xC0, 0xE0, 0x70, 0x38,
    0x1C, 0x0E, 0x07, 0x03, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x81,
    0x81, 0x81, 0xF1, 0xF1, 0xF0, 0x80,
    0x80, 0x80, 0x00, 0x01, 0xF1, 0xF1,
    0xF1, 0x71, 0x70, 0x70, 0x80, 0x81,
    0x81, 0x01, 0x01, 0x81, 0x81, 0x81,
    0x01, 0x01, 0x01, 0xF1, 0xF1, 0xF1,
    0x01, 0x01, 0xF0, 0xF0, 0xF0, 0x00,
    0x00, 0x00, 0xF0, 0xF0, 0xF1, 0x01,
    0x01, 0x01, 0x01, 0x00, 0xF0, 0xF0,
    0xF0, 0x70, 0x70, 0x70, 0x00, 0x01,
    0x71, 0x71, 0x71, 0xF1, 0xF0, 0xF0,
    0x70, 0x70, 0x70, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x00, 0x00, 0x00, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x03, 0x07,
    0x0E, 0x1E, 0x3E, 0x7E, 0x7E, 0x3E,
    0x1E, 0x0E, 0x07, 0x03, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x1F, 0x1F, 0x1F, 0x03, 0x03,
    0x03, 0x1F, 0x1F, 0x1F, 0x00, 0x00,
    0x1F, 0x1F, 0x1F, 0x1C, 0x1C, 0x1C,
    0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x1F,
    0x1F, 0x1F, 0x1C, 0x1C, 0x1C, 0x1F,
    0x1F, 0x1F, 0x00, 0x00, 0x1F, 0x1F,
    0x1F, 0x1C, 0x1C, 0x1C, 0x1F, 0x1F,
    0x1F, 0x00, 0x00, 0x1C, 0x1C, 0x1C,
    0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x1F,
    0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00,
    };

    switch (get_highest_layer(layer_state)) {
        case _MAC:
            if (keymap_config.swap_lctl_lgui) { oled_write_raw_P(logo_win, sizeof(logo_win)); }
            else { oled_write_raw_P(logo_mac, sizeof(logo_mac)); }
            break;
        case _LOWER:
            oled_write_raw_P(logo_lower, sizeof(logo_lower));
            break;
        case _RAISE:
            oled_write_raw_P(logo_raise, sizeof(logo_raise));
            break;
        case _ADJUST:
            oled_write_raw_P(logo_adjust, sizeof(logo_adjust));
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    return false;
}
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KVM_MAC:
            keymap_config.swap_lctl_lgui = keymap_config.swap_rctl_rgui = false;
            if (record->event.pressed) {
                register_code(KC_SCRL);
                wait_ms(50);
                unregister_code(KC_SCRL);
                wait_ms(50);
                register_code(KC_SCRL);
                wait_ms(50);
                unregister_code(KC_SCRL);
                wait_ms(50);
                register_code(KC_1);
                wait_ms(50);
                unregister_code(KC_1);
            }
            return false;
        case KVM_WIN:
            keymap_config.swap_lctl_lgui = keymap_config.swap_rctl_rgui = true;
            if (record->event.pressed) {
                register_code(KC_SCRL);
                wait_ms(50);
                unregister_code(KC_SCRL);
                wait_ms(50);
                register_code(KC_SCRL);
                wait_ms(50);
                unregister_code(KC_SCRL);
                wait_ms(50);
                register_code(KC_2);
                wait_ms(50);
                unregister_code(KC_2);
            }
            return false;
        default:
            return true;

    }
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Mac Layout
    // ,-----------------------------------------.          ,-----------------------------------------. ,--------------------.
    // |  `   |  1   |  2   |  3   |  4   |  5   |          |  6   |  7   |  8   |  9   |  0   |  -   | |  Ins | Home | PgUp |
    // |------+------+------+------+------+------|          |------+------+------+------+------+------| |------+------+------|
    // | Esc  |  Q   |  W   |  E   |  R   |  T   |          |  Y   |  U   |  I   |  O   |  P   | BSPC | |  Del | End  | PgDn |
    // |------+------+------+------+------+------|          |------+------+------+------+------+------| '--------------------'
    // | Tab  |  A   |  S   |  D   |  F   |  G   |          |  H   |  J   |  K   |  L   |  ;   |  '   |
    // |------+------+------+------+------+------|          |------+------+------+------+------+------|        ,------.
    // | Shift|  Z   |  X   |  C   |  V   |  B   |          |  N   |  M   |  ,   |  .   |  /   | Shift|        | Up   |
    // `-------------+------+------+------+------| ,------. |------+------+------+------+------+------' ,------+------+------.
    //        | Ctrl | Alt  | Cmd  | Lower| Enter| | Mute | | Space| Raise| Cmd  | Alt  | Ctrl |        | Left | Down | Right|
    //        `----------------------------------' `------' '----------------------------------'        '--------------------'
    //
    [_MAC] = LAYOUT(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,  KC_5,               KC_6,   KC_7,  KC_8,    KC_9,    KC_0,    KC_MINS, KC_INS,  KC_HOME, KC_PGUP,
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,  KC_T,               KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    KC_BSPC, KC_DEL,  KC_END,  KC_PGDN,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,  KC_G,               KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT,          
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,  KC_B,               KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,
                 KC_LCTL, KC_LALT, KC_LGUI, MO(_LOWER), KC_ENT, KC_KB_MUTE, KC_SPC, MO(_RAISE), KC_RGUI, KC_RALT, KC_RCTL,          KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    // Lower Layout
    // ,-----------------------------------------.          ,-----------------------------------------. ,--------------------.
    // |      |  F1  |  F2  |  F3  |  F4  |  F5  |          |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 | |      |      |      |
    // |------+------+------+------+------+------|          |------+------+------+------+------+------| |------+------+------|
    // |      |  1   |  2   |  3   |  4   |  5   |          |  6   |  7   |  8   |  9   |  0   |  F12 | |      |      |      |
    // |------+------+------+------+------+------|          |------+------+------+------+------+------| '--------------------'
    // |      |  !   |  @   |  #   |  $   |  %   |          |  ^   |  &   |  *   |  (   |  )   |  |   |
    // |------+------+------+------+------+------|          |------+------+------+------+------+------|        ,------.
    // |      |  =   |  -   |  +   |  {   |  }   |          |  [   |  ]   |  ;   |  :   |  \   |      |        |      |
    // `-------------+------+------+------+------| ,------. |------+------+------+------+------+------' ,------+------+------.
    //        |      |      |      |      |      | | Play | |      | Raise|      |      |      |        |      |      |      |
    //        `----------------------------------' `------' '----------------------------------'        '--------------------'
    //
    [_LOWER] = LAYOUT(
        _______,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,               KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  _______, _______, _______,
        _______,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_F12,  _______, _______, _______,
        _______,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,             KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE,          
        _______,  KC_EQL,  KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR,             KC_LBRC, KC_RBRC, KC_SCLN, KC_COLN, KC_BSLS, _______,          _______,
                  _______, _______, _______, _______, _______,   KC_MPLY,  _______, MO(_ADJUST),   _______, _______, _______,          _______, _______, _______
    ),
    // Upper Layout
    // ,-----------------------------------------.          ,-----------------------------------------. ,--------------------.
    // |      |      |      |      |      |      |          |      |      |      |      |      |      | |      |      |      |
    // |------+------+------+------+------+------|          |------+------+------+------+------+------| |------+------+------|
    // |      |      |      |      |      |      |          |      |      |  Up  |      |      |  Del | |      |      |      |
    // |------+------+------+------+------+------|          |------+------+------+------+------+------| '--------------------'
    // |      |      |      |      |      | CapsL|          |      | Left | Down | Right|      |      |
    // |------+------+------+------+------+------| ,------. |------+------+------+------+------+------|        ,------.
    // |      |      |      |      |      |      | | Play | |      |      |      |      |      |      |        |      |
    // `-------------+------+------+------+------| `------' |------+------+------+------+------+------' ,------+------+------.
    //        |      |      |      | Lower|      |          |      |      |      |      |      |        |      |      |      |
    //        `----------------------------------'          '----------------------------------'        '--------------------'
    //
    [_RAISE] = LAYOUT(
        _______,  _______,  _______,  _______,  _______,  _______,             _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,             _______,  _______,  KC_UP,    _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  KC_CAPS,             _______,  KC_LEFT,  KC_DOWN,  KC_RGHT,  _______,  _______,          
        _______,  _______,  _______,  _______,  _______,  _______,             _______,  _______,  _______,  _______,  _______,  _______,            _______,
                  _______,  _______,  _______,  MO(_ADJUST),  _______,   KC_MPLY,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______
    ),
    // Adjust Layout
    // ,-----------------------------------------.          ,-----------------------------------------. ,--------------------.
    // |      |      |      |      |      |      |          |      |      |      |      |      |      | |      |      |      |
    // |------+------+------+------+------+------|          |------+------+------+------+------+------| |------+------+------|
    // | RGB  | Spd+ | Val+ | Sat+ | Hue+ | Mode+|          |      |      |      |      |      |      | |      |      |      |
    // |------+------+------+------+------+------|          |------+------+------+------+------+------| '--------------------'
    // |MacWin| Spd- | Val- | Sat- | Hue- | Mode-|          |      | VolDn| Mute | VolUp|      |      |
    // |------+------+------+------+------+------| ,------. |------+------+------+------+------+------|        ,------.
    // |KVMMAC|      |      |      |      |      | | Play | |      | Prev | Play | Next |      |KVMWIN|        |      |
    // `-------------+------+------+------+------| `------' |------+------+------+------+------+------' ,------+------+------.
    //        |      |      |      |      |      |          |      |      |      |      |      |        |      |      |      |
    //        `----------------------------------'          '----------------------------------'        '--------------------'
    //
    [_ADJUST] = LAYOUT(
        _______,  _______,  _______,  _______,  _______,  _______,             _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        RM_TOGG,  RGB_SPI,  RGB_VAI,  RGB_SAI,  RGB_HUI,  RGB_MODE_FORWARD,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        CG_TOGG,  RGB_SPD,  RGB_VAD,  RGB_SAD,  RGB_HUD,  RGB_MODE_REVERSE,    _______,  KC_VOLD,  KC_MUTE,  KC_VOLU,  _______,  _______,          
        KVM_MAC,  _______,  _______,  _______,  _______,  _______,             _______,  KC_MPRV,  KC_MPLY,  KC_MNXT,  _______,  KVM_WIN,            _______,
                  _______,  _______,  _______,  _______,  _______,   KC_MPLY,  _______,  _______,  _______,  _______,  _______,            RM_PREV,  _______,  RM_NEXT
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_MAC] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [_LOWER] = { ENCODER_CCW_CW(KC_MNXT, KC_MPRV) },
    [_RAISE] = { ENCODER_CCW_CW(KC_MNXT, KC_MPRV) },
    [_ADJUST] = { ENCODER_CCW_CW(KC_MNXT, KC_MPRV) }
};
#endif