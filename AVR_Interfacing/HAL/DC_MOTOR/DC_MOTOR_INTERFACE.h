/***************************************************************************************/
/************************    Author: Seham     *****************************************/
/************************    Layer:  HAL       *****************************************/
/************************    SWC:    DC_MOTORS *****************************************/
/***************************************************************************************/

#ifndef HAL_DC_MOTOR_DC_MOTOR_INTERFACE_H_
#define HAL_DC_MOTOR_DC_MOTOR_INTERFACE_H_


/************************** Includes ***********************/
#include "DC_MOTOR_CONFIG.h"
#include "DC_MOTOR_PRIVATE.h"
#include "../../MCAL/DIO/DIO_INTERFACE.h"
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"




/********************** GLOBAL MACROS **********************/
/***********************************************************/
/* PWM CHANNELS */
#define		MOTOR_A_CH			1
#define		MOTOR_B_CH			2

/***********************************************************/

/* MOTOR DIRECTION */
#define		MOTOR_OFF			0
#define		MOTOR_FORWARD		1
#define		MOTOR_BACKWARD		2
/***********************************************************/

/***********************************************************/


/******************** PUBPLIC FUNCTIONS ********************/
/***********************************************************/
/*	Description : Initialize MOTOR Module
	Parameters  : void
	Return      : None */
/***********************************************************/
void MOTOR_voidInit(void) ;


/***********************************************************/
/*	Description : Control direction each motor
	Parameters  : u8 cpy_u8Speed, u8 cpy_u8Direction (FORWARD, BACKWARD or OFF)
	Return      : None */
/***********************************************************/
void MOTOR_voidControl(u8 cpy_u8Speed, u8 cpy_u8Direction) ;


/***********************************************************/
/*	Description : Control Speed of each motor
	Parameters  : u8 cpy_u8Speed
	Return      : None */
/***********************************************************/
void MOTOR_voidSpeed(u8 cpy_u8Speed) ;


/***********************************************************/


#endif
