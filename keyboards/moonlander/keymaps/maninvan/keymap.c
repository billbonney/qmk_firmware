#include QMK_KEYBOARD_H
#include "version.h"
// #include "keymap_german.h"
// #include "keymap_nordic.h"
// #include "keymap_french.h"
// #include "keymap_spanish.h"
// #include "keymap_hungarian.h"
// #include "keymap_swedish.h"
// #include "keymap_br_abnt2.h"
// #include "keymap_canadian_multilingual.h"
// #include "keymap_german_ch.h"
// #include "keymap_jp.h"
// #include "keymap_korean.h"
// #include "keymap_bepo.h"
// #include "keymap_italian.h"
// #include "keymap_slovenian.h"
// #include "keymap_lithuanian_azerty.h"
// #include "keymap_danish.h"
// #include "keymap_norwegian.h"
// #include "keymap_portuguese.h"
// #include "keymap_contributions.h"
// #include "keymap_czech.h"
// #include "keymap_romanian.h"
// #include "keymap_russian.h"
// #include "keymap_uk.h"
// #include "keymap_estonian.h"
// #include "keymap_belgian.h"
// #include "keymap_us_international.h"
// #include "keymap_croatian.h"
// #include "keymap_turkish_q.h"
// #include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_235_246,
  HSV_69_210_255,
  HSV_133_255_255,
  ST_MACRO_0,
};


enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
  DANCE_13,
  DANCE_14,
  DANCE_15,
  DANCE_16,
  DANCE_17,
  DANCE_18,
  DANCE_19,
  DANCE_20,
  DANCE_21,
  DANCE_22,
  DANCE_23,
  DANCE_24,
  DANCE_25,
  DANCE_26,
  DANCE_27,
  DANCE_28,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,      
    MT(MOD_LCTL, KC_BSPACE),LT(1,KC_A),     MT(MOD_LCTL, KC_S),LT(6,KC_D),     LT(2,KC_F),     LT(5,KC_G),     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, LT(4,KC_H),     KC_J,           LT(7,KC_K),     MT(MOD_RCTL, KC_L),LT(3,KC_SCOLON),KC_QUOTE,       
    KC_LSHIFT,      MT(MOD_LCTL, KC_Z),KC_X,           MT(MOD_LALT, KC_C),MT(MOD_LGUI, KC_V),KC_B,                                           KC_N,           MT(MOD_RGUI, KC_M),MT(MOD_RALT, KC_COMMA),KC_DOT,         MT(MOD_RCTL, KC_SLASH),MT(MOD_RSFT, KC_EQUAL),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPACE,      MT(MOD_LGUI, KC_ESCAPE),KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, MT(MOD_RGUI, KC_TAB),KC_GRAVE,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TD(DANCE_0),    TD(DANCE_1),    TD(DANCE_2),    TD(DANCE_3),    KC_MINUS,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, TD(DANCE_4),    TD(DANCE_5),    TD(DANCE_6),    TD(DANCE_7),    KC_PLUS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TD(DANCE_8),    TD(DANCE_9),    TD(DANCE_10),   KC_EQUAL,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_11),   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_MINUS,       KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_UNDS
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_BSPACE,      KC_DELETE,      KC_NO,          KC_BSLASH,      KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_MINUS,       ST_MACRO_0,     
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_AMPR,        KC_ASTR,        KC_BSLASH,      KC_TRANSPARENT, KC_UNDS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TAB,         KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_BSPACE,      KC_DELETE,      KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,       KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRACKET,    KC_RBRACKET,    KC_TILD,                                        KC_AMPR,        KC_ASTR,        KC_BSLASH,      KC_MINUS,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    TD(DANCE_12),   KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_13)
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN2,     KC_MS_UP,       KC_MS_BTN1,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, WEBUSB_PAIR,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_14),   TD(DANCE_15),   TD(DANCE_16),   TD(DANCE_17),   KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, CAPS_WORD,      KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_18),   TD(DANCE_19),   TD(DANCE_20),   TD(DANCE_21),   KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TD(DANCE_22),   TD(DANCE_23),   TD(DANCE_24),   TD(DANCE_25),   KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_26),   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_TRANSPARENT, LGUI(LSFT(KC_4)),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, TD(DANCE_27),   KC_MEDIA_PLAY_PAUSE,TD(DANCE_28),   KC_TRANSPARENT, LGUI(LSFT(KC_5)),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_ESCAPE,      HSV_0_235_246,  RGB_SPI,        RGB_HUI,        RGB_VAI,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TAB,         HSV_69_210_255, RGB_SPD,        RGB_HUD,        RGB_VAD,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, HSV_133_255_255,RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MOD,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_ESCAPE
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {69,210,255}, {69,210,255}, {69,210,255}, {0,0,0}, {0,0,0}, {0,235,246}, {0,235,246}, {0,235,246}, {0,0,0}, {0,0,0}, {0,235,246}, {0,235,246}, {0,235,246}, {0,235,246}, {0,0,0}, {0,235,246}, {0,235,246}, {0,235,246}, {0,0,0}, {0,0,0}, {133,255,255}, {133,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {133,255,255}, {133,255,255}, {133,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {69,210,255}, {133,255,255}, {0,0,0}, {0,0,0}, {0,235,246}, {69,210,255}, {133,255,255}, {0,0,0}, {0,0,0}, {0,235,246}, {69,210,255}, {133,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {69,210,255}, {133,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {69,218,204}, {69,218,204}, {69,218,204}, {0,0,0}, {0,0,0}, {69,218,204}, {69,218,204}, {69,218,204}, {0,0,0}, {0,0,0}, {69,218,204}, {69,218,204}, {69,218,204}, {0,0,0}, {0,0,0}, {69,218,204}, {69,218,204}, {69,218,204}, {0,0,0}, {0,0,0}, {69,218,204}, {69,218,204}, {69,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {133,255,255}, {69,210,255}, {0,0,0}, {0,0,0}, {0,235,246}, {133,255,255}, {69,210,255}, {0,0,0}, {0,0,0}, {0,235,246}, {133,255,255}, {69,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {133,255,255}, {69,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {10,225,255}, {32,176,255}, {0,0,0}, {0,0,0}, {0,0,0}, {32,176,255}, {32,176,255}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {32,176,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {216,152,244}, {216,152,244}, {216,152,244}, {0,0,0}, {0,0,0}, {216,152,244}, {216,152,244}, {216,152,244}, {0,0,0}, {0,0,0}, {216,152,244}, {216,152,244}, {216,152,244}, {216,152,244}, {0,0,0}, {216,152,244}, {216,152,244}, {216,152,244}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {42,255,255}, {42,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {69,210,255}, {0,235,246}, {0,0,0}, {0,0,0}, {0,0,0}, {69,210,255}, {133,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {216,152,244}, {0,235,246}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {74,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {23,244,245}, {0,0,0}, {0,0,0}, {219,255,255}, {219,255,255}, {0,245,245}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)));

    }
    break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_235_246:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,235,246);
      }
      return false;
    case HSV_69_210_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(69,210,255);
      }
      return false;
    case HSV_133_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(133,255,255);
      }
      return false;
  }
  return true;
}

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[29];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PGUP);
        tap_code16(KC_PGUP);
        tap_code16(KC_PGUP);
    }
    if(state->count > 3) {
        tap_code16(KC_PGUP);
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_PGUP); break;
        case DOUBLE_TAP: register_code16(KC_HOME); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PGUP); register_code16(KC_PGUP);
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_PGUP); break;
        case DOUBLE_TAP: unregister_code16(KC_HOME); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PGUP); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_7);
        tap_code16(KC_7);
        tap_code16(KC_7);
    }
    if(state->count > 3) {
        tap_code16(KC_7);
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_7); break;
        case DOUBLE_TAP: register_code16(KC_7); register_code16(KC_7); break;
        case DOUBLE_HOLD: register_code16(KC_AMPR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_7); register_code16(KC_7);
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_7); break;
        case DOUBLE_TAP: unregister_code16(KC_7); break;
        case DOUBLE_HOLD: unregister_code16(KC_AMPR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_7); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(qk_tap_dance_state_t *state, void *user_data);
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_8);
        tap_code16(KC_8);
        tap_code16(KC_8);
    }
    if(state->count > 3) {
        tap_code16(KC_8);
    }
}

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_8); break;
        case DOUBLE_TAP: register_code16(KC_8); register_code16(KC_8); break;
        case DOUBLE_HOLD: register_code16(KC_ASTR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_8); register_code16(KC_8);
    }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_8); break;
        case DOUBLE_TAP: unregister_code16(KC_8); break;
        case DOUBLE_HOLD: unregister_code16(KC_ASTR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_8); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(qk_tap_dance_state_t *state, void *user_data);
void dance_3_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_3_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_3(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_9);
        tap_code16(KC_9);
        tap_code16(KC_9);
    }
    if(state->count > 3) {
        tap_code16(KC_9);
    }
}

void dance_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_9); break;
        case DOUBLE_TAP: register_code16(KC_9); register_code16(KC_9); break;
        case DOUBLE_HOLD: register_code16(KC_LPRN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_9); register_code16(KC_9);
    }
}

void dance_3_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_9); break;
        case DOUBLE_TAP: unregister_code16(KC_9); break;
        case DOUBLE_HOLD: unregister_code16(KC_LPRN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_9); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(qk_tap_dance_state_t *state, void *user_data);
void dance_4_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_4_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_4(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PGDOWN);
        tap_code16(KC_PGDOWN);
        tap_code16(KC_PGDOWN);
    }
    if(state->count > 3) {
        tap_code16(KC_PGDOWN);
    }
}

void dance_4_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_PGDOWN); break;
        case DOUBLE_TAP: register_code16(KC_END); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PGDOWN); register_code16(KC_PGDOWN);
    }
}

void dance_4_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_PGDOWN); break;
        case DOUBLE_TAP: unregister_code16(KC_END); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PGDOWN); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(qk_tap_dance_state_t *state, void *user_data);
void dance_5_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_5_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_5(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_4);
        tap_code16(KC_4);
        tap_code16(KC_4);
    }
    if(state->count > 3) {
        tap_code16(KC_4);
    }
}

void dance_5_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_4); break;
        case DOUBLE_TAP: register_code16(KC_4); register_code16(KC_4); break;
        case DOUBLE_HOLD: register_code16(KC_DLR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_4); register_code16(KC_4);
    }
}

void dance_5_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_4); break;
        case DOUBLE_TAP: unregister_code16(KC_4); break;
        case DOUBLE_HOLD: unregister_code16(KC_DLR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_4); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(qk_tap_dance_state_t *state, void *user_data);
void dance_6_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_6_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_6(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_5);
        tap_code16(KC_5);
        tap_code16(KC_5);
    }
    if(state->count > 3) {
        tap_code16(KC_5);
    }
}

void dance_6_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_5); break;
        case DOUBLE_TAP: register_code16(KC_5); register_code16(KC_5); break;
        case DOUBLE_HOLD: register_code16(KC_PERC); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_5); register_code16(KC_5);
    }
}

void dance_6_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_5); break;
        case DOUBLE_TAP: unregister_code16(KC_5); break;
        case DOUBLE_HOLD: unregister_code16(KC_PERC); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_5); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(qk_tap_dance_state_t *state, void *user_data);
void dance_7_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_7_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_7(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_6);
        tap_code16(KC_6);
        tap_code16(KC_6);
    }
    if(state->count > 3) {
        tap_code16(KC_6);
    }
}

