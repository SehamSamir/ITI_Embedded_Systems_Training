/*
 * main.c
 *
 *  Created on: Aug 15, 2022
 *      Author: Seham
 */




#include "STD_TYPES.h"

//#include "avr/delay.h"

#include "DIO_INTERFACE.h"
#include "LCD_INTERFACE.h"

int main ()
{

	LCD_Init();

	LCD_GoToXY(0 , 4);

	LCD_WriteString("SEHAM");



	while (1)

	{


	}


	//_delay_ms(100);


}
