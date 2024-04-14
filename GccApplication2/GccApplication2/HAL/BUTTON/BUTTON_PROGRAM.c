/*
 * CFile1.c
 *
 * Created: 2/28/2024 9:48:40 PM
 *  Author: solo
 */ 
#include "BUTTON_INTERFACE.h"

void BUTTON_INTIAL(uint8 But_NO)
{
	switch( But_NO)
	{
		case BUTTON0:
		PinMode(BUTTON_PINA, INPUT);
		break;
		case BUTTON1:
		PinMode(BUTTON_PINB, INPUT);
		break;
		case BUTTON2:
		PinMode(BUTTON_PINC, INPUT);
		break;
		case BUTTON3:
		PinMode(BUTTON_PIND, INPUT);
		break;
		case BUTTON4:
		PinMode(BUTTON_PINE, INPUT);
		break;
	}

}
uint8 BUTTON_READ(uint8 But_No)
{
	return digitalRead( But_No );
}