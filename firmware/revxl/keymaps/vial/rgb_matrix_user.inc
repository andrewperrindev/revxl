// !!! DO NOT ADD #pragma once !!! //

// Step 1.
// Declare custom effects using the RGB_MATRIX_EFFECT macro
// (note the lack of semicolon after the macro!)
RGB_MATRIX_EFFECT(numpad_effect)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static uint8_t original_effect;

// e.g: A simple effect, self-contained within a single method
static bool numpad_effect(effect_params_t *params) {
  original_effect = rgb_matrix_get_mode();
  RGB_MATRIX_USE_LIMITS(led_min, led_max);

  for (uint8_t i = led_min; i < led_max; i++) {
    rgb_matrix_set_color(i, 0xff, 0xff, 0x00);
  }
  return rgb_matrix_check_finished_leds(led_max);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS