#include "Utils.h"
#include "GPIO.h"
/* --------------------- Keypad configurations for 4x3 keypad --------------------- */
/* COLUMNS */
#define KAYBAD_COLS_PORT        GPIOD
#define KAYBAD_COLS_START_PIN   PIN0
#define KAYBAD_COLS_END_PIN     PIN2
/* ROWS */
#define KAYBAD_ROWS_PORT        GPIOD
#define KAYBAD_ROWS_START_PIN   PIN3
#define KAYBAD_ROWS_END_PIN     PIN6
/* __________________________________________________________________________________ */

/* --------------------- number of rows and columns in keypad --------------------- */
#define NUMBER_COLS 3
#define NUMBER_ROWS 4
/* __________________________________________________________________________________ */

#define KEY_PRESSED 1
#define KEY_RELEASED 0

void KeyPad_Init(void);
void KeyPad_manage(void);
void KeypadCallouts_KeyPressNotificaton(void);
uint8 Keypad_GetKey(void);