void dance_7_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_6); break;
        case DOUBLE_TAP: register_code16(KC_6); register_code16(KC_6); break;
        case DOUBLE_HOLD: register_code16(KC_CIRC); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_6); register_code16(KC_6);
    }
}

void dance_7_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_6); break;
        case DOUBLE_TAP: unregister_code16(KC_6); break;
        case DOUBLE_HOLD: unregister_code16(KC_CIRC); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_6); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(qk_tap_dance_state_t *state, void *user_data);
void dance_8_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_8_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_8(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_1);
        tap_code16(KC_1);
        tap_code16(KC_1);
    }
    if(state->count > 3) {
        tap_code16(KC_1);
    }
}

void dance_8_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(KC_1); break;
        case DOUBLE_TAP: register_code16(KC_1); register_code16(KC_1); break;
        case DOUBLE_HOLD: register_code16(KC_EXLM); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_1); register_code16(KC_1);
    }
}

void dance_8_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(KC_1); break;
        case DOUBLE_TAP: unregister_code16(KC_1); break;
        case DOUBLE_HOLD: unregister_code16(KC_EXLM); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_1); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(qk_tap_dance_state_t *state, void *user_data);
void dance_9_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_9_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_9(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_2);
        tap_code16(KC_2);
        tap_code16(KC_2);
    }
    if(state->count > 3) {
        tap_code16(KC_2);
    }
}

void dance_9_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(KC_2); break;
        case DOUBLE_TAP: register_code16(KC_2); register_code16(KC_2); break;
        case DOUBLE_HOLD: register_code16(KC_AT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_2); register_code16(KC_2);
    }
}

void dance_9_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(KC_2); break;
        case DOUBLE_TAP: unregister_code16(KC_2); break;
        case DOUBLE_HOLD: unregister_code16(KC_AT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_2); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(qk_tap_dance_state_t *state, void *user_data);
void dance_10_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_10_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_10(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_3);
        tap_code16(KC_3);
        tap_code16(KC_3);
    }
    if(state->count > 3) {
        tap_code16(KC_3);
    }
}

void dance_10_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(KC_3); break;
        case DOUBLE_TAP: register_code16(KC_3); register_code16(KC_3); break;
        case DOUBLE_HOLD: register_code16(KC_HASH); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_3); register_code16(KC_3);
    }
}

void dance_10_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(KC_3); break;
        case DOUBLE_TAP: unregister_code16(KC_3); break;
        case DOUBLE_HOLD: unregister_code16(KC_HASH); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_3); break;
    }
    dance_state[10].step = 0;
}
void on_dance_11(qk_tap_dance_state_t *state, void *user_data);
void dance_11_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_11_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_11(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_0);
        tap_code16(KC_0);
        tap_code16(KC_0);
    }
    if(state->count > 3) {
        tap_code16(KC_0);
    }
}

void dance_11_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(KC_0); break;
        case DOUBLE_TAP: register_code16(KC_0); register_code16(KC_0); break;
        case DOUBLE_HOLD: register_code16(KC_RPRN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_0); register_code16(KC_0);
    }
}

void dance_11_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(KC_0); break;
        case DOUBLE_TAP: unregister_code16(KC_0); break;
        case DOUBLE_HOLD: unregister_code16(KC_RPRN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_0); break;
    }
    dance_state[11].step = 0;
}
void on_dance_12(qk_tap_dance_state_t *state, void *user_data);
void dance_12_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_12_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_12(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_QUOTE);
        tap_code16(KC_QUOTE);
        tap_code16(KC_QUOTE);
    }
    if(state->count > 3) {
        tap_code16(KC_QUOTE);
    }
}

void dance_12_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(KC_QUOTE); break;
        case DOUBLE_TAP: register_code16(KC_DQUO); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_QUOTE); register_code16(KC_QUOTE);
    }
}

