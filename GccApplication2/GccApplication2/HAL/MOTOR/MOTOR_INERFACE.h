/*
 * MOTOR_INERFACE.h
 *
 * Created: 2/28/2024 8:28:01 PM
 *  Author: solo
 */ 
 

#ifndef MOTOR_INERFACE_H_
#define MOTOR_INERFACE_H_
#include "BIT_MATH.h"
#include "DIO_INTERFACE.h"

#define MOTOR_PINA PC0
#define MOTOR_PINB PC1
#define MOTOR_PINC PC2
#define MOTOR_PIND PC3

#define MOTOR0 0
#define MOTOR1 1
#define MOTOR2 2
#define MOTOR3 3

#define FORWARD  0
#define BACKWARD 1
#define RIGHT    2
#define LEFT     3


/**
  * @brief    IInitializing motor pins (output)
  * @param    (mot_no) Pass the pin number value
  */
void MOTOR_INTIAL(uint8 Mot_No);
/*----------------------------------------------------------------*/
 /**
  * @brief    Run the motor in the specified direction 
  * @param    (Direction) pass motor status value (forward/backward/right/left)
  */
void MOTOR_ON(uint8 Direction);

/*----------------------------------------------------------------*/
 /**
  * @brief  Stop the rotation of motor
  */
void MOTOR_OF(void);


#endif /* MOTOR_INERFACE_H_ */