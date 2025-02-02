// [OLED Configuration] ---------------------------------------------//

// Draw
    static const char PROGMEM skeeb_logo[] = {    
    0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
    0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
    0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,
     0x95,0x96,0x97,0x98,0x99,0x9a,0x9b,0xb5,0xb6,0xb7,0xb8,0xb9,0xba,0xbb,0xd5,0xd6,0xd7,0xd8,0xd9,0xda,0xdb,0};

    static const char PROGMEM oled_header[] = {    
    0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
    0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
     0xc0,0};
     
     static const char PROGMEM oled_layer_keylog_separator[] = {    
    0xc8,0xff,0};
               
     static const char PROGMEM oled_layer_line_end[] = {    
    0xd4,0};
     
     static const char PROGMEM oled_layer_keylog_bottom[] = {    
    0xc1,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc3,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc2,0};
     
     static const char PROGMEM oled_line_start[] = {    
    0xc0,0};
     
     static const char PROGMEM oled_mods_bottom[] = {    
    0xc1,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc2,0};
     
     static const char PROGMEM oled_footer[] = {    
    0xc4,0xc5,0xc5,0xc9,0xca,0xca,0xca,0xca,0xca,0xca,0xca,0xca,0xca,0xca,0xca,0xca,0xca,0xcb,0xc5,0xc5,0xc6,0};

void render_skeeb_logo(void) {
    static const char PROGMEM skeeb_logo[] = {
0x00, 0xc0, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 
0x07, 0x0f, 0x1f, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0x81, 0x81, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x19, 0x19, 0xff, 0xff, 0x01, 
0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x19, 0x19, 0x99, 0x99, 0x99, 
0x99, 0x99, 0x99, 0x01, 0x01, 0xff, 0xff, 0x81, 0x81, 0x7f, 0x7f, 0xff, 0xff, 0x7f, 0x7f, 0x81, 
0x81, 0xff, 0xff, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xf9, 0xf9, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x3f, 0x1f, 0x0f, 0x07, 
0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0xc0, 0x00, 
0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
0x0f, 0x0f, 0x0f, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x08, 0x08, 0x0f, 0x0f, 0x08, 
0x08, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x0f, 0x0f, 0x08, 0x08, 0x0f, 0x0f, 0x0f, 
0x0f, 0x0f, 0x0f, 0x08, 0x08, 0x0f, 0x0f, 0x0f, 0x0f, 0x0e, 0x0e, 0x09, 0x09, 0x0e, 0x0e, 0x0f, 
0x0f, 0x0f, 0x0f, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x0f, 0x0f, 0x0f, 
0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 
0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x20, 0x20, 0x10, 0x10, 0x10, 
0x10, 0x10, 0x20, 0x20, 0x40, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 
0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x00, 0xe0, 0x20, 0x20, 0xe0, 0x00, 0x00, 0x00, 
0x00, 0x00, 0xe0, 0x20, 0x20, 0xe0, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 
0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xe0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3f, 0x00, 0x00, 0xf9, 0x01, 0x01, 0xf9, 0x00, 0x00, 0xf8, 
0x00, 0x00, 0xf9, 0x01, 0x01, 0xf9, 0x00, 0x00, 0x3f, 0x20, 0x20, 0x20, 0x20, 0x20, 0xe0, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 
0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xff, 0x00, 0x00, 0xfc, 0x00, 0x00, 0xff, 0x01, 0x01, 0xf1, 0x10, 0x10, 0x1f, 0x00, 0x00, 0x3f, 
0x00, 0x00, 0x1f, 0x10, 0x10, 0xf3, 0x02, 0x02, 0xf2, 0x12, 0x12, 0x1e, 0x00, 0x00, 0xff, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 
0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x0f, 0x00, 0x00, 0x0f, 0x08, 0x08, 0x0f, 0x00, 0x00, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x0f, 
0x00, 0x00, 0x0f, 0x01, 0x01, 0x09, 0x08, 0x08, 0x09, 0x09, 0x09, 0x0f, 0x00, 0x00, 0x0f, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 
0x00, 0x03, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xc0, 0xe0, 
0xf0, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 
0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 
0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 
0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 
0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 
0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf0, 
0xe0, 0xc0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x03, 0x00,0
};
    oled_write_raw_P(skeeb_logo, sizeof(skeeb_logo));
}
     
// Mods Status
void render_mod_status(uint8_t modifiers) {
     oled_write_P(PSTR(" "), false);     
     oled_write_P(PSTR("-"), false);
    oled_write_P(PSTR("SHF"), (modifiers & MOD_MASK_SHIFT));
     oled_write_P(PSTR("-"), false);
    oled_write_P(PSTR("CTR"), (modifiers & MOD_MASK_CTRL));
     oled_write_P(PSTR("-"), false);
     oled_write_P(PSTR("WIN"), (modifiers & MOD_MASK_GUI));
     oled_write_P(PSTR("-"), false);
    oled_write_P(PSTR("ALT"), (modifiers & MOD_MASK_ALT));
    oled_write_P(PSTR("-"), false);
     oled_write_P(PSTR(" "), false);     
}

