#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP(ESC,  1,    2,    3,    4,    5,    6,    7,    8,    9,    0,    MINS,  EQL,  INS, \
              TAB,  Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,    QUOT,  BSPC, \
           CAPS, GRV,  A,    S,    D,    F,    G,    H,    J,    K,    L,    SCLN,  LBRC, RBRC,  \
              LSFT, BSLS, Z,    X,    C,    V,    B,    N,    M,    COMM, DOT,  SLSH,  RSFT, \
           LCTL, LEFT, DOWN, LALT,       FN0,              FN1,        RALT, UP,   RGHT,  RCTL),
    /* 1: overlay for missing keys */
    KEYMAP(TRNS,    F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,  F10, TRNS, TRNS, TRNS, \
              TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  F15, TRNS,  F16, TRNS, TRNS, DEL, \
           TRNS, TRNS,  F13,  F14, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  \
              TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS, HOME, PGDN, TRNS,      TRNS,             TRNS, TRNS,  PGUP,    END,     TRNS)
};
const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(1, KC_ENT),
    [1] = ACTION_LAYER_TAP_KEY(1, KC_SPACE),
};
