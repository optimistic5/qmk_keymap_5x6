enum charybdis_keymap_layers {
    LAYER_BASE = 0,
    LAYER_POINTER = 3,
};

#ifndef POINTING_DEVICE_ENABLE
#    define DRGSCRL KC_NO
#    define DPI_MOD KC_NO
#    define S_D_MOD KC_NO
#    define SNIPING KC_NO
#endif // !POINTING_DEVICE_ENABLE



/* Disable unused features. */
#define NO_ACTION_ONESHOT

/* Charybdis-specific features. */

// #define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_ENABLE
#define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_TIMEOUT_MS 3000
#define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_THRESHOLD 1
#define CHARYBDIS_DRAGSCROLL_REVERSE_X
// #define CHARYBDIS_DRAGSCROLL_REVERSE_Y



