/*
 * DIO_PROGRAM.c
 *
 * Created: 2/12/2024 5:18:45 PM
 *  Author: solo
 */ 

#include "DIO_INTERFACE.h"
#include <avr/io.h>
#include "BIT_MATH.h"
void PinMode(char PIN_no, char DIR )
{
	int pin=PIN_no%10;
	int port=PIN_no/10;
	switch(DIR)
	{
		case HIGH:
		switch(port)
		{
			case A:
			SET_BIT(DDRA,pin);
			break;
			case B:
			SET_BIT(DDRB,pin);
			break;
			case C:
			SET_BIT(DDRC,pin);
			break;
			case D:
			SET_BIT(DDRD,pin);
			break;
		}
		break;
		
		case LOW:
		switch(port)
		{
			case A:
			CLR_BIT(DDRA,pin);
			break;
			case B:
			CLR_BIT(DDRB,pin);
			break;
			case C:
			CLR_BIT(DDRC,pin);
			break;
			case D:
			CLR_BIT(DDRD,pin);
			break;
		}
		break;
	}
}
void digitalWrite(char PIN_no ,char STATE)
{
	int pin=PIN_no%10;
	int port=PIN_no/10;
	switch(STATE)
	{
		case HIGH:
		switch(port)
		{
			case A:
			SET_BIT(PORTA,pin);
			break;
			case B:
			SET_BIT(PORTB,pin);
			break;
			case C:
			SET_BIT(PORTC,pin);
			break;
			case D:
			SET_BIT(PORTD,pin);
			break;
		}
		break;
		
		case LOW:
		switch(port)
		{
			case A:
			CLR_BIT(PORTA,pin);
			break;
			case B:
			CLR_BIT(PORTB,pin);
			break;
			case C:
			CLR_BIT(PORTC,pin);
			break;
			case D:
			CLR_BIT(PORTD,pin);
			break;
		}
		break;
	}
}
int digitalRead(char PIN_no )
{
	int pin=PIN_no%10;
	int port=PIN_no/10;
	
	switch(port)
	{
		case A:
		return GET_BIT(PINA,pin);
		break;
		case B:
		return GET_BIT(PINB,pin);
		break;
		case C:
		return GET_BIT(PINC,pin);
		break;
		case D:
		return GET_BIT(PIND,pin);
		break;
	}
	
}

