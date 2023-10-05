#include "KeyPad.h"
#include "GPIO.h"
uint8 counter = 0;
void KeyPad_Init(void)
{
    uint8 i, j;
    for (i = KAYBAD_ROWS_START_PIN; i <= KAYBAD_ROWS_END_PIN; i++)
    {
        GPIO_ConfigPin(GPIOD, i, INPUT, PUSH_PULL, NO_PULL);
    }
    for (j = KAYBAD_COLS_START_PIN; j <= KAYBAD_COLS_END_PIN; j++)
    {
        GPIO_ConfigPin(GPIOD, j, OUTPUT, PUSH_PULL, PULL_DOWN);
    }
}
void KeyPad_manage(void)
{
    uint8 i, j;
    for (i = KAYBAD_ROWS_START_PIN; i <= KAYBAD_ROWS_END_PIN; i++)
    {

        GPIO_WritePin(GPIOD, i, HIGH);
        for (j = KAYBAD_COLS_START_PIN; j <= KAYBAD_COLS_END_PIN; j++)
        {
            if (GPIO_ReadPin(GPIOD, j) == KEY_PRESSED)
            {
                counter = (i - KAYBAD_ROWS_START_PIN) * NUMBER_COLS + (j - KAYBAD_COLS_START_PIN);
                KeypadCallouts_KeyPressNotificaton();
            }
        }
        GPIO_WritePin(GPIOD, i, LOW);
    }
}
uint8 Keypad_GetKey(void)
{
    return counter;
}