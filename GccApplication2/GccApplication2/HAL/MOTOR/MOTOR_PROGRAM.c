/*
 * MOTOR_PROGRAM.c
 *
 * Created: 2/28/2024 8:27:35 PM
 *  Author: solo
 */ 
#include "MOTOR_INERFACE.h"
#include "DIO_INTERFACE.h"


void MOTOR_INTIAL(uint8 Mot_No )
{   
	switch(Mot_No)
	{
		case MOTOR0:
		PinMode(MOTOR_PINA, OUTPUT);
		break;
		case MOTOR1:
		PinMode(MOTOR_PINB, OUTPUT);
		break;
		case MOTOR2:
		PinMode(MOTOR_PINC, OUTPUT);
		break;
		case MOTOR3:
		PinMode(MOTOR_PIND, OUTPUT);
		break;
	}

}

void MOTOR_ON(uint8 Direction)
{
	switch(Direction)
	{
		case FORWARD:
		digitalWrite(MOTOR_PINA , HIGH);
		digitalWrite(MOTOR_PINB , LOW );
		digitalWrite(MOTOR_PINC , HIGH);
		digitalWrite(MOTOR_PIND , LOW );
		break;
		case BACKWARD :
		digitalWrite(MOTOR_PINA , LOW );
		digitalWrite(MOTOR_PINB , HIGH);
		digitalWrite(MOTOR_PINC , LOW );
		digitalWrite(MOTOR_PIND , HIGH);
		break;
		case RIGHT :
		digitalWrite(MOTOR_PINA , HIGH);
		digitalWrite(MOTOR_PINB , LOW );
		digitalWrite(MOTOR_PINC , LOW );
		digitalWrite(MOTOR_PIND , LOW );
		break;
		case LEFT :
		digitalWrite(MOTOR_PINA , LOW );
		digitalWrite(MOTOR_PINB , LOW );
		digitalWrite(MOTOR_PINC , LOW );
		digitalWrite(MOTOR_PIND , HIGH);
		break;
	}
}
void MOTOR_OF(void)
{
	digitalWrite(MOTOR_PINA , LOW);
	digitalWrite(MOTOR_PINB , LOW);
	digitalWrite(MOTOR_PINC , LOW);
	digitalWrite(MOTOR_PIND , LOW);
	
}