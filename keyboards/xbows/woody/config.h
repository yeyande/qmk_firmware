#pragma once
#include "config_common.h"
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x1224
#define DEVICE_VER      0x0001
#define MANUFACTURER    X-BOWS
#define PRODUCT         WOO-DY

#define MATRIX_ROWS 5
#define MATRIX_COLS 15
#define MATRIX_ROW_PINS {B3, B2, B1, B0, B5 }
#define MATRIX_COL_PINS {B6, C6, C7, F4, F5, F6, F7, B7, D2, D3, D5, D4, D6, D7, B4 }
#define DIODE_DIRECTION COL2ROW
#ifdef RGB_MATRIX_ENABLE
#define RGB_MATRIX_LED_PROCESS_LIMIT 4
#define RGB_MATRIX_LED_FLUSH_LIMIT 26
#define DEBOUNCE 3
#define RGB_DISABLE_AFTER_TIMEOUT 0 // number of ticks to wait until disabling effects
#define RGB_DISABLE_WHEN_USB_SUSPENDED true // turn off effects when suspended
#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200
#define DISABLE_RGB_MATRIX_GRADIENT_UP_DOWN     
#define DISABLE_RGB_MATRIX_BAND_SAT
#define DISABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#define DISABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#define DISABLE_RGB_MATRIX_SPLASH
#define DISABLE_RGB_MATRIX_MULTISPLASH
#define DISABLE_RGB_MATRIX_SOLID_SPLASH
#define DISABLE_RGB_MATRIX_SOLID_MULTISPLASH
#define DISABLE_RGB_MATRIX_DIGITAL_RAIN
#define DRIVER_ADDR_1 0b1110100
#define DRIVER_ADDR_2 0b1110110
#define DRIVER_COUNT 2
#define DRIVER_1_LED_TOTAL 35
#define DRIVER_2_LED_TOTAL 32
#define DRIVER_LED_TOTAL (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)
#endif