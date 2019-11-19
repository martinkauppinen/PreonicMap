#include QMK_KEYBOARD_H
#include "muse.h"
#include "keymap_swedish.h"

enum preonic_layers {
    _QWERTY,
    _GAME,
    _LOWER,
    _RAISE,
    _ADJUST
};

enum preonic_keycodes {
    LOWER = SAFE_RANGE,
    RAISE,
    QWERTY,
    GAME,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Default
     * ,-----------------------------------------------------------------------------------.
     * |  Del |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |  Tab |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |   Å  |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |  Esc |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   Ö  |   Ä  |
     * |------+------+------+------+--^^--+------+------+--^^--+------+------+------+------|
     * |Shift |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   -  |Enter |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * | Ctrl | GUI  | Func | Alt  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
     * `-----------------------------------------------------------------------------------'
     */
    [_QWERTY] = LAYOUT_preonic_grid( \
            KC_DEL,     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC, \
            KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   SE_AA,  \
            KC_ESC,     KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, SE_OSLH,   SE_AE, \
            KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, SE_MINS,  KC_ENT,  \
            KC_LCTL, KC_LGUI,   GAME, KC_LALT,   LOWER,  KC_SPC,  KC_SPC,   RAISE, KC_LEFT, KC_DOWN,    KC_UP, KC_RGHT  \
            ),

    /* Game
     * ,-----------------------------------------------------------------------------------.
     * |  Del |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |  Tab |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |   Å  |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |  Esc |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   Ö  |   Ä  |
     * |------+------+------+------+--^^--+------+------+--^^--+------+------+------+------|
     * |Shift |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |  Up  |Enter |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * | Ctrl |      | Func | Alt  |Space |    Lower    |Raise |   -  | Left | Down |Right |
     * `-----------------------------------------------------------------------------------'
     */
    [_GAME] = LAYOUT_preonic_grid( \
            KC_DEL,     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC, \
            KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   SE_AA,  \
            KC_ESC,     KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, SE_OSLH,   SE_AE, \
            KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_UP,  KC_ENT,  \
            KC_LCTL, KC_NO,   QWERTY, KC_LALT,   KC_SPC,  LOWER,  LOWER,   RAISE, SE_MINS, KC_LEFT,    KC_DOWN, KC_RGHT  \
            ),

    /* Lower
     * ,-----------------------------------------------------------------------------------.
     * |      |      |      |      |      |      |      |  P7  |  P8  |  P9  |  P/  |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |  !   |  "   |  #   |  $   |  %   |  &   |  P4  |  P5  |  P6  |  P*  |  ?   |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |  /   |  (   |  )   |  =   |  <   |  >   |  P1  |  P2  |  P3  |  P+  |  '   |
     * |------+------+------+------+------+------+------+--^---+------+------+------+------|
     * |      |  |   |  ~   |  ´   |  \   |  ^   |  +   |  P0  |  P.  |PEnter|  P-  |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |   Backspace |      | Home | PgDn | PgUp |  End |
     * `-----------------------------------------------------------------------------------'
     */
    [_LOWER] = LAYOUT_preonic_grid(
            _______, _______, _______, _______, _______, _______, _______, KC_P7, KC_P8, KC_P9, KC_PSLS, _______, \
            _______, LSFT(KC_1), SE_QUO2, LSFT(KC_3), SE_DLR, LSFT(KC_5), SE_AMPR, KC_P4, KC_P5, KC_P6, KC_PAST, SE_QUES, \
            _______, SE_SLSH, SE_LPRN, SE_RPRN, SE_EQL, SE_LESS, SE_GRTR, KC_P1, KC_P2, KC_P3, KC_PPLS, SE_APOS, \
            _______, SE_PIPE, SE_TILD, SE_ACUT, SE_BSLS, SE_CIRC, SE_PLUS, KC_P0, KC_PDOT, KC_PENT, KC_PMNS, _______, \
            _______, _______, _______, _______, _______, KC_BSPC, KC_BSPC, _______, KC_HOME, KC_PGDN, KC_PGUP,  KC_END \
            ),

