# SCorinth's Kyria keymap

This keymap is meant to combine the switchable default layers of the default Kyria keymap with the following features:

Implemented:

Future:
1. Moving control keys from the pinkies to the thumbs as in Ergodox-based keymaps.
2. The rotary encoder modes from the "gotham" keymap.
3. A Stenography layer for use with Plover.
4. Dynamic macro functionality.
5. OLED and Underglow status indications.
6. A cute OLED animation.

The default keymap contains 5 layers which allows it to include all keys found on an ANSI layout TKL keyboard plus media keys.
Hardware features of the Kyria such as OLEDs, rotary encoders and underglow are also supported.

The five different layers are the following:
1. Base layer (QWERTY, Colemak-DH or Dvorak)
2. Navigation layer
3. Symbols/Numbers layer
4. Function layer
5. Adjust layer

## Base layer(s)
```
Base Layer: -

,-------------------------------------------.                              ,-------------------------------------------.
|  Tab   |   -  |   -  |   -  |   -  |   -  |                              |   -  |   -  |   -  |   -  |   -  |  Bksp  |
|--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
|Ctrl/Esc|   -  |   -  |   -  |   -  |   -  |                              |   -  |   -  |   -  |   -  |   -  |Ctrl/ - |
|--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
| LShift |   -  |   -  |   -  |   -  |   -  | [ {  |CapsLk|  |F-Keys|  ] } |   -  |   -  |   -  |   -  |   -  | RShift |
`----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
                       |Adjust| LGUI | LAlt/| Space| Nav  |  | Sym  | Space| AltGr| RGUI | Menu |
                       |      |      | Enter|      |      |  |      |      |      |      |      |
                       `----------------------------------'  `----------------------------------'
```
Three different well-known keyboard layouts are provided to fill in the placeholder `-` keys: QWERTY, Colemak-DH, and Dvorak. The default layer can be changed at runtime, more info on that in the section on the [adjust layer](#adjust-layer).

For the rest of this write-up, the base layer will be assumed to be QWERTY and will be used as a reference to describe physical keys, e.g. “<kbd>B</kbd> key” vs, the much more verbose, “lower inner index key”.

```
Base Layer: QWERTY

,-------------------------------------------.                              ,-------------------------------------------.
|  Tab   |   Q  |   W  |   E  |   R  |   T  |                              |   Y  |   U  |   I  |   O  |   P  |  Bksp  |
|--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
|Ctrl/Esc|   A  |   S  |   D  |   F  |   G  |                              |   H  |   J  |   K  |   L  | ;  : |Ctrl/' "|
|--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
| LShift |   Z  |   X  |   C  |   V  |   B  | [ {  |CapsLk|  |F-keys|  ] } |   N  |   M  | ,  < | . >  | /  ? | RShift |
`----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
                       |Adjust| LGUI | LAlt/| Space| Nav  |  | Sym  | Space| AltGr| RGUI | Menu |
                       |      |      | Enter|      |      |  |      |      |      |      |      |
                       `----------------------------------'  `----------------------------------'
```

Aside from variations in the alpha cluster, the rest of the base keys remain the same and are designed to feel familiar.

![Step-by-step animation of the transformation of an ortholinear TKL to a Kyria](https://i.imgur.com/uVDCOek.gif)

<details>

</details>

## Navigation layer

```
Nav Layer: Media, navigation
                                                                                                                         
,-------------------------------------------.                              ,-------------------------------------------.
|        |      |      |      |      |      |                              | PgUp | Home |   ↑  | End  | VolUp| Delete |
|--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
|        |  GUI |  Alt | Ctrl | Shift|      |                              | PgDn |  ←   |   ↓  |   →  | VolDn| Insert |
|--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
|        |      |      |      |      |      |      |ScLck |  |      |      | Pause|M Prev|M Play|M Next|VolMut| PrtSc  |
`----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
                       |      |      |      |      |      |  |      |      |      |      |      |
                       |      |      |      |      |      |  |      |      |      |      |      |
                       `----------------------------------'  `----------------------------------'
