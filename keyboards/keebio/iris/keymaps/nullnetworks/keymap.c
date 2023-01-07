#include QMK_KEYBOARD_H
#include "keymap_combos.h"

#define _QWE 0      // Qwerty
#define _HAG 1     // Hands Down Silver https://sites.google.com/alanreiser.com/handsdown/home/hands-down-neu#h.auqlrmy0sjjb
#define _LSM 2     // Left side modifier held
#define _RSM 3     // Right side modifier held
#define _NUM 4     // Number pad emulation with shift support



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWE] = LAYOUT(
        //┌────────┬────────┬────────┬────────┬────────┬────────┐                                   ┌────────┬────────┬────────┬────────┬────────┬────────┐
        QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        //├────────┼────────┼────────┼────────┼────────┼────────┤                                   ├────────┼────────┼────────┼────────┼────────┼────────┤
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                  LT(0,KC_Y),LT(0,KC_U),LT(0,KC_I),LT(0,KC_O),LT(0,KC_P),LT(0,KC_MINS),
        //├────────┼────────┼────────┼────────┼────────┼────────┤                                   ├────────┼────────┼────────┼────────┼────────┼────────┤
        LCTL_T(KC_LBRC), KC_A, KC_S, KC_D,  KC_F,    KC_G,                                        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, RALT_T(KC_RBRC),
        //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                 ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        SC_LSPO, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    DF(_QWE),                  DF(_HAG),KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, SC_RSPC,
        //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘                 └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
        MO(_LSM),KC_SPC,  KC_ENT,                             KC_BSPC, KC_SPC,  MO(_RSM)
        // └────────┴────────┴────────┘                          └────────┴────────┴────────┘
        ),

    [_HAG] = LAYOUT(
        //┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐                                ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐
        QK_GESC,      KC_1,         KC_2,         KC_3,         KC_4,         KC_5,                                          KC_6,         KC_7,         KC_8,         KC_9,         KC_0,         KC_BSPC,
        //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤                                ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
        KC_TAB,       LT(0,KC_J),   KC_G,         KC_M,         KC_P,         KC_V,                                          LT(0,KC_SCLN),LT(0,KC_DOT), LT(0,KC_SLSH),LT(0,KC_QUOT),LT(0,KC_EQL), KC_BSLS,
        //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤                                ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
        KC_LBRC,      LGUI_T(KC_R), LALT_T(KC_S), LCTL_T(KC_H), LSFT_T(KC_T), KC_B,                                          KC_COMM,      RSFT_T(KC_A), RCTL_T(KC_E), RALT_T(KC_C), RGUI_T(KC_I), KC_RBRC,
        //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┐    ┌─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
        SC_LSPO,      LT(0,KC_X),   KC_F,         KC_L,         KC_D,         KC_K,         DF(_QWE),          DF(_HAG),     LT(0,KC_MINS),KC_U,         KC_O,         KC_W,         KC_Y,         SC_RSPC,
        //└─────────────┴─────────────┴─────────────┴─────┬───────┴─────┬───────┴─────┬───────┴─────┬───────┘    └─────┬───────┴─────┬───────┴─────┬───────┴─────┬───────┴─────────────┴─────────────┴─────────────┘
        MO(_LSM),     KC_N,         LT(_NUM,KC_ENT),                 KC_BSPC,      KC_SPC,       MO(_RSM)
        // └─────────────┴─────────────┴─────────────┘                  └─────────────┴─────────────┴─────────────┘
        ),



    [_LSM] = LAYOUT(
        //┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐                                ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐
        KC_GRV,       KC_F1,        KC_F2,        KC_F3,        KC_F4,        KC_F5,                                         KC_F6,        KC_F7,        KC_F8,        KC_F9,        KC_F10,       KC_DEL,
        //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤                                ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
        _______,      KC_Q,         _______,      _______,      _______,      _______,                                       KC_PGUP,      KC_HOME,      KC_UP,        KC_END,       KC_F11,       KC_VOLU,
        //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤                                ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
        KC_CAPS,      KC_LGUI,      KC_LALT,      KC_LCTL,      KC_LSFT,      _______,                                       KC_PGDN,      KC_LEFT,      KC_DOWN,      KC_RGHT,      KC_F12,       KC_VOLD,
        //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┐    ┌─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
        _______,      KC_Z,         KC_LPRN,      KC_RPRN,      KC_LCBR,      KC_RCBR,      DT_DOWN,           DT_UP,        KC_PPLS,      KC_PMNS,      KC_PAST,      KC_PSLS,      KC_PEQL,      KC_MUTE,
        //└─────────────┴─────────────┴─────────────┴─────┬───────┴─────┬───────┴─────┬───────┴─────┬───────┘    └──────┬──────┴──────┬──────┴──────┬──────┴──────┬──────┴─────────────┴─────────────┴─────────────┘
        _______,      _______,      DT_PRNT,                          KC_DEL,       C(Z),         C(Y)
        // └─────────────┴─────────────┴─────────────┘                   └─────────────┴─────────────┴─────────────┘
        ),

    [_RSM] = LAYOUT(
        //┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐                                ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐
        KC_GRV,       KC_F1,        KC_F2,        KC_F3,        KC_F4,        KC_F5,                                         KC_F6,        KC_F7,        KC_F8,        KC_F9,        KC_F10,       _______,
        //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤                                ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
        _______,      _______,      KC_WH_L,      KC_MS_U,      KC_WH_R,      KC_WH_U,                                       _______,      _______,      _______,      _______,      _______,      _______,
        //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤                                ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
        _______,      _______,      KC_MS_L,      KC_MS_D,      KC_MS_R,      KC_WH_D,                                       _______,      KC_RSFT,      KC_RCTL,      KC_RALT,      KC_RGUI,      KC_APP,
        //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┐    ┌─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
        _______,      KC_UNDO,      KC_CUT,       KC_COPY,      KC_PSTE,      KC_AGIN,      _______,           _______,      _______,      _______,      _______,      _______,      _______,      _______,
        //└─────────────┴─────────────┴─────────────┴─────┬───────┴─────┬───────┴─────┬───────┴─────┬───────┘    └──────┬──────┴──────┬──────┴──────┬──────┴──────┬──────┴─────────────┴─────────────┴─────────────┘
        KC_BTN2,      KC_BTN1,      KC_BTN3,                          _______,      _______,      _______
        // └─────────────┴─────────────┴─────────────┘                   └─────────────┴─────────────┴─────────────┘
        ),

    [_NUM] = LAYOUT(
        //┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐                                ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐
        _______,      _______,      _______,      _______,      _______,      _______,                                       _______,      _______,      _______,      _______,      _______,      _______,
        //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤                                ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
        _______,      _______,      _______,      _______,      _______,      _______,                                       _______,      KC_7,      KC_8,      KC_9,      _______,      _______,
        //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤                                ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
        _______,      KC_LGUI,      KC_LALT,      KC_LCTL,      KC_LSFT,      _______,                                       _______,      KC_4,      KC_5,      KC_6,      _______,      _______,
        //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┐    ┌─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
        _______,      _______,      _______,      _______,      _______,      _______,      _______,           _______,      _______,      KC_1,      KC_2,      KC_3,      _______,      _______,
        //└─────────────┴─────────────┴─────────────┴─────┬───────┴─────┬───────┴─────┬───────┴─────┬───────┘    └──────┬──────┴──────┬──────┴──────┬──────┴──────┬──────┴─────────────┴─────────────┴─────────────┘
        _______,      _______,      _______,                          _______,      KC_0,         _______
        // └─────────────┴─────────────┴─────────────┘                   └─────────────┴─────────────┴─────────────┘
        )
};

