#ifdef SSD1306OLED

#include "ssd1306.h"
#include "i2c.h"
#include <string.h>
#include "print.h"
#ifdef PROTOCOL_LUFA
#include "lufa.h"
#endif
#include "sendchar.h"
#include "timer.h"

struct CharacterMatrix display;

extern const unsigned char font[] PROGMEM;

#ifndef OLED_BLANK_CHAR
#define OLED_BLANK_CHAR ' '
#endif

#ifndef OLED_BITS_FILTER
#define OLED_BITS_FILTER
#endif

// Set this to 1 to help diagnose early startup problems
// when testing power-on with ble.  Turn it off otherwise,
// as the latency of printing most of the debug info messes
// with the matrix scan, causing keys to drop.
#define DEBUG_TO_SCREEN 0

//static uint16_t last_battery_update;
//static uint32_t vbat;
//#define BatteryUpdateInterval 10000 /* milliseconds */

// 'last_flush' is declared as uint16_t,
// so this must be less than 65535
#ifndef ScreenOffInterval
#define ScreenOffInterval 60000 /* milliseconds */
#endif

#if DEBUG_TO_SCREEN
static uint8_t displaying;
#endif
static uint16_t last_flush;

static bool force_dirty = true;

// Write command sequence.
// Returns true on success.
static inline bool _send_cmd1(uint8_t cmd) {
  bool res = false;

  if (i2c_start_write(SSD1306_ADDRESS)) {
    xprintf("failed to start write to %d\n", SSD1306_ADDRESS);
    goto done;
  }

  if (i2c_master_write(0x0 /* command byte follows */)) {
    print("failed to write control byte\n");

    goto done;
  }

  if (i2c_master_write(cmd)) {
    xprintf("failed to write command %d\n", cmd);
    goto done;
  }
  res = true;
done:
  i2c_master_stop();
  return res;
}

#define send_cmd1(c) if (!_send_cmd1(c)) {goto done;}
#define send_cmds(c) if (!_send_cmds(c,sizeof(c))) {goto done;}
#define cmd1(X) X
#define cmd2(X,Y) X,Y
#define cmd3(X,Y,Z) X,Y,Z

static bool _send_cmds(const uint8_t* p,uint8_t sz) {
  for(uint8_t i=sz;i;i--) {
    send_cmd1( pgm_read_byte(p++) );
  }
  return true;
done:
  return false;
}

#define SEND_CMDS(...) {static const uint8_t _cmds[] PROGMEM = { __VA_ARGS__,0 };send_cmds(_cmds);}

static void clear_display(void) {
  matrix_clear(&display);

  // Clear all of the display bits (there can be random noise
  // in the RAM on startup)
  SEND_CMDS(
    cmd3(PageAddr, 0, (DisplayHeight / 8) - 1),
    cmd3(ColumnAddr, 0, DisplayWidth - 1)
  );

  if (i2c_start_write(SSD1306_ADDRESS)) {
    goto done;
  }
  if (i2c_master_write(0x40)) {
    // Data mode
    goto done;
  }
  for (uint8_t row = MatrixRows;row; row--) {
    for (uint8_t col = DisplayWidth; col; col--) {
      i2c_master_write(0);
    }
  }

  display.dirty = false;

done:
  i2c_master_stop();
}

#if DEBUG_TO_SCREEN
#undef sendchar
static int8_t capture_sendchar(uint8_t c) {
  sendchar(c);
  iota_gfx_write_char(c);

  if (!displaying) {
    iota_gfx_flush();
  }
  return 0;
}
#endif

bool iota_gfx_init(bool rotate) {
  bool success = false;

  i2c_master_init();
  SEND_CMDS(
    cmd1(DisplayOff),
    cmd2(SetDisplayClockDiv, 0x80),
    cmd2(SetMultiPlex, DisplayHeight - 1),
    cmd2(SetDisplayOffset, 0),
    cmd1(SetStartLine | 0x0),
    cmd2(SetChargePump, 0x14 /* Enable */),
    cmd2(SetMemoryMode, 0 /* horizontal addressing */)
  );

  if(rotate){
    // the following Flip the display orientation 180 degrees
  SEND_CMDS(
    cmd1(SegRemap),
    cmd1(ComScanInc)
  );
  }else{
    // Flips the display orientation 0 degrees
  SEND_CMDS(
      cmd1(SegRemap | 0x1),
      cmd1(ComScanDec)
    );
  }

  SEND_CMDS(
#ifdef SSD1306_128X64
     cmd2(SetComPins, 0x12),
#else
     cmd2(SetComPins, 0x2),
#endif
    cmd2(SetContrast, 0x8f),
    cmd2(SetPreCharge, 0xf1),
    cmd2(SetVComDetect, 0x40),
    cmd1(DisplayAllOnResume),
    cmd1(NormalDisplay),
    cmd1(DeActivateScroll),
    cmd1(DisplayOn),

    cmd2(SetContrast, 0) // Dim
  );

  clear_display();

  success = true;

  iota_gfx_flush();

#if DEBUG_TO_SCREEN
  print_set_sendchar(capture_sendchar);
#endif

done:
  return success;
}

