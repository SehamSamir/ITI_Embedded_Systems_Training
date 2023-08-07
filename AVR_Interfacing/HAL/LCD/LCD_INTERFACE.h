/***************************************************************************************/
/************************    Author: Seham     *****************************************/
/************************    Layer:  HAL       *****************************************/
/************************    SWC:    LCD       *****************************************/
/***************************************************************************************/

#ifndef LCD_INTERFACE_H
#define LCD_INTERFACE_H

/************************** Includes ***********************/
#include "STD_TYPES.h"


/************************* FUNCTIONS **********************/
void LCD_Init(void);

void LCD_WriteCommand(u8 Command);

void LCD_WriteData(u8 Data);

void LCD_WriteString(char *Ptr);


void LCD_GoToXY(u8 X_Pos , u8 Y_Pos);

/**********************************************************/

#endif