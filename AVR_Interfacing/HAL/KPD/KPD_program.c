/*************************************************************************************/
/************************* Author : Seham       **************************************/
/************************* Layer  : HAL         **************************************/
/************************* SWC    : KPD         **************************************/
/*************************************************************************************/


/************************** Includes ***********************/
#include "STD_TYPES.h"
#include "DIO_INTERFACE.h"
#include "KPD_interface.h"
#include "KPD_config.h"
#include "KPD_private.h"
/**********************************************************/


u8 KPD_u8GetPressedKey(void)

{
	/*indication for the pressed key value*/
	u8 Local_u8PressedKey=KPD_NO_PRESSED_KEY;

	u8 Local_u8ColumnIdx,Local_u8RowIdx;

	static u8 Local_u8KPDColumnArr[COLUMN_NUM]={ KPD_COLUMN0_PIN, KPD_COLUMN1_PIN, KPD_COLUMN2_PIN, KPD_COLUMN3_PIN };
	static u8 Local_u8KPDRowArr[ROW_NUM]={KPD_ROW0_PIN , KPD_ROW1_PIN , KPD_ROW2_PIN ,KPD_ROW3_PIN };

	static u8 Local_u8KPDArr[ROW_NUM][COLUMN_NUM]= KPD_ARR_VAL;




	for ( Local_u8ColumnIdx = 0 ; Local_u8ColumnIdx < COLUMN_NUM ; Local_u8ColumnIdx++)
	{

		/* Activate Current Column = set it to LOW */
		DIO_SetPinValue(KPD_PORT,Local_u8KPDColumnArr[Local_u8ColumnIdx],DIO_LOW);

		for (Local_u8RowIdx=0 ; Local_u8RowIdx < ROW_NUM ;  Local_u8RowIdx++ )
		{

			/* read/get the current row */
			DIO_GetPinValue(KPD_PORT,Local_u8KPDRowArr[Local_u8RowIdx]);


			/*check if any switch is pressed */
			if(DIO_GetPinValue(KPD_PORT,Local_u8KPDRowArr[Local_u8RowIdx]) == DIO_LOW)
			{

				Local_u8PressedKey=Local_u8KPDArr[Local_u8RowIdx][Local_u8ColumnIdx];

				/*busy waiting  until the switch is released */

				while ( DIO_GetPinValue(KPD_PORT,Local_u8KPDRowArr[Local_u8RowIdx]) == DIO_LOW )
				{
					DIO_GetPinValue(KPD_PORT,Local_u8KPDRowArr[Local_u8RowIdx]);

				}


				return Local_u8PressedKey;


			}

		}

		/*deactivate the current column = set it to high */
		DIO_SetPinValue(KPD_PORT,Local_u8KPDColumnArr[Local_u8ColumnIdx],DIO_HIGH);

	}



	return Local_u8PressedKey;

}