bool iota_gfx_off(void) {
  bool success = false;

  send_cmd1(DisplayOff);
  success = true;

done:
  return success;
}

bool iota_gfx_on(void) {
  bool success = false;

  send_cmd1(DisplayOn);
  success = true;

done:
  return success;
}

void matrix_write_char_inner(struct CharacterMatrix *matrix, uint8_t c) {
  *matrix->cursor = c;
  ++matrix->cursor;

  if (matrix->cursor - &matrix->display[0][0] == sizeof(matrix->display)) {
    // We went off the end; scroll the display upwards by one line
    memmove(&matrix->display[0], &matrix->display[1],
            MatrixCols * (MatrixRows - 1));
    matrix->cursor = &matrix->display[MatrixRows - 1][0];
    memset(matrix->cursor, OLED_BLANK_CHAR, MatrixCols);
  }
}

void matrix_write_char(struct CharacterMatrix *matrix, uint8_t c) {
  matrix->dirty = true;

  if (c == '\n') {
    // Clear to end of line from the cursor and then move to the
    // start of the next line
    uint8_t cursor_col = (matrix->cursor - &matrix->display[0][0]) % MatrixCols;

    while (cursor_col++ < MatrixCols) {
      matrix_write_char_inner(matrix, OLED_BLANK_CHAR);
    }
    return;
  }

  matrix_write_char_inner(matrix, c);
}

void iota_gfx_write_char(uint8_t c) {
  matrix_write_char(&display, c);
}

void matrix_write(struct CharacterMatrix *matrix, const char *data) {
  while (*data) {
    matrix_write_char(matrix, *data);
    ++data;
  }
}

void matrix_write_ln(struct CharacterMatrix *matrix, const char *data) {
  matrix_write(matrix, data);
  matrix_write(matrix, "\n");
}

void iota_gfx_write(const char *data) {
  matrix_write(&display, data);
}

void matrix_write_P(struct CharacterMatrix *matrix, const char *data) {
  while (true) {
    uint8_t c = pgm_read_byte(data);
    if (c == 0) {
      return;
    }
    matrix_write_char(matrix, c);
    ++data;
  }
}

void iota_gfx_write_P(const char *data) {
  matrix_write_P(&display, data);
}

void matrix_clear(struct CharacterMatrix *matrix) {
  memset(matrix->display, OLED_BLANK_CHAR, sizeof(matrix->display));
  matrix->cursor = &matrix->display[0][0];
  matrix->dirty = true;
}

void iota_gfx_clear_screen(void) {
  matrix_clear(&display);
}

void matrix_render(struct CharacterMatrix *matrix) {
  last_flush = timer_read();
  iota_gfx_on();
#if DEBUG_TO_SCREEN
  ++displaying;
#endif

  // Move to the home position
  SEND_CMDS(
    cmd3(PageAddr, 0, MatrixRows - 1),
    cmd3(ColumnAddr, 0, (MatrixCols * FontWidth) - 1)
  );

  if (i2c_start_write(SSD1306_ADDRESS)) {
    goto done;
  }
  if (i2c_master_write(0x40)) {
    // Data mode
    goto done;
  }

  for (uint8_t row = 0; row < MatrixRows; ++row) {
    for (uint8_t col = 0; col < MatrixCols; ++col) {
      const uint8_t *glyph = font + (matrix->display[row][col] * FontWidth);

      for (uint8_t glyphCol = 0; glyphCol < FontWidth; ++glyphCol) {
        uint8_t colBits = pgm_read_byte(glyph + glyphCol);
        i2c_master_write(colBits OLED_BITS_FILTER);
      }

      // 1 column of space between chars (it's not included in the glyph)
      //i2c_master_write(0);
    }
  }

  matrix->dirty = false;

done:
  i2c_master_stop();
#if DEBUG_TO_SCREEN
  --displaying;
#endif
}

void iota_gfx_flush(void) {
  matrix_render(&display);
}

__attribute__ ((weak))
void iota_gfx_task_user(void) {
}

void iota_gfx_task(void) {
  iota_gfx_task_user();

  if (display.dirty|| force_dirty) {
    iota_gfx_flush();
    force_dirty = false;
  }

  if (ScreenOffInterval !=0 && timer_elapsed(last_flush) > ScreenOffInterval) {
    iota_gfx_off();
  }
}

bool process_record_gfx(uint16_t keycode, keyrecord_t *record) {
  force_dirty = true;
  return true;
}

#endif
