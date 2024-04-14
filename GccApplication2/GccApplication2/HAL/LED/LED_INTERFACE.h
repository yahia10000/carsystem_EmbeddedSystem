/*
 * LED_INTERFACE.h
 *
 * Created: 2/19/2024 7:00:21 PM
 *  Author: solo
 */ 


#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_

#include "STD_TYPES.h"
#include "DIO_INTERFACE.h"

#define LED_YELLOW1  0
#define LED_RED      1
#define LED_YELLOW2  2

 /**
  * @brief    IInitializing led pins (output)
  * @param    (led_no) Pass the pin number value of leds
  */
void LED_INTIAL(uint8 led_No);
/*----------------------------------------------------------------*/
 /**
  * @brief    Turn on the leds 
  * @param    (LedNo)  Pass the pin number value (red/yellow)
  */
void LED_ON(uint8 LedNo);

/*----------------------------------------------------------------*/
 /**
  * @brief Turn off the leds
void LED_OF(uint8 LedNo);

/*----------------------------------------------------------------*/
 /**
  * @brief  Reverse the status of the leds
  * @param  (PIN_no) Pass the pin number of leds
  */
void LED_TOGEL(uint8 LedNo);




#endif /* LED_INTERFACE_H_ */