    /* Raise
     * ,-----------------------------------------------------------------------------------.
     * |      |      |   @  |   £  |   $  |      |      |   {  |   [  |   ]  |   }  |   \  |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |  F1  |  F2  |  F3  |  F4  |      |      |   {  |   [  |   ]  |   }  |  ¨   |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |  F5  |  F6  |  F7  |  F8  |      |   @  |   (  |   )  |   §  |      |      |
     * |------+------+------+------+--^^--+------+------+--^^--+------+------+------+------|
     * |      |  F9  |  F10 |  F11 |  F12 |      |      |      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |             |      |      |      |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [_RAISE] = LAYOUT_preonic_grid(
            _______, _______,   SE_AT,  SE_PND,  SE_DLR, _______, _______, SE_LCBR, SE_LBRC, SE_RBRC, SE_RCBR, SE_BSLS, \
            _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4, _______, _______, SE_LCBR, SE_LBRC, SE_RBRC, SE_RCBR, SE_QUOT, \
            _______,   KC_F5,   KC_F6,   KC_F7,   KC_F8, _______, SE_AT, SE_LPRN, SE_RPRN, SE_HALF, _______, _______, \
            _______,   KC_F9,  KC_F10,  KC_F11,  KC_F12, _______, _______, _______, _______, _______, _______, _______, \
            _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ \
            ),

    /* Adjust (Lower + Raise)
     * ,-----------------------------------------------------------------------------------.
     * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      | Reset| Debug|      |      |      |      |      |      |      |      |  Del |
     * |------+------+------+------+------+-------------+------+------+------+------+------|
     * |      |      |      |Aud on|AudOff|AGnorm|AGswap|NumLck|      |      |      |      |
     * |------+------+------+------+------+------|------+------+------+------+------+------|
     * |      |Voice-|Voice+|Mus on|MusOff|MidiOn|MidOff|      |      |      |      |      |
     * |------+------+------+------+------+------+------+------+------+------+------+------|
     * |      |      |      |      |      |             |      |      |      |      |      |
     * `-----------------------------------------------------------------------------------'
     */
    [_ADJUST] = LAYOUT_preonic_grid( \
            KC_F1,     KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  \
            _______,   RESET,   DEBUG, _______, _______, _______, _______, TERM_ON,TERM_OFF, _______, _______,  KC_DEL,  \
            _______, _______,  MU_MOD,   AU_ON,  AU_OFF, AG_NORM, AG_SWAP, KC_NLCK, _______, _______, _______, _______, \
            _______,  MUV_DE,  MUV_IN,   MU_ON,  MU_OFF,   MI_ON,  MI_OFF, _______, _______, _______, _______, _______, \
            _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______  \
            )


};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }
            return false;
            break;
        case GAME:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_GAME);
            }
            return false;
            break;
        case LOWER:
            if (record->event.pressed) {
                layer_on(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_LOWER);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
            break;
        case RAISE:
            if (record->event.pressed) {
                layer_on(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            } else {
                layer_off(_RAISE);
                update_tri_layer(_LOWER, _RAISE, _ADJUST);
            }
            return false;
            break;
      }
    return true;
};

bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

void encoder_update_user(uint8_t index, bool clockwise) {
  if (muse_mode) {
    if (IS_LAYER_ON(_RAISE)) {
      if (clockwise) {
        muse_offset++;
      } else {
        muse_offset--;
      }
    } else {
      if (clockwise) {
        muse_tempo+=1;
      } else {
        muse_tempo-=1;
      }
    }
  } else {
    if (clockwise) {
      register_code(KC_PGDN);
      unregister_code(KC_PGDN);
    } else {
      register_code(KC_PGUP);
      unregister_code(KC_PGUP);
    }
  }
}

void dip_update(uint8_t index, bool active) {
  switch (index) {
    case 0:
      if (active) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      break;
    case 1:
      if (active) {
        muse_mode = true;
      } else {
        muse_mode = false;
        #ifdef AUDIO_ENABLE
          stop_all_notes();
        #endif
      }
   }
}

void matrix_scan_user(void) {
  #ifdef AUDIO_ENABLE
    if (muse_mode) {
      if (muse_counter == 0) {
        uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
        if (muse_note != last_muse_note) {
          stop_note(compute_freq_for_midi_note(last_muse_note));
          play_note(compute_freq_for_midi_note(muse_note), 0xF);
          last_muse_note = muse_note;
        }
      }
      muse_counter = (muse_counter + 1) % muse_tempo;
    }
  #endif
}

bool music_mask_user(uint16_t keycode) {
  switch (keycode) {
    case RAISE:
    case LOWER:
      return false;
    default:
      return true;
  }
}
