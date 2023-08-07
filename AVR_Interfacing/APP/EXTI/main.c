/*
 * main.c
 *
 *  Created on: Aug 18, 2022
 *      Author: Seham
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_INTERFACE.h"
#include "EXTI_interface.h"
#include "GIE_interface.h"




void main (void)

{

	EXTI_voidInt0Init();

	GIE_voidEnable();


	/* INT0  Pulled up*/
	DIO_SetPinDirection(DIO_PORTD,DIO_PIN2,DIO_INPUT);
	DIO_SetPinValue(DIO_PORTD,DIO_PIN2,DIO_HIGH);

	/*Led pin*/
	DIO_SetPinDirection(DIO_PORTA,DIO_PIN0,DIO_OUTPUT);


	while (1)

	{

	}




}


void __vector_1(void) __attribute__((signal));
void __vector_1(void)


{

	DIO_SetPinValue(DIO_PORTA,DIO_PIN0,DIO_HIGH);

}