void dance_12_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(KC_QUOTE); break;
        case DOUBLE_TAP: unregister_code16(KC_DQUO); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_QUOTE); break;
    }
    dance_state[12].step = 0;
}
void on_dance_13(qk_tap_dance_state_t *state, void *user_data);
void dance_13_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_13_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_13(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DQUO);
        tap_code16(KC_DQUO);
        tap_code16(KC_DQUO);
    }
    if(state->count > 3) {
        tap_code16(KC_DQUO);
    }
}

void dance_13_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: register_code16(KC_DQUO); break;
        case DOUBLE_TAP: register_code16(KC_QUOTE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DQUO); register_code16(KC_DQUO);
    }
}

void dance_13_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP: unregister_code16(KC_DQUO); break;
        case DOUBLE_TAP: unregister_code16(KC_QUOTE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DQUO); break;
    }
    dance_state[13].step = 0;
}
void on_dance_14(qk_tap_dance_state_t *state, void *user_data);
void dance_14_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_14_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_14(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F7);
        tap_code16(KC_F7);
        tap_code16(KC_F7);
    }
    if(state->count > 3) {
        tap_code16(KC_F7);
    }
}

void dance_14_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: register_code16(KC_F7); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_F7)); break;
        case DOUBLE_TAP: register_code16(KC_F7); register_code16(KC_F7); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F7); register_code16(KC_F7);
    }
}

void dance_14_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP: unregister_code16(KC_F7); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_F7)); break;
        case DOUBLE_TAP: unregister_code16(KC_F7); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F7); break;
    }
    dance_state[14].step = 0;
}
void on_dance_15(qk_tap_dance_state_t *state, void *user_data);
void dance_15_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_15_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_15(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F8);
        tap_code16(KC_F8);
        tap_code16(KC_F8);
    }
    if(state->count > 3) {
        tap_code16(KC_F8);
    }
}

void dance_15_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[15].step = dance_step(state);
    switch (dance_state[15].step) {
        case SINGLE_TAP: register_code16(KC_F8); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_F8)); break;
        case DOUBLE_TAP: register_code16(KC_F8); register_code16(KC_F8); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F8); register_code16(KC_F8);
    }
}

void dance_15_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[15].step) {
        case SINGLE_TAP: unregister_code16(KC_F8); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_F8)); break;
        case DOUBLE_TAP: unregister_code16(KC_F8); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F8); break;
    }
    dance_state[15].step = 0;
}
void on_dance_16(qk_tap_dance_state_t *state, void *user_data);
void dance_16_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_16_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_16(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F9);
        tap_code16(KC_F9);
        tap_code16(KC_F9);
    }
    if(state->count > 3) {
        tap_code16(KC_F9);
    }
}

void dance_16_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[16].step = dance_step(state);
    switch (dance_state[16].step) {
        case SINGLE_TAP: register_code16(KC_F9); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_F9)); break;
        case DOUBLE_TAP: register_code16(KC_F9); register_code16(KC_F9); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F9); register_code16(KC_F9);
    }
}

void dance_16_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[16].step) {
        case SINGLE_TAP: unregister_code16(KC_F9); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_F9)); break;
        case DOUBLE_TAP: unregister_code16(KC_F9); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F9); break;
    }
    dance_state[16].step = 0;
}
void on_dance_17(qk_tap_dance_state_t *state, void *user_data);
void dance_17_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_17_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_17(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F10);
        tap_code16(KC_F10);
        tap_code16(KC_F10);
    }
    if(state->count > 3) {
        tap_code16(KC_F10);
    }
}

void dance_17_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[17].step = dance_step(state);
    switch (dance_state[17].step) {
        case SINGLE_TAP: register_code16(KC_F10); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_F10)); break;
        case DOUBLE_TAP: register_code16(KC_F10); register_code16(KC_F10); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F10); register_code16(KC_F10);
    }
}

