# ⌨️ Geonworks Geonix Rev 2.5 (`sprixes` Layout Guide)

This guide explains how your customized **Planck (`sprixes`)** keymap layout was migrated to your new **Geonworks Geonix Rev 2.5** keyboard using **[vial.rocks](https://vial.rocks)**.

---

## 📄 File Version Summary

* **[`geonix-sprixes-v3.vil`](file:///Users/arjay.paulino/Workspace/qmk_firmware/keyboards/planck/keymaps/sprixes/geonix-sprixes-v3.vil)** / **[`geonix-sprixes-v2.vil`](file:///Users/arjay.paulino/Workspace/qmk_firmware/keyboards/planck/keymaps/sprixes/geonix-sprixes-v2.vil)** *(Active Working Layout)*:
  Contains **exact 4 layers (Layers 0–3)** matching the Geonix factory firmware 1:1, verified and exported directly from Vial hardware memory.

---

## 🖱️ Mouse Key Settings Guide (`vial.rocks`)

To set up your exact Planck mouse responsiveness in **[vial.rocks](https://vial.rocks)** (under **Settings** $\rightarrow$ **Mouse Keys**), use the values in the table below matching your exact UI settings screen:

| Exact Label in Vial Settings UI | Factory Default | **Your Planck Value (Enter in Vial)** |
| :--- | :---: | :---: |
| **Delay between pressing a movement key and cursor movement** | `300` | **`0`** |
| **Time between cursor movements in milliseconds** | `50` | **`8`** |
| **Step size** | `1` | **`1`** |
| **Maximum cursor speed at which acceleration stops** | `10` | **`40`** |
| **Time until maximum cursor speed is reached** | `20` | **`64`** |
| **Delay between pressing a wheel key and wheel movement** | `10` | **`0`** |
| **Time between wheel movements** | `80` | **`8`** |
| **Maximum number of scroll steps per scroll action** | `8` | **`8`** |
| **Time until maximum scroll speed is reached** | `40` | **`40`** |

---

## 📡 Retained Geonix Hardware & Wireless Features

The Geonix Rev 2.5 features tri-mode wireless connectivity (Bluetooth 5.0, 2.4GHz wireless dongle, and USB-C wired). All factory wireless control keycodes (`USER00` – `USER16`) and RGB controls have been **100% retained** and placed logically under **Layer 2 (`_FKEYS` / Fn layer)**.

| Keycode | Feature Name | Description / How to Use |
| :--- | :--- | :--- |
| `USER00` | **Bluetooth Profile 1** | Switch to paired Bluetooth device 1 (`Hold FKEYS + press Row 1, Col 6`) |
| `USER01` | **Bluetooth Profile 2** | Switch to paired Bluetooth device 2 (`Hold FKEYS + press Row 1, Col 7`) |
| `USER02` | **Bluetooth Profile 3** | Switch to paired Bluetooth device 3 (`Hold FKEYS + press Row 1, Col 8`) |
| `USER03` | **2.4GHz Wireless** | Switch to 2.4GHz USB Dongle mode (`Hold FKEYS + press Row 1, Col 10`) |
| `USER04` | **USB Wired Mode** | Switch to USB-C Wired mode (`Hold FKEYS + press Row 1, Col 1`) |
| `USER05` | **Clear BT Pairing** | Long press to clear current Bluetooth pairing (`Hold FKEYS + press Row 4, Col 3`) |
| `USER08` | **Battery Check** | Check battery level via LED indicator (`Hold FKEYS + press Row 1, Col 11`) |
| `USER09` | **Deep Sleep Toggle** | Toggle battery saving auto-sleep mode (`Hold FKEYS + press Row 4, Col 6`) |
| `USER11` | **Wireless Status** | Toggle wireless status indicator (`Hold FKEYS + press Row 4, Col 4`) |
| `USER12` | **Battery Indicator** | Toggle battery status indicator (`Hold FKEYS + press Row 4, Col 5`) |
| `USER16` | **Hardware Reset** | Soft hardware mode reset (`Hold FKEYS + press Row 3, Col 12`) |
| `RGB_MOD` | **RGB Mode** | Cycle through RGB lighting modes (`Hold FKEYS + press Row 2, Col 6`) |
| `RGB_VAI` / `RGB_VAD` | **RGB Brightness** | Increase / decrease RGB brightness |
| `RGB_SPD` / `RGB_SPI` | **RGB Speed** | Decrease / increase RGB effect speed |

---

## ⌨️ Active 4-Layer Breakdown (`geonix-sprixes-v3.vil`)

### Layer 0: Base Layer (`_BASE`)
Physical 4x12 ortholinear layout with **2x 1U split spacebar**:

```
+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
|  TAB   |   Q    |   W    |   E    |   R    |   T    |   Y    |   U    |   I    |   O    |   P    | BSPC   |
+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
|CTL/ESC |   A    |   S    |   D    |   F    |   G    |   H    |   J    |   K    |   L    |NAV/;   |   '    |
+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
| LSHIFT |   Z    |   X    |   C    |   V    |   B    |   N    |   M    |   ,    |   .    |   /    | RSHIFT |
+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
| FKEYS  | SPACE  | LCTRL  | DELETE |  LGUI  | FKEYS  | SYMBOL |MEH/ENT | LALT   |  N/A   |  N/A   | FKEYS  |
+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
```

*   **`CTL/ESC`** (`LCTL_T(KC_ESC)`): Tap for `Escape`, hold for `Left Control`.
*   **`NAV/;`** (`LT(3, KC_SCOLON)`): Tap for `;`, hold to activate **`_NAV` Layer**.
*   **`MEH/ENT`** (`MEH_T(KC_ENT)`): Tap for `Enter`, hold for `Meh` modifier (`Ctrl + Shift + Alt`).

---

### Layer 1: Symbol Layer (`_SYMBOL`)
*Activated by holding the `SYMBOL` key (Bottom Row, Col 7).*

```
+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
|   `    |   1    |   2    |   3    |   4    |   5    |   6    |   7    |   8    |   9    |   0    |  TRNS  |
+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
|   ~    |   (    |   )    |   #    |   =    |   %    |   ^    |   -    |   *    |   {    |   }    |   [    |
+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
|   |    |   !    |   @    |   +    |   $    |   :    |   _    |   &    |   <    |   >    |   \    |   ]    |
+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
|  TRNS  |  TRNS  |  TRNS  |  TRNS  |  TRNS  |  TRNS  |  TRNS  |  TRNS  |  TRNS  |  TRNS  |  TRNS  |  TRNS  |
+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
```

---

### Layer 2: Function, Mouse, Wireless & System (`_FKEYS`)
*Activated by holding any `FKEYS` key (Bottom Row, Col 1, 6, or 12).*

```
+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
| USB_WRD|   F1   |   F2   |   F3   |   F4   |  BT1   |  BT2   |  BT3   | MS_UP  | 2.4G   | BATT   |  DEL   |
+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
| LCTRL  |   F5   |   F6   |   F7   |   F8   |RGB_MOD |MS_WHLD |MS_LEFT |MS_DOWN |MS_RIGHT|MS_WHLU |MAC_LOK |
+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
|QK_BOOT |   F9   |  F10   |  F11   |  F12   |RGB_VAI |RGB_VAD |  F13   |  F14   |  F15   |  F16   | USER16 |
+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
|  TRNS  |  TRNS  |BT_CLR  | USER11 | USER12 | SLEEP  | EMOJI  |MS_BTN1 |MS_BTN2 |RGB_SPD |RGB_SPI |  TRNS  |
+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
```

* **`MAC_LOK`** (`LCG(KC_Q)`): Lock macOS Screen (`Hold FKEYS + press Row 2, Col 12`).
* **`EMOJI`** (`LCG(KC_SPACE)`): macOS Emoji Picker (`Hold FKEYS + press Row 4, Col 7`).
* **`QK_BOOT`**: Put keyboard in Bootloader mode (`Hold FKEYS + press Row 3, Col 1`).

---

### Layer 3: Vim Navigation Layer (`_NAV`)
*Activated by holding the Semicolon key (`NAV/;`).*

```
+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
|  TRNS  |  TRNS  |  TRNS  | WORD_R |  TRNS  |  TRNS  |  TRNS  |  PGUP  | LINE_R | LINE_L |  TRNS  |  TRNS  |
+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
|  TRNS  |  TRNS  |  TRNS  |  PGDN  |  TRNS  |  TRNS  |  LEFT  |  DOWN  |   UP   | RIGHT  |  TRNS  |  TRNS  |
+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
|  TRNS  |  TRNS  |  CUT   |  COPY  | PASTE  | WORD_L |  TRNS  |  TRNS  |  TRNS  |  TRNS  |  TRNS  |  TRNS  |
+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
|  TRNS  |  TRNS  |  TRNS  |  TRNS  |  TRNS  |  TRNS  |  TRNS  |  TRNS  |  TRNS  |  TRNS  |  TRNS  |  TRNS  |
+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+
```

---

## 🚀 Setup Instructions in `vial.rocks`

1. **Connect Keyboard**: Connect your Geonix Rev 2.5 to your computer using the USB-C cable.
2. **Open Vial Web**: Launch Chrome or Edge and open **[https://vial.rocks](https://vial.rocks)**.
3. **Connect Device**: Click **Connect**, select **Geonix**, and authorize.
4. **Load Layout**:
   * Click **File** $\rightarrow$ **Load layout**.
   * Choose [`geonix-sprixes-v3.vil`](file:///Users/arjay.paulino/Workspace/qmk_firmware/keyboards/planck/keymaps/sprixes/geonix-sprixes-v3.vil).
5. **Configure Mouse Keys**:
   * Go to **Settings** $\rightarrow$ **Mouse Keys** and apply the values from the Mouse Key Settings table above.