```

This is where you'll find all the keys that are generally between the main block of a classic keyboard and the numpad in addition to media controls and modifiers on easy access on the home row for fast and comfortable chording with navigation keys.

Useful mnemonics:
- “GACS” to remember the order of the modifiers on the left-hand home row
- <kbd>Scroll Lock</kbd> is on the same key as <kbd>Caps Lock</kbd> because they're both locks
- <kbd>Delete</kbd> is on the same key as <kbd>Backspace</kbd> because they both erase characters
- <kbd>Home</kbd> is the leftmost position on the current line so it is above <kbd>←</kbd>. Same logic applies for <kbd>End</kbd>.
- <kbd>Media Previous</kbd> = ⏮, <kbd>Media Next</kbd> = ⏭
- <kbd>Page Up</kbd>, <kbd>Page Down</kbd> and <kbd>Volume Up</kbd>, <kbd>Volume Down</kbd> are positioned like the main <kbd>Up</kbd> and <kbd>Down</kbd> keys.

## Sym layer
```
Sym Layer: Numbers, symbols
                                                                                                                         
,-------------------------------------------.                              ,-------------------------------------------.
|    `   |  1   |  2   |  3   |  4   |  5   |                              |   6  |  7   |  8   |  9   |  0   |   =    |
|--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
|    ~   |  !   |  @   |  #   |  $   |  %   |                              |   ^  |  &   |  *   |  (   |  )   |   +    |
|--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
|    |   |   \  |  :   |  ;   |  -   |  [   |  {   |      |  |      |   }  |   ]  |  _   |  ,   |  .   |  /   |   ?    |
`----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
                       |      |      |      |      |      |  |      |      |      |      |      |
                       |      |      |      |      |      |  |      |      |      |      |      |
                       `----------------------------------'  `----------------------------------'
```
The top row is the unshifted num row, the home row of the layer is the shifted num row and the bottom row contains the hyphen `-` and the underscore `_` on the best lower row spot because of how frequent they are as well as redundant symbols that are already present on the base layer but are reproduced here to avoid juggling back and forth between base, shift, and sym when typing a string of symbols.

The layout of the first two rows needs no introduction, you're already used to them but it's worth looking into the structure of the bottom row.

The two halves are mirrored in a sense. On the right, you can find <kbd>,</kbd> <kbd>.</kbd> <kbd>/</kbd> at their usual spots with the addition of <kbd>Shift</kbd>+<kbd>/</kbd>=<kbd>?</kbd> to the right of the <kbd>/</kbd> key to remove the need to press simultaneously <kbd>Sym</kbd> and a <kbd>Shift</kbd> key to access `?`. 

Now, if you look at the left side, you'll notice that the mirror of <kbd>,</kbd> is <kbd>;</kbd>, the mirror of <kbd>.</kbd> is <kbd>:</kbd> and the mirror of <kbd>/</kbd> is <kbd>\\</kbd>. The same logic used for <kbd>Shift</kbd>+<kbd>/</kbd>=<kbd>?</kbd> also applies to <kbd>Shift</kbd>+<kbd>\\</kbd>=<kbd>|</kbd>.

In case you wish to combine <kbd>Shift</kbd> with a symbol key anyways, you can hold down <kbd>Shift</kbd> on the base layer with your pinky, activate <kbd>Sym</kbd> with your right thumb and while still holding down the <kbd>Shift</kbd> key, tap your desired symbol key. Same thing if you need <kbd>Ctrl</kbd>+<kbd>Digit</kbd>.

## Function layer
```
Function Layer: Function keys
                                                                                                                         
