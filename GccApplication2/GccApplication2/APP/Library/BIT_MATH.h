/*
 * BIT_MATH.h
 *
 * Created: 2/12/2024 5:33:23 PM
 *  Author: solo
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(reg,bit)     (reg |= (1<<bit))
#define CLR_BIT(reg,bit)     (reg &= ~(1<<bit))
#define TOGLE_BIT(reg,bit)   (reg ^= (1<<bit))
#define GET_BIT(REG,BIT)     ((REG >> BIT)&1)




#endif /* BIT_MATH_H_ */