#define WHEN_HELD(key_to_hold, key_to_send)                 \
    case LT(0, key_to_hold):                                \
        if (!record->tap.count && record->event.pressed) {  \
            tap_code16(KC_RBRC);                            \
            return false;                                   \
            }                                               \
        return true;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        WHEN_HELD(KC_MINS, KC_EQL)
        WHEN_HELD(KC_X, KC_EQL)
        WHEN_HELD(KC_MINS, KC_EQL)
        WHEN_HELD(KC_MINS, KC_EQL)
        WHEN_HELD(KC_MINS, KC_EQL)
        case LT(0,KC_X):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_Z)); // Intercept hold function to send Ctrl-X
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_F):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_X)); // Intercept hold function to send Ctrl-C
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_L):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_C)); // Intercept hold function to send Ctrl-C
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_D):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_V)); // Intercept hold function to send Ctrl-V
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
        case LT(0,KC_K):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_Y)); // Intercept hold function to send Ctrl-C
                return false;
            }
            return true;             // Return true for normal processing of tap keycode
    }
    return true;
}

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
#   if defined(KEYBOARD_keebio_iris_rev7)
    [_QWE] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD), ENCODER_CCW_CW(KC_PGUP, KC_PGDN), ENCODER_CCW_CW(KC_VOLU, KC_VOLD), ENCODER_CCW_CW(KC_PGDN, KC_PGUP) },
    [_HAU] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_WH_L, KC_WH_R), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(KC_HOME, KC_END) },
    [_LSM] = { ENCODER_CCW_CW(RGB_SPD, RGB_SPI), ENCODER_CCW_CW(KC_UP, KC_DOWN), ENCODER_CCW_CW(KC_LEFT, KC_RIGHT), ENCODER_CCW_CW(KC_UP, KC_DOWN) },
    [_RSM] = { ENCODER_CCW_CW(RGB_SPD, RGB_SPI), ENCODER_CCW_CW(KC_UP, KC_DOWN), ENCODER_CCW_CW(KC_LEFT, KC_RIGHT), ENCODER_CCW_CW(KC_UP, KC_DOWN) },
#   endif
};
#endif