void dance_17_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[17].step) {
        case SINGLE_TAP: unregister_code16(KC_F10); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_F10)); break;
        case DOUBLE_TAP: unregister_code16(KC_F10); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F10); break;
    }
    dance_state[17].step = 0;
}
void on_dance_18(qk_tap_dance_state_t *state, void *user_data);
void dance_18_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_18_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_18(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F4);
        tap_code16(KC_F4);
        tap_code16(KC_F4);
    }
    if(state->count > 3) {
        tap_code16(KC_F4);
    }
}

void dance_18_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[18].step = dance_step(state);
    switch (dance_state[18].step) {
        case SINGLE_TAP: register_code16(KC_F4); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_F4)); break;
        case DOUBLE_TAP: register_code16(KC_F4); register_code16(KC_F4); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F4); register_code16(KC_F4);
    }
}

void dance_18_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[18].step) {
        case SINGLE_TAP: unregister_code16(KC_F4); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_F4)); break;
        case DOUBLE_TAP: unregister_code16(KC_F4); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F4); break;
    }
    dance_state[18].step = 0;
}
void on_dance_19(qk_tap_dance_state_t *state, void *user_data);
void dance_19_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_19_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_19(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F5);
        tap_code16(KC_F5);
        tap_code16(KC_F5);
    }
    if(state->count > 3) {
        tap_code16(KC_F5);
    }
}

void dance_19_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[19].step = dance_step(state);
    switch (dance_state[19].step) {
        case SINGLE_TAP: register_code16(KC_F5); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_F5)); break;
        case DOUBLE_TAP: register_code16(KC_F5); register_code16(KC_F5); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F5); register_code16(KC_F5);
    }
}

void dance_19_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[19].step) {
        case SINGLE_TAP: unregister_code16(KC_F5); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_F5)); break;
        case DOUBLE_TAP: unregister_code16(KC_F5); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F5); break;
    }
    dance_state[19].step = 0;
}
void on_dance_20(qk_tap_dance_state_t *state, void *user_data);
void dance_20_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_20_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_20(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F6);
        tap_code16(KC_F6);
        tap_code16(KC_F6);
    }
    if(state->count > 3) {
        tap_code16(KC_F6);
    }
}

void dance_20_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[20].step = dance_step(state);
    switch (dance_state[20].step) {
        case SINGLE_TAP: register_code16(KC_F6); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_F6)); break;
        case DOUBLE_TAP: register_code16(KC_F6); register_code16(KC_F6); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F6); register_code16(KC_F6);
    }
}

void dance_20_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[20].step) {
        case SINGLE_TAP: unregister_code16(KC_F6); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_F6)); break;
        case DOUBLE_TAP: unregister_code16(KC_F6); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F6); break;
    }
    dance_state[20].step = 0;
}
void on_dance_21(qk_tap_dance_state_t *state, void *user_data);
void dance_21_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_21_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_21(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F11);
        tap_code16(KC_F11);
        tap_code16(KC_F11);
    }
    if(state->count > 3) {
        tap_code16(KC_F11);
    }
}

void dance_21_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[21].step = dance_step(state);
    switch (dance_state[21].step) {
        case SINGLE_TAP: register_code16(KC_F11); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_F11)); break;
        case DOUBLE_TAP: register_code16(KC_F11); register_code16(KC_F11); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F11); register_code16(KC_F11);
    }
}

void dance_21_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[21].step) {
        case SINGLE_TAP: unregister_code16(KC_F11); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_F11)); break;
        case DOUBLE_TAP: unregister_code16(KC_F11); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F11); break;
    }
    dance_state[21].step = 0;
}
void on_dance_22(qk_tap_dance_state_t *state, void *user_data);
void dance_22_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_22_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_22(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F1);
        tap_code16(KC_F1);
        tap_code16(KC_F1);
    }
    if(state->count > 3) {
        tap_code16(KC_F1);
    }
}

