/************************************************************************************/
/************************* Author : Seham      **************************************/
/************************* Layer  : MCAL       **************************************/
/************************* SWC    : DIO        **************************************/
/************************* Version: 1.0        **************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"


#include "DIO_CONFIG.h"
#include "DIO_PRIVATE.h"
#include "DIO_INTERFACE.h"



void DIO_SetPinDirection(u8 Port , u8 Pin , u8 Direction)
{
	switch(Port)    // port selection
	{
		case DIO_PORTA: 
		if(Direction == DIO_INPUT) 
		{ 
			CLR_BIT(DDRA_REG,Pin);
		} 
		else if(Direction == DIO_OUTPUT) 
		{
			SET_BIT(DDRA_REG,Pin);
		}  
		break;
		case DIO_PORTB: 
		if(Direction == DIO_INPUT) 
		{ 
			CLR_BIT(DDRB_REG,Pin);
		} 
		else if(Direction == DIO_OUTPUT) 
		{
			SET_BIT(DDRB_REG,Pin);
		}  
		break;
		case DIO_PORTC: 
		if(Direction == DIO_INPUT) 
		{ 
			CLR_BIT(DDRC_REG,Pin);
		} 
		else if(Direction == DIO_OUTPUT) 
		{
			SET_BIT(DDRC_REG,Pin);
		}  
		break;
		case DIO_PORTD: 
		if(Direction == DIO_INPUT) 
		{ 
			CLR_BIT(DDRD_REG,Pin);
		} 
		else if(Direction == DIO_OUTPUT) 
		{
			SET_BIT(DDRD_REG,Pin);
		}  
		break;
		default:
		// " Port or Pin or Direction not valid "
		break;
	}
	
}

void DIO_SetPinValue    (u8 Port , u8 Pin , u8 Value )
{
	switch(Port)
	{
		case DIO_PORTA: 
		if(Value == DIO_HIGH)
		{ 
			SET_BIT(PORTA_REG,Pin);
		} 
		else if(Value == DIO_LOW)
		{
			CLR_BIT(PORTA_REG,Pin);
		}  
		break;
		case DIO_PORTB: 
		if(Value == DIO_HIGH)
		{ 
			SET_BIT(PORTB_REG,Pin);
		} 
		else if(Value == DIO_LOW)
		{
			CLR_BIT(PORTB_REG,Pin);
		}  
		break;
		case DIO_PORTC: 
		if(Value == DIO_HIGH)
		{ 
			SET_BIT(PORTC_REG,Pin);
		} 
		else if(Value == DIO_LOW)
		{
			CLR_BIT(PORTC_REG,Pin);
		}  
		break;
		case DIO_PORTD: 
		if(Value == DIO_HIGH)
		{ 
			SET_BIT(PORTD_REG,Pin);
		} 
		else if(Value == DIO_LOW)
		{
			CLR_BIT(PORTD_REG,Pin);
		}  
		break;
		default:
		// " Port or Pin or Value not valid "
		break;
	}
	
}

u8   DIO_GetPinValue    (u8 Port , u8 Pin )
{
	u8 Value;
	switch(Port)
	{
		case DIO_PORTA: Value = GET_BIT(PINA_REG,Pin); break;
		case DIO_PORTB: Value = GET_BIT(PINB_REG,Pin); break;
		case DIO_PORTC: Value = GET_BIT(PINC_REG,Pin); break;
		case DIO_PORTD: Value = GET_BIT(PIND_REG,Pin); break;
		default:
		break;
	}
	return Value;
}

void DIO_SetPortDirection(u8 Port , u8 Direction)
{
	switch(Port)
	{
		case DIO_PORTA: DDRA_REG = Direction; break;
		case DIO_PORTB: DDRB_REG = Direction; break;
		case DIO_PORTC: DDRC_REG = Direction; break;
		case DIO_PORTD: DDRD_REG = Direction; break;
		default:
		break;
	}
}


void DIO_SetPortValue    (u8 Port , u8 Value   )
{
	switch(Port)
	{
		case DIO_PORTA: PORTA_REG = Value; break;
		case DIO_PORTB: PORTB_REG = Value; break;
		case DIO_PORTC: PORTC_REG = Value; break;
		case DIO_PORTD: PORTD_REG = Value; break;
		default:
		break;
	}
}


