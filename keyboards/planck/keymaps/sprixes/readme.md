# ⌨️ sprixes Layout Guide & Testing Checklist

This layout is fully optimized to run on both **Planck (4x12)** and **Preonic (5x12)** keyboards using **100% stock QMK keycodes**.

---

## ⚡ Quick Testing Checklist

Flashing was successful! Use this checklist to test and verify every shortcut and layer.

### 1. Base Layer Tap/Hold Modifiers
*   [x] **Escape / Control**: Tap the Caps Lock position key $\rightarrow$ should emit `Escape`. Hold it $\rightarrow$ should act as `Left Control` (e.g., test `Ctrl + C`).
*   [x] **Semicolon / Nav Layer**: Tap the Semicolon key $\rightarrow$ should emit `;`. Hold it $\rightarrow$ opens the **`_NAV` layer** (test hold and press `H`/`J`/`K`/`L` keys for cursor movement).
*   [x] **Enter / Meh**: Tap the Enter key $\rightarrow$ should emit `Enter`. Hold it $\rightarrow$ acts as the `Meh` modifier (`Ctrl + Shift + Alt`).
*   [x] **Delete Word**: Tap the `DEL_WRD` key (on the bottom row, 3rd key from the left) $\rightarrow$ should delete an entire word on macOS (`Alt + Backspace`).

### 2. Symbol Layer (`_SYMBOL`)
*   [x] **Toggle**: Hold the `SYMBOL` key (bottom row, 6th key from the left).
*   [x] **Symbols**: Verify standard symbols (`(`, `)`, `{`, `}`, `<`, `>`, etc.) are mapped exactly like your previous layout.

### 3. Vim Navigation Layer (`_NAV`)
*   [x] **Navigation**: Hold the semicolon key and press:
    *   `H` $\rightarrow$ Left
    *   `J` $\rightarrow$ Down
    *   `K` $\rightarrow$ Up
    *   `L` $\rightarrow$ Right
*   [x] **Word Navigation**: Hold semicolon and press `W` $\rightarrow$ navigates one word to the right. Press `B` $\rightarrow$ navigates one word to the left.
*   [x] **Clipboard**: Hold semicolon and press `X` (Cut), `C` (Copy), or `V` (Paste).

### 4. Function & Mouse Layer (`_FKEYS`)
*   [ ] **Toggle**: Hold the `FKEYS` key (bottom row, 1st, 5th, or 12th key).
*   [ ] **Mouse Cursor**: Hold `FKEYS` and navigate the mouse cursor using your right hand:
    *   `I` $\rightarrow$ Cursor Up
    *   `K` $\rightarrow$ Cursor Down
    *   `J` $\rightarrow$ Cursor Left
    *   `L` $\rightarrow$ Cursor Right
*   [ ] **Mouse Scroll**: Hold `FKEYS` and press `L` (Scroll Up) or `H` (Scroll Down).
*   [ ] **Mouse Buttons**: Hold `FKEYS` and press `enter` (Left Click) or `alt` (Right Click).

### 5. Adjust Layer & Dynamic Macros (`_ADJUST`)
*   [ ] **Toggle**: Hold **both** `SYMBOL` (bottom row, 6th key) and `FKEYS` (bottom row, 5th key) together.
*   [ ] **Test Macro Recording**:
    1. Enter the Adjust Layer (hold both keys).
    2. Tap the **`DM_REC1`** key (Row 1, 5th key on Planck (normally `R`); Row 2, 5th key on Preonic).
    3. Release the Adjust keys and type a test sequence (e.g., `Hello World!`).
    4. Enter the Adjust Layer again and tap **`DM_RSTP`** (Row 1, 6th key on Planck (normally `T`); Row 2, 6th key on Preonic) to stop recording.
    5. Test playing it: Enter Adjust Layer and tap **`DM_PLY1`** (Row 2, 5th key on Planck (normally `F`); Row 3, 5th key on Preonic). It should type out your test sequence instantly!