void dance_22_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[22].step = dance_step(state);
    switch (dance_state[22].step) {
        case SINGLE_TAP: register_code16(KC_F1); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_F1)); break;
        case DOUBLE_TAP: register_code16(KC_F1); register_code16(KC_F1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F1); register_code16(KC_F1);
    }
}

void dance_22_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[22].step) {
        case SINGLE_TAP: unregister_code16(KC_F1); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_F1)); break;
        case DOUBLE_TAP: unregister_code16(KC_F1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F1); break;
    }
    dance_state[22].step = 0;
}
void on_dance_23(qk_tap_dance_state_t *state, void *user_data);
void dance_23_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_23_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_23(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F2);
        tap_code16(KC_F2);
        tap_code16(KC_F2);
    }
    if(state->count > 3) {
        tap_code16(KC_F2);
    }
}

void dance_23_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[23].step = dance_step(state);
    switch (dance_state[23].step) {
        case SINGLE_TAP: register_code16(KC_F2); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_F2)); break;
        case DOUBLE_TAP: register_code16(KC_F2); register_code16(KC_F2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F2); register_code16(KC_F2);
    }
}

void dance_23_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[23].step) {
        case SINGLE_TAP: unregister_code16(KC_F2); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_F2)); break;
        case DOUBLE_TAP: unregister_code16(KC_F2); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F2); break;
    }
    dance_state[23].step = 0;
}
void on_dance_24(qk_tap_dance_state_t *state, void *user_data);
void dance_24_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_24_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_24(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F3);
        tap_code16(KC_F3);
        tap_code16(KC_F3);
    }
    if(state->count > 3) {
        tap_code16(KC_F3);
    }
}

void dance_24_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[24].step = dance_step(state);
    switch (dance_state[24].step) {
        case SINGLE_TAP: register_code16(KC_F3); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_F3)); break;
        case DOUBLE_TAP: register_code16(KC_F3); register_code16(KC_F3); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F3); register_code16(KC_F3);
    }
}

void dance_24_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[24].step) {
        case SINGLE_TAP: unregister_code16(KC_F3); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_F3)); break;
        case DOUBLE_TAP: unregister_code16(KC_F3); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F3); break;
    }
    dance_state[24].step = 0;
}
void on_dance_25(qk_tap_dance_state_t *state, void *user_data);
void dance_25_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_25_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_25(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F12);
        tap_code16(KC_F12);
        tap_code16(KC_F12);
    }
    if(state->count > 3) {
        tap_code16(KC_F12);
    }
}

void dance_25_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[25].step = dance_step(state);
    switch (dance_state[25].step) {
        case SINGLE_TAP: register_code16(KC_F12); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_F12)); break;
        case DOUBLE_TAP: register_code16(KC_F12); register_code16(KC_F12); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F12); register_code16(KC_F12);
    }
}

void dance_25_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[25].step) {
        case SINGLE_TAP: unregister_code16(KC_F12); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_F12)); break;
        case DOUBLE_TAP: unregister_code16(KC_F12); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F12); break;
    }
    dance_state[25].step = 0;
}
void on_dance_26(qk_tap_dance_state_t *state, void *user_data);
void dance_26_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_26_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_26(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F10);
        tap_code16(KC_F10);
        tap_code16(KC_F10);
    }
    if(state->count > 3) {
        tap_code16(KC_F10);
    }
}

void dance_26_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[26].step = dance_step(state);
    switch (dance_state[26].step) {
        case SINGLE_TAP: register_code16(KC_F10); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_F10)); break;
        case DOUBLE_TAP: register_code16(KC_F10); register_code16(KC_F10); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F10); register_code16(KC_F10);
    }
}

