#include QMK_KEYBOARD_H

enum custom_keycodes {
    QWERTY = SAFE_RANGE,  // define custom keycodes if needed
};

// Define the mod-tap keys for the home row
#define HOME_A LGUI_T(KC_A)  // A acts as GUI (Cmd/Win) when held
#define HOME_S LALT_T(KC_S)  // S acts as Alt when held
#define HOME_D LSFT_T(KC_D)  // D acts as Shift when held
#define HOME_F LCTL_T(KC_F)  // F acts as Ctrl when held

#define HOME_J RCTL_T(KC_J)  // J acts as Ctrl when held
#define HOME_K RSFT_T(KC_K)  // K acts as Shift when held
#define HOME_L RALT_T(KC_L)  // L acts as Alt when held
#define HOME_SCLN RGUI_T(KC_SCLN)  // ; acts as GUI (Cmd/Win) when held

// Layers can be customized, this is an example of a simple base layer
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_4x12(  // Example layout (modify as per your keyboard's layout)
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_TAB,  HOME_A,  HOME_S,  HOME_D,  HOME_F,  KC_G,    KC_H,    HOME_J,  HOME_K,  HOME_L,  HOME_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
        KC_LCTL, KC_LALT, KC_LGUI, MO(1),   KC_SPC,  KC_SPC,  MO(1),   KC_RALT, KC_RCTL, KC_RGUI, KC_LEFT, KC_RGHT
    ),
    [1] = LAYOUT_ortho_4x12(  // Example function layer
        RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    )
};
