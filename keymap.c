#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP(ESC,  1,    2,    3,    4,    5,    6,    7,    8,    9,    0,    MINS,  EQL,  INS, \
              TAB,  Q,    W,    E,    R,    T,    Y,    U,    I,    O,    P,    QUOT,  BSPC, \
           CAPS, GRV,  A,    S,    D,    F,    G,    H,    J,    K,    L,    SCLN,  LBRC, RBRC,  \
              LSFT, BSLS, Z,    X,    C,    V,    B,    N,    M,    COMM, DOT,  SLSH,  RSFT, \
           LCTL, LALT, LEFT, DOWN,       ENT,              SPC,        UP,   RGHT,  RALT, RCTL, NO)
};
const action_t PROGMEM fn_actions[] = {};
