/*
 * GccApplication2.c
 *
 * Created: 2/12/2024 3:37:48 PM
 * Author : solo
 */ 
#define F_CPU     16000000UL


#include <avr/delay.h>
#include "DIO_INTERFACE.h"
#include "MOTOR_INERFACE.h"
#include "LED_INTERFACE.h"
#include "BUTTON_INTERFACE.h"

uint64 counter=0; 
int main(void)
{
	MOTOR_INTIAL(MOTOR0);
	MOTOR_INTIAL(MOTOR1);
	MOTOR_INTIAL(MOTOR2);
	MOTOR_INTIAL(MOTOR3);

	LED_INTIAL(LED_YELLOW1);
	LED_INTIAL(LED_RED);
	LED_INTIAL(LED_YELLOW2);
	
	BUTTON_INTIAL(BUTTON0);
	BUTTON_INTIAL(BUTTON1);
	BUTTON_INTIAL(BUTTON2);
	BUTTON_INTIAL(BUTTON3);
	BUTTON_INTIAL(BUTTON4);

    /* Replace with your application code */
    while (1) 
    {
		uint8 Button1=BUTTON_READ(BUTTON_PINA);
		uint8 Button2=BUTTON_READ(BUTTON_PINB);
		uint8 Button3=BUTTON_READ(BUTTON_PINC);
		uint8 Button4=BUTTON_READ(BUTTON_PIND);
		uint8 Button5=BUTTON_READ(BUTTON_PINE);
		
		if (1==Button1)
		{
			MOTOR_ON(FORWARD);
			LED_OF(LED_RED);
			LED_OF(LED_YELLOW1);
			LED_OF(LED_YELLOW2);
			
		}else if(1==Button2)
		{
			
			MOTOR_ON(BACKWARD);
			LED_OF(LED_RED);
			LED_OF(LED_YELLOW1);
			LED_OF(LED_YELLOW2);
		}else if(1==Button3)
		{
			counter=1500;
			MOTOR_ON(RIGHT);
			LED_OF(LED_RED);
			LED_OF(LED_YELLOW1);
			LED_ON(LED_YELLOW2);
		}else if(1==Button4)
		{
			counter=1500;
			MOTOR_ON(LEFT);
			LED_OF(LED_RED);
			LED_OF(LED_YELLOW2);
			LED_ON(LED_YELLOW1);
		}else if(1==Button5)
		{
			counter=1500;
			MOTOR_OF();
			LED_ON(LED_RED);
			LED_OF(LED_YELLOW1);
			LED_OF(LED_YELLOW2);
			
		}
		if (counter<=0)
		{
			LED_OF(LED_RED);
			LED_OF(LED_YELLOW1);
			LED_OF(LED_YELLOW2);
		}
		counter -=1;
		_delay_ms(1);
    }
}