,-------------------------------------------.                              ,-------------------------------------------.
|        |  F9  | F10  | F11  | F12  |      |                              |      |      |      |      |      |        |
|--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
|        |  F5  |  F6  |  F7  |  F8  |      |                              |      | Shift| Ctrl |  Alt |  GUI |        |
|--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
|        |  F1  |  F2  |  F3  |  F4  |      |      |      |  |      |      |      |      |      |      |      |        |
`----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
                       |      |      |      |      |      |  |      |      |      |      |      |
                       |      |      |      |      |      |  |      |      |      |      |      |
                       `----------------------------------'  `----------------------------------'
```
In a similar fashion to the nav layer, pressing down `FKEYS` with the right thumb enables a numpad of function keys on the opposite hand and modifiers on the right-hand home row. Once again, mirror symmetry is leveraged in this keymap for the order of the right-hand modifiers.

The <kbd>Alt</kbd> modifier, despite being situated on the right half of the keyboard is *not* `KC_RALT`, it is `KC_LALT`. `KC_RALT` is actually the <kbd>AltGr</kbd> key which generally acts very differently to the left <kbd>Alt</kbd> key. Keyboard shortcuts involving <kbd>AltGr</kbd>+<kbd>F#</kbd> are rare and infrequent as opposed to the much more common <kbd>Alt</kbd>+<kbd>F#</kbd> shortcuts. Consequently, `KC_LALT` was chosen for the function layer.

Since there are more than 10 function keys, the cluster of F-keys does not follow the usual 3×3+1 numpad arrangement.


## Adjust layer
```
Adjust Layer: Default layer settings, RGB
                                                                                                                         
,-------------------------------------------.                              ,-------------------------------------------.
|        |      |      |QWERTY|      |      |                              |      |      |      |      |      |        |
|--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
|        |      |      |Dvorak|      |      |                              | TOG  | SAI  | HUI  | VAI  | MOD  |        |
|--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
|        |      |      |Colmak|      |      |      |      |  |      |      |      | SAD  | HUD  | VAD  | RMOD |        |
`----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
                       |      |      |      |      |      |  |      |      |      |      |      |
                       |      |      |      |      |      |  |      |      |      |      |      |
                       `----------------------------------'  `----------------------------------'
```

Default layer settings on the left and various RGB underglow controls on the right.

The default layer settings are lined up on the middle finger column because the home middle finger key is <kbd>D</kbd> on QWERTY (like the “D” in “Dvorak”) and the lower middle finger key is <kbd>C</kbd> on QWERTY (like the “C” in “Colemak”). I can hear you say that “QWERTY” doesn't start with “E” but Dvorak and Colemak were already aligned in a column so the QWERTY may as well join the formation.

NOTE: The default layer settings set by those keys are *NOT* stored in EEPROM and thus do not persist through boots. If you wish to change the default layer in a non-volatile manner, either change the order of the layers in the firmware, for example like so if you want to set Dvorak as the new default:
```c
enum layers {
    _DVORAK = 0,
    _QWERTY,
    _COLEMAK_DH,
    _NAV,
    _SYM,
    _FUNCTION,
    _ADJUST
};
```
or re-define the `QWERTY`, `COLEMAK` and `DVORAK` keys to point to custom keycodes starting on `SAFE_RANGE` and calling the `set_single_persistent_default_layer` function inside of `process_record_user`.

## Hardware Features

### Rotary Encoder
The left rotary encoder is programmed to control the volume whereas the right encoder sends <kbd>PgUp</kbd> or <kbd>PgDn</kbd> on every turn.

### OLEDs
The OLEDs display the current layer at the top of the active layers stack, the Kyria logo and lock status (caps lock, num lock, scroll lock).

### Underglow
The underglow LEDs should be red.

## Going further…

This default keymap can be used as is, unchanged, as a daily driver for your Kyria but you're invited to treat your keymap like a bonsai. At the beginning, it's just like the default keymap but from time to time, you can tweak it a little. Cut a little key here, let another combo grow there. Slowly but surely it will be a unique keymap that will fit you like a glove.

Check out the #keymap-ideas channel on the official SplitKB Discord server for inspiration.
