// !!! DO NOT ADD #pragma once !!! //

// Step 1.
// Declare custom effects using the RGB_MATRIX_EFFECT macro
// (note the lack of semicolon after the macro!)
RGB_MATRIX_EFFECT(numpad_effect)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

const static uint8_t NUMPAD0 = 38;
const static uint8_t NUMPAD1 = 41;
const static uint8_t NUMPAD2 = 42;
const static uint8_t NUMPAD3 = 43;
const static uint8_t NUMPAD4 = 50;
const static uint8_t NUMPAD5 = 49;
const static uint8_t NUMPAD6 = 48;
const static uint8_t NUMPAD7 = 53;
const static uint8_t NUMPAD8 = 54;
const static uint8_t NUMPAD9 = 55;

const static uint8_t NUMPAD_DOT = 37;
const static uint8_t NUMPAD_ENT = 36;

const static uint8_t ARROW_U = 9;
const static uint8_t ARROW_L = 13;
const static uint8_t ARROW_D = 14;
const static uint8_t ARROW_R = 15;

const static uint8_t HOME_C = 59;
const static uint8_t END_C = 62;

static void numpad_effect_init(effect_params_t* params) {
    rgb_matrix_set_color_all(0, 0, 0);
}

static bool numpad_effect_run(effect_params_t *params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    for (uint8_t i = led_min; i < led_max; i++) {
        uint8_t red = 0;
        uint8_t green = 0;
        uint8_t blue = 0;

        switch(i) {
            case NUMPAD0:
                green += 5;
            case NUMPAD1:
                green += 5;
            case NUMPAD2:
                green += 5;
            case NUMPAD3:
                green += 10;
            case NUMPAD4:
                green += 10;
            case NUMPAD5:
                green += 10;
            case NUMPAD6:
                green += 15;
            case NUMPAD7:
                green += 15;
            case NUMPAD8:
                green += 15;
            case NUMPAD9:
                red = 255;
                break;
            case NUMPAD_DOT:
                green = 128;
                break;
            case NUMPAD_ENT:
                red = 128;
                blue = 128;
                break;
            case ARROW_U:
            case ARROW_L:
            case ARROW_D:
            case ARROW_R:
                blue = 128;
                break;
            case HOME_C:
            case END_C:
                green = 255;
                break;
        }

        if (red > 0 || green > 0 || blue > 0) {
            rgb_matrix_set_color(i, red, green, blue);
        }
    }

    return rgb_matrix_check_finished_leds(led_max);
}

static bool numpad_effect(effect_params_t* params) {
    if (params->init) numpad_effect_init(params);
    return numpad_effect_run(params);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS