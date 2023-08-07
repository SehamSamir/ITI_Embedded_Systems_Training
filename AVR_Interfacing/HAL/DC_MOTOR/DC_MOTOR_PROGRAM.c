/***************************************************************************************/
/************************    Author: Seham     *****************************************/
/************************    Layer:  HAL       *****************************************/
/************************    SWC:    DC_MOTORS *****************************************/
/***************************************************************************************/


#include "DC_MOTOR_INTERFACE.h"
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#include "../../MCAL/DIO/DIO_INTERFACE.h"
#include "../../MCAL/PWM/PWM_INTERFACE.h"



void MOTOR_voidInit(void)
{
	/* INITIALIZE PWM */
	PWM_init() ;

	/* SELECT PWM CHANNELS FOR MOTORS */
	//PWM_voidSelectChannel(MOTOR_A_CH) ;
	//PWM_voidSelectChannel(MOTOR_B_CH) ;


	/* SET SPEED CONTROL PINS */
	DIO_SetPinDirection(MOTOR_EN_A_PORT , MOTOR_EN_A_PIN , MOTOR_EN_A_DIRECTION) ;
	DIO_SetPinDirection(MOTOR_EN_B_PORT , MOTOR_EN_B_PIN , MOTOR_EN_B_DIRECTION) ;

	DIO_SetPinValue(MOTOR_EN_A_PORT , MOTOR_EN_A_PIN , MOTOR_EN_A_VALUE);
	DIO_SetPinValue(MOTOR_EN_B_PORT , MOTOR_EN_B_PIN , MOTOR_EN_B_VALUE);

	/* SET DIRECTION CONTROL PINS */
	DIO_SetPinDirection(MOTOR_A_IN1_PORT , MOTOR_A_IN1_PIN , MOTOR_A_IN1_DIRECTION) ;
	DIO_SetPinDirection(MOTOR_A_IN2_PORT , MOTOR_A_IN2_PIN , MOTOR_A_IN2_DIRECTION) ;
	DIO_SetPinDirection(MOTOR_B_IN3_PORT , MOTOR_B_IN3_PIN , MOTOR_B_IN3_DIRECTION) ;
	DIO_SetPinDirection(MOTOR_B_IN4_PORT , MOTOR_B_IN4_PIN , MOTOR_B_IN4_DIRECTION) ;


	/* START PWM */
	PWM_start() ;
}


void MOTOR_voidControl(u8 cpy_u8Speed, u8 cpy_u8Direction)
{
	static volatile u8 local_u8ActualSpeed ;
	local_u8ActualSpeed = (u8) ((cpy_u8Speed / MOTOR_MAX_SPEED) * 100) ;

	switch(cpy_u8Direction)
	{
		case MOTOR_OFF :
		DIO_SetPinValue(MOTOR_A_IN1_PORT , MOTOR_A_IN1_PIN , DIO_LOW) ;
		DIO_SetPinValue(MOTOR_A_IN2_PORT , MOTOR_A_IN2_PIN , DIO_LOW) ;

		DIO_SetPinValue(MOTOR_B_IN3_PORT , MOTOR_B_IN3_PIN , DIO_LOW) ;
		DIO_SetPinValue(MOTOR_B_IN4_PORT , MOTOR_B_IN4_PIN , DIO_LOW) ;
		break;

		case MOTOR_FORWARD :
		DIO_SetPinValue(MOTOR_A_IN1_PORT , MOTOR_A_IN1_PIN , DIO_HIGH) ;
		DIO_SetPinValue(MOTOR_A_IN2_PORT , MOTOR_A_IN2_PIN , DIO_LOW)  ;

		DIO_SetPinValue(MOTOR_B_IN3_PORT , MOTOR_B_IN3_PIN , DIO_HIGH) ;
		DIO_SetPinValue(MOTOR_B_IN4_PORT , MOTOR_B_IN4_PIN , DIO_LOW)  ;
		break;

		case MOTOR_BACKWARD :
		DIO_SetPinValue(MOTOR_A_IN1_PORT , MOTOR_A_IN1_PIN , DIO_LOW)  ;
		DIO_SetPinValue(MOTOR_A_IN2_PORT , MOTOR_A_IN2_PIN , DIO_HIGH) ;

		DIO_SetPinValue(MOTOR_B_IN3_PORT , MOTOR_B_IN3_PIN , DIO_LOW)  ;
		DIO_SetPinValue(MOTOR_B_IN4_PORT , MOTOR_B_IN4_PIN , DIO_HIGH) ;
		break;

		default:
		break;
	}

	/* Set Speed for each Motor */
	PWM_Generate( local_u8ActualSpeed) ;
	PWM_Generate( local_u8ActualSpeed) ;
}


void MOTOR_voidSpeed(u8 cpy_u8Speed)
{
	static volatile u8 local_u8ActualSpeed ;
	local_u8ActualSpeed = (u8) ((cpy_u8Speed / MOTOR_MAX_SPEED) * 100) ;

	/* Set Speed for each Motor */
	PWM_Generate( local_u8ActualSpeed) ;
	PWM_Generate( local_u8ActualSpeed) ;
}
