/*
 * main.c
 *
 *  Created on: Aug 16, 2022
 *      Author: Seham
 */

#include "STD_TYPES.h"

#include "DIO_INTERFACE.h"
#include "KPD_interface.h"
#include "KPD_config.h"

#include "LCD_INTERFACE.h"



void main ()

{

	u8 Local_u8Key;


	/* column pins direction as output */
	DIO_SetPinDirection(KPD_PORT,KPD_COLUMN0_PIN,DIO_OUTPUT);
	DIO_SetPinDirection(KPD_PORT,KPD_COLUMN1_PIN,DIO_OUTPUT);
	DIO_SetPinDirection(KPD_PORT,KPD_COLUMN2_PIN,DIO_OUTPUT);
	DIO_SetPinDirection(KPD_PORT,KPD_COLUMN3_PIN,DIO_OUTPUT);


	/* Row pins direction as input */
	DIO_SetPinDirection(KPD_PORT,KPD_ROW0_PIN,DIO_INPUT);
	DIO_SetPinDirection(KPD_PORT,KPD_ROW1_PIN,DIO_INPUT);
	DIO_SetPinDirection(KPD_PORT,KPD_ROW2_PIN,DIO_INPUT);
	DIO_SetPinDirection(KPD_PORT,KPD_ROW3_PIN,DIO_INPUT);


	DIO_SetPortValue(KPD_PORT,DIO_PORT_VAL);   /* note */



	LCD_Init();



	while (1)


	{
		Local_u8Key=KPD_u8GetPressedKey();

		while (Local_u8Key==0xff)     // busy wait till the user press the key
		{

			Local_u8Key=KPD_u8GetPressedKey();

		}

	     /* numbers from 0 to 9 */
			LCD_WriteData(Local_u8Key + '0');
	}



}