// Layer State
void render_layer_state(void){
     switch (get_highest_layer(layer_state)) {
          case 0: oled_write_P(PSTR(" QWERTY "), false); break;
          case 1: oled_write_P(PSTR(" MEDIA  "), false); break;
          case 2: oled_write_P(PSTR(" MOBA   "), false); break;
          case 3: oled_write_P(PSTR(" FPS    "), false); break;
          default: oled_write_P(PSTR("Undefined"), false); 
     }
}

// Keylock State               
void render_keylock_status(uint8_t led_usb_state) {
     oled_write_P(PSTR(" "), false);
     oled_write_P(led_usb_state & (1<<USB_LED_NUM_LOCK) ? PSTR("-NUML") : PSTR("-----"), false);
     oled_write_P(PSTR(" "), false);
     oled_write_P(led_usb_state & (1<<USB_LED_CAPS_LOCK) ? PSTR("-CAPS") : PSTR("-----"), false);
     oled_write_P(PSTR(" "), false);
     oled_write_P(led_usb_state & (1<<USB_LED_SCROLL_LOCK) ? PSTR("-SCRL") : PSTR("-----"), false);     
     oled_write_P(PSTR(" "), false);     
}

// Keylogger
#    define KEYLOGGER_LENGTH 8
static uint32_t oled_timer                       = 0;
static char     keylog_str[KEYLOGGER_LENGTH + 1] = {0};

static const char PROGMEM code_to_name[0xFF] = {
//   0    1    2    3    4    5    6    7    8    9    A    B    c    D    E    F
    182, ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',  // 0x
    'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '1', '2',  // 1x
    '3', '4', '5', '6', '7', '8', '9', '0',  20,  19,  17,  29,  22, '-', '=', '[',  // 2x
    ']','\\', '#', ';','\'', '`', ',', '.', '/', 188, 149, 150, 151, 152, 153, 154,  // 3x
    155, 156, 157, 158, 159, 181, 191, 190, ' ', ' ', 185, 183,  16, 186, 184,  26,  // 4x
     27,  25,  24, 189, '/', '*', '-', '+', ' ', '1', '2', '3', '4', '5', '6', '7',  // 5x
    '8', '9', '0', '.', ' ', 187, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',  // 6x
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',  // 7x
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',  // 8x
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',  // 9x
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 214, 215, 216, 217, 218, 219, 220, 221,  // Ax
    ' ', ' ', 213, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',  // Bx
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',  // Cx
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',  // Dx
    'C', 'S', 'A', 'W', ' ', 'S', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',  // Ex
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '        // Fx
};

void add_keylog(uint16_t keycode);

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        oled_timer = timer_read32();
        add_keylog(keycode);
    }
    return true;
}

void add_keylog(uint16_t keycode) {
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) || (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX) || (keycode >= QK_MODS && keycode <= QK_MODS_MAX)) {
        keycode = keycode & 0xFF;
    } else if (keycode > 0xFF) {
        keycode = 0;
    }

    for (uint8_t i = (KEYLOGGER_LENGTH - 1); i > 0; --i) {
        keylog_str[i] = keylog_str[i - 1];
    }

    if (keycode < (sizeof(code_to_name) / sizeof(char))) {
        keylog_str[0] = pgm_read_byte(&code_to_name[keycode]);
    }
}

void render_keylogger_status(void) {
    oled_write(keylog_str, false);
}

// [OLED Init] ------------------------------------------------------//

// Rotate Screen
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
     return OLED_ROTATION_180;
     }

// {OLED Task} ------------------------------------------------------//
void oled_task_user(void) {

// MASTER SIDE
if (is_keyboard_master()) {
     oled_write_P(oled_header, false);
     render_layer_state();
     oled_write_P(oled_layer_keylog_separator, false);
     render_keylogger_status();     
     oled_set_cursor(20, 2);
     oled_write_P(oled_layer_line_end, false);
     oled_write_P(oled_layer_keylog_bottom, false);
     oled_write_P(oled_line_start, false);
     render_keylock_status(host_keyboard_leds());
     oled_write_P(oled_layer_line_end, false);     
     oled_write_P(oled_mods_bottom, false);
     oled_write_P(oled_line_start, false);
     render_mod_status(get_mods() | get_oneshot_mods()); 
     oled_write_P(oled_layer_line_end, false);
     oled_write_P(oled_footer, false);     
     }
     
// SLAVE SIDE
else {
     render_skeeb_logo();
     } 
}