void dance_26_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[26].step) {
        case SINGLE_TAP: unregister_code16(KC_F10); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_F10)); break;
        case DOUBLE_TAP: unregister_code16(KC_F10); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F10); break;
    }
    dance_state[26].step = 0;
}
void on_dance_27(qk_tap_dance_state_t *state, void *user_data);
void dance_27_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_27_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_27(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MEDIA_PREV_TRACK);
        tap_code16(KC_MEDIA_PREV_TRACK);
        tap_code16(KC_MEDIA_PREV_TRACK);
    }
    if(state->count > 3) {
        tap_code16(KC_MEDIA_PREV_TRACK);
    }
}

void dance_27_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[27].step = dance_step(state);
    switch (dance_state[27].step) {
        case SINGLE_TAP: register_code16(KC_MEDIA_PREV_TRACK); break;
        case SINGLE_HOLD: register_code16(KC_MEDIA_REWIND); break;
        case DOUBLE_TAP: register_code16(KC_MEDIA_PREV_TRACK); register_code16(KC_MEDIA_PREV_TRACK); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MEDIA_PREV_TRACK); register_code16(KC_MEDIA_PREV_TRACK);
    }
}

void dance_27_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[27].step) {
        case SINGLE_TAP: unregister_code16(KC_MEDIA_PREV_TRACK); break;
        case SINGLE_HOLD: unregister_code16(KC_MEDIA_REWIND); break;
        case DOUBLE_TAP: unregister_code16(KC_MEDIA_PREV_TRACK); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MEDIA_PREV_TRACK); break;
    }
    dance_state[27].step = 0;
}
void on_dance_28(qk_tap_dance_state_t *state, void *user_data);
void dance_28_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_28_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_28(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MEDIA_NEXT_TRACK);
        tap_code16(KC_MEDIA_NEXT_TRACK);
        tap_code16(KC_MEDIA_NEXT_TRACK);
    }
    if(state->count > 3) {
        tap_code16(KC_MEDIA_NEXT_TRACK);
    }
}

void dance_28_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[28].step = dance_step(state);
    switch (dance_state[28].step) {
        case SINGLE_TAP: register_code16(KC_MEDIA_NEXT_TRACK); break;
        case SINGLE_HOLD: register_code16(KC_MEDIA_FAST_FORWARD); break;
        case DOUBLE_TAP: register_code16(KC_MEDIA_NEXT_TRACK); register_code16(KC_MEDIA_NEXT_TRACK); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MEDIA_NEXT_TRACK); register_code16(KC_MEDIA_NEXT_TRACK);
    }
}

void dance_28_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[28].step) {
        case SINGLE_TAP: unregister_code16(KC_MEDIA_NEXT_TRACK); break;
        case SINGLE_HOLD: unregister_code16(KC_MEDIA_FAST_FORWARD); break;
        case DOUBLE_TAP: unregister_code16(KC_MEDIA_NEXT_TRACK); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MEDIA_NEXT_TRACK); break;
    }
    dance_state[28].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_11, dance_11_finished, dance_11_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_12, dance_12_finished, dance_12_reset),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
        [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_14, dance_14_finished, dance_14_reset),
        [DANCE_15] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_15, dance_15_finished, dance_15_reset),
        [DANCE_16] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_16, dance_16_finished, dance_16_reset),
        [DANCE_17] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_17, dance_17_finished, dance_17_reset),
        [DANCE_18] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_18, dance_18_finished, dance_18_reset),
        [DANCE_19] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_19, dance_19_finished, dance_19_reset),
        [DANCE_20] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_20, dance_20_finished, dance_20_reset),
        [DANCE_21] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_21, dance_21_finished, dance_21_reset),
        [DANCE_22] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_22, dance_22_finished, dance_22_reset),
        [DANCE_23] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_23, dance_23_finished, dance_23_reset),
        [DANCE_24] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_24, dance_24_finished, dance_24_reset),
        [DANCE_25] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_25, dance_25_finished, dance_25_reset),
        [DANCE_26] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_26, dance_26_finished, dance_26_reset),
        [DANCE_27] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_27, dance_27_finished, dance_27_reset),
        [DANCE_28] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_28, dance_28_finished, dance_28_reset),
};

