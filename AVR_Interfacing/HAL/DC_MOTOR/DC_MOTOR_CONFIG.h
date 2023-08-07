/***************************************************************************************/
/************************    Author: Seham     *****************************************/
/************************    Layer:  HAL       *****************************************/
/************************    SWC:    DC_MOTORS *****************************************/
/***************************************************************************************/

#ifndef HAL_DC_MOTOR_DC_MOTOR_CONFIG_H_
#define HAL_DC_MOTOR_DC_MOTOR_CONFIG_H_


/********************** GLOBAL MACROS **********************/
/***********************************************************/
#define		MOTOR_MAX_SPEED			300

/***********************************************************/
/* SPEED CONTROL CONFIGURATION */
#define 	MOTOR_EN_A_PORT			DIO_PORTC
#define 	MOTOR_EN_A_PIN			DIO_PIN0
#define 	MOTOR_EN_A_DIRECTION	DIO_OUTPUT
#define 	MOTOR_EN_A_VALUE     	DIO_HIGH

#define 	MOTOR_EN_B_PORT			DIO_PORTC
#define 	MOTOR_EN_B_PIN			DIO_PIN5
#define 	MOTOR_EN_B_DIRECTION	DIO_OUTPUT
#define 	MOTOR_EN_B_VALUE     	DIO_HIGH
/***********************************************************/

/* DIRECTION CONTROL FOR MOTOR A CONFIGURATION */
#define		MOTOR_A_IN1_PORT		DIO_PORTC
#define		MOTOR_A_IN1_PIN			DIO_PIN1
#define		MOTOR_A_IN1_DIRECTION	DIO_OUTPUT

#define		MOTOR_A_IN2_PORT		DIO_PORTC
#define		MOTOR_A_IN2_PIN			DIO_PIN2
#define		MOTOR_A_IN2_DIRECTION	DIO_OUTPUT
/**********************************************************/

/* DIRECTION CONTROL FOR MOTOR B CONFIGURATION */
#define		MOTOR_B_IN3_PORT		DIO_PORTC
#define		MOTOR_B_IN3_PIN			DIO_PIN3
#define		MOTOR_B_IN3_DIRECTION	DIO_OUTPUT

#define		MOTOR_B_IN4_PORT		DIO_PORTC
#define		MOTOR_B_IN4_PIN			DIO_PIN4
#define		MOTOR_B_IN4_DIRECTION	DIO_OUTPUT
/*********************************************************/


#endif 