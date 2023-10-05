#include "Rcc.h"
#include "Utils.h"
#include "GPIO.h"
#include "KeyPad.h"
#include "KeyPad.c"
void delay(void)
{
	uint32 i;
	for (i = 0; i < 1000000; i++)
		;
}
void displayPinOn_7Seg(uint8 counter);
int main()
{
	Rcc_Init();
	Rcc_Enable(RCC_GPIOA);
	Rcc_Enable(RCC_GPIOD);
	KeyPad_Init();
	uint8 i;
	for (i = 0; i < 7; i++)
	{
		GPIO_ConfigPin(GPIOA, i, OUTPUT, PUSH_PULL, NO_PULL);
	}
	while (1)
	{
		KeyPad_manage();
		delay();
	}
	return 0;
}
void KeypadCallouts_KeyPressNotificaton(void)
{
	uint8 prev = -1;
	Keypad_GetKey();
	if (prev == counter)
		return;
	prev = counter;
	switch (counter)
	{
	case 0:
		GPIO_WritePin(GPIOA, PIN0, HIGH);
		GPIO_WritePin(GPIOA, PIN1, HIGH);
		GPIO_WritePin(GPIOA, PIN2, HIGH);
		GPIO_WritePin(GPIOA, PIN3, HIGH);
		GPIO_WritePin(GPIOA, PIN4, HIGH);
		GPIO_WritePin(GPIOA, PIN5, HIGH);
		GPIO_WritePin(GPIOA, PIN6, LOW);
		break;
	case 1:
		GPIO_WritePin(GPIOA, PIN0, LOW);
		GPIO_WritePin(GPIOA, PIN1, HIGH);
		GPIO_WritePin(GPIOA, PIN2, HIGH);
		GPIO_WritePin(GPIOA, PIN3, LOW);
		GPIO_WritePin(GPIOA, PIN4, LOW);
		GPIO_WritePin(GPIOA, PIN5, LOW);
		GPIO_WritePin(GPIOA, PIN6, LOW);
		break;
	case 2:
		GPIO_WritePin(GPIOA, PIN0, HIGH);
		GPIO_WritePin(GPIOA, PIN1, HIGH);
		GPIO_WritePin(GPIOA, PIN2, LOW);
		GPIO_WritePin(GPIOA, PIN3, HIGH);
		GPIO_WritePin(GPIOA, PIN4, HIGH);
		GPIO_WritePin(GPIOA, PIN5, LOW);
		GPIO_WritePin(GPIOA, PIN6, HIGH);
		break;
	case 3:
		GPIO_WritePin(GPIOA, PIN0, HIGH);
		GPIO_WritePin(GPIOA, PIN1, HIGH);
		GPIO_WritePin(GPIOA, PIN2, HIGH);
		GPIO_WritePin(GPIOA, PIN3, HIGH);
		GPIO_WritePin(GPIOA, PIN4, LOW);
		GPIO_WritePin(GPIOA, PIN5, LOW);
		GPIO_WritePin(GPIOA, PIN6, HIGH);
		break;
	case 4:
		GPIO_WritePin(GPIOA, PIN0, LOW);
		GPIO_WritePin(GPIOA, PIN1, HIGH);
		GPIO_WritePin(GPIOA, PIN2, HIGH);
		GPIO_WritePin(GPIOA, PIN3, LOW);
		GPIO_WritePin(GPIOA, PIN4, LOW);
		GPIO_WritePin(GPIOA, PIN5, HIGH);
		GPIO_WritePin(GPIOA, PIN6, HIGH);
		break;
	case 5:
		GPIO_WritePin(GPIOA, PIN0, HIGH);
		GPIO_WritePin(GPIOA, PIN1, LOW);
		GPIO_WritePin(GPIOA, PIN2, HIGH);
		GPIO_WritePin(GPIOA, PIN3, HIGH);
		GPIO_WritePin(GPIOA, PIN4, LOW);
		GPIO_WritePin(GPIOA, PIN5, HIGH);
		GPIO_WritePin(GPIOA, PIN6, HIGH);
		break;
	case 6:
		GPIO_WritePin(GPIOA, PIN0, HIGH);
		GPIO_WritePin(GPIOA, PIN1, LOW);
		GPIO_WritePin(GPIOA, PIN2, HIGH);
		GPIO_WritePin(GPIOA, PIN3, HIGH);
		GPIO_WritePin(GPIOA, PIN4, HIGH);
		GPIO_WritePin(GPIOA, PIN5, HIGH);
		GPIO_WritePin(GPIOA, PIN6, HIGH);
		break;
	case 7:
		GPIO_WritePin(GPIOA, PIN0, HIGH);
		GPIO_WritePin(GPIOA, PIN1, HIGH);
		GPIO_WritePin(GPIOA, PIN2, HIGH);
		GPIO_WritePin(GPIOA, PIN3, LOW);
		GPIO_WritePin(GPIOA, PIN4, LOW);
		GPIO_WritePin(GPIOA, PIN5, LOW);
		GPIO_WritePin(GPIOA, PIN6, LOW);
		break;
	case 8:
		GPIO_WritePin(GPIOA, PIN0, HIGH);
		GPIO_WritePin(GPIOA, PIN1, HIGH);
		GPIO_WritePin(GPIOA, PIN2, HIGH);
		GPIO_WritePin(GPIOA, PIN3, HIGH);
		GPIO_WritePin(GPIOA, PIN4, HIGH);
		GPIO_WritePin(GPIOA, PIN5, HIGH);
		GPIO_WritePin(GPIOA, PIN6, HIGH);
		break;
	case 9:
		GPIO_WritePin(GPIOA, PIN0, HIGH);
		GPIO_WritePin(GPIOA, PIN1, HIGH);
		GPIO_WritePin(GPIOA, PIN2, HIGH);
		GPIO_WritePin(GPIOA, PIN3, HIGH);
		GPIO_WritePin(GPIOA, PIN4, LOW);
		GPIO_WritePin(GPIOA, PIN5, HIGH);
		GPIO_WritePin(GPIOA, PIN6, HIGH);
		break;
	}
}