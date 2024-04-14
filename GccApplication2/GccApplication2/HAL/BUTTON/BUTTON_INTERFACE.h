/*
 * BUTTON_INTERFACE.h
 *
 * Created: 2/28/2024 9:49:35 PM
 *  Author: solo
 */ 


#ifndef BUTTON_INTERFACE_H_
#define BUTTON_INTERFACE_H_

#include "BIT_MATH.h"
#include "DIO_INTERFACE.h"

#define BUTTON_PINA PB0
#define BUTTON_PINB PB1
#define BUTTON_PINC PB2
#define BUTTON_PIND PB3
#define BUTTON_PINE PB4

#define BUTTON0 0
#define BUTTON1 1
#define BUTTON2 2
#define BUTTON3 3
#define BUTTON4 4



 /**
  * @brief    IInitializing button pins (input)
  * @param    (But_no) Pass the pin number value of button
  */
void BUTTON_INTIAL(uint8 But_No);

/*----------------------------------------------------------------*/
 /**
  * @brief    Read the status  of button
  * @param    (But_no) Pass the pin number value of button
  * @retval   the status of button (0/1)
  */
uint8 BUTTON_READ(uint8 But_No);



#endif /* BUTTON_INTERFACE_H_ */