/***************************************************************************************/
/************************    Author: Seham     *****************************************/
/************************    Layer:  HAL       *****************************************/
/************************    SWC:    STEPPER   *****************************************/
/***************************************************************************************/

#include <avr/delay.h>
#include "LIB/BIT_MATH.h"
#include "LIB/STD_TYPES.h"

#include "DIO_INTERFACE.h"

#include "STEPPER_config.h"
#include "STEPPER_interface.h"
#include "STEPPER_private.h"



void HSTEPPER_voidInit()
{
	DIO_u8SetPinDirection(STEPPER_BLUE,DIO_u8PIN_OUTPUT);
	DIO_u8SetPinDirection(STEPPER_PINK,DIO_u8PIN_OUTPUT);
	DIO_u8SetPinDirection(STEPPER_YELLOW,DIO_u8PIN_OUTPUT);
	DIO_u8SetPinDirection(STEPPER_ORANGE,DIO_u8PIN_OUTPUT);
}
void HSTEPPER_voidTakeStep()
{
	u8 Port_value;
	DIO_u8GetPortValue(DIO_u8PORTC,&Port_value);
	switch (Port_value)
	{
		case 0b00000000:
		DIO_u8SetPinValue(STEPPER_BLUE,DIO_u8PIN_HIGH);
		DIO_u8SetPinValue(STEPPER_PINK,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_YELLOW,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_ORANGE,DIO_u8PIN_LOW);
		_delay_ms(5);
		break;
		case 0b00000001:
		DIO_u8SetPinValue(STEPPER_BLUE,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_PINK,DIO_u8PIN_HIGH);
		DIO_u8SetPinValue(STEPPER_YELLOW,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_ORANGE,DIO_u8PIN_LOW);
		_delay_ms(5);
		break;
		case 0b00000010:
		DIO_u8SetPinValue(STEPPER_BLUE,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_PINK,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_YELLOW,DIO_u8PIN_HIGH);
		DIO_u8SetPinValue(STEPPER_ORANGE,DIO_u8PIN_LOW);
		_delay_ms(5);
		break;
		case 0b00000100:
		DIO_u8SetPinValue(STEPPER_BLUE,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_PINK,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_YELLOW,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_ORANGE,DIO_u8PIN_HIGH);
		_delay_ms(5);
		break;
		case 0b00001000:
		DIO_u8SetPinValue(STEPPER_BLUE,DIO_u8PIN_HIGH);
		DIO_u8SetPinValue(STEPPER_PINK,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_YELLOW,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_ORANGE,DIO_u8PIN_LOW);
		_delay_ms(5);
		break;
		
	}
}

void HSTEPPER_voidTakeHalfStep()
{
	u8 Port_value;
	DIO_u8GetPortValue(DIO_u8PORTC,&Port_value);
	switch (Port_value)
	{
		case 0b00000000:
		DIO_u8SetPinValue(STEPPER_BLUE,DIO_u8PIN_HIGH);
		DIO_u8SetPinValue(STEPPER_PINK,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_YELLOW,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_ORANGE,DIO_u8PIN_HIGH);
		_delay_ms(5);
		break;
		case 0b00001001:
		DIO_u8SetPinValue(STEPPER_BLUE,DIO_u8PIN_HIGH);
		DIO_u8SetPinValue(STEPPER_PINK,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_YELLOW,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_ORANGE,DIO_u8PIN_LOW);
		_delay_ms(5);
		break;
		case 0b00000001:
		DIO_u8SetPinValue(STEPPER_BLUE,DIO_u8PIN_HIGH);
		DIO_u8SetPinValue(STEPPER_PINK,DIO_u8PIN_HIGH);
		DIO_u8SetPinValue(STEPPER_YELLOW,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_ORANGE,DIO_u8PIN_LOW);
		_delay_ms(5);
		break;
		case 0b00000011:
		DIO_u8SetPinValue(STEPPER_BLUE,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_PINK,DIO_u8PIN_HIGH);
		DIO_u8SetPinValue(STEPPER_YELLOW,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_ORANGE,DIO_u8PIN_LOW);
		_delay_ms(5);
		break;
		case 0b00000010:
		DIO_u8SetPinValue(STEPPER_BLUE,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_PINK,DIO_u8PIN_HIGH);
		DIO_u8SetPinValue(STEPPER_YELLOW,DIO_u8PIN_HIGH);
		DIO_u8SetPinValue(STEPPER_ORANGE,DIO_u8PIN_LOW);
		_delay_ms(5);
		break;
		case 0b00000110:
		DIO_u8SetPinValue(STEPPER_BLUE,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_PINK,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_YELLOW,DIO_u8PIN_HIGH);
		DIO_u8SetPinValue(STEPPER_ORANGE,DIO_u8PIN_LOW);
		_delay_ms(5);
		break;
		case 0b00000100:
		DIO_u8SetPinValue(STEPPER_BLUE,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_PINK,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_YELLOW,DIO_u8PIN_HIGH);
		DIO_u8SetPinValue(STEPPER_ORANGE,DIO_u8PIN_HIGH);
		_delay_ms(5);
		break;
		case 0b00001100:
		DIO_u8SetPinValue(STEPPER_BLUE,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_PINK,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_YELLOW,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_ORANGE,DIO_u8PIN_HIGH);
		_delay_ms(5);
		break;
		case 0b00001000:
		DIO_u8SetPinValue(STEPPER_BLUE,DIO_u8PIN_HIGH);
		DIO_u8SetPinValue(STEPPER_PINK,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_YELLOW,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(STEPPER_ORANGE,DIO_u8PIN_HIGH);
		_delay_ms(5);
		break;
		
	}
}