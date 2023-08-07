/***************************************************************************************/
/************************    Author: Seham     *****************************************/
/************************    Layer:  LIB       *****************************************/
/************************    SWC:    BIT_MATH  *****************************************/
/***************************************************************************************/

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

/*Bit-Math macros*/
#define SET_BIT(REG , BIT)     REG |= 1<<BIT              // set bit
#define CLR_BIT(REG , BIT)     REG &= ~(1<<BIT)           // clear bit
#define TOG_BIT(REG , BIT)     REG ^= 1<<BIT              // toggle bit
#define GET_BIT(REG , BIT)     ((REG >> BIT) & 1)         // get bit

#endif 
