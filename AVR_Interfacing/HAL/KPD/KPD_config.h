/*************************************************************************************/
/************************* Author : Seham       **************************************/
/************************* Layer  : HAL         **************************************/
/************************* SWC    : KPD         **************************************/
/*************************************************************************************/


#ifndef KPD_CONFIG_H_
#define KPD_CONFIG_H_


#define     KPD_PORT                    DIO_PORTD

#define     KPD_NO_PRESSED_KEY            0xff

#define     KPD_ARR_VAL          { {7,8,9,'/'} , {5,6,5,8} , {9,10,11,12} , {13,14,15,16}  }


/* Configure Pins of Columns in our MC */
#define KPD_COLUMN0_PIN           DIO_PIN0
#define KPD_COLUMN1_PIN           DIO_PIN1
#define KPD_COLUMN2_PIN           DIO_PIN2
#define KPD_COLUMN3_PIN           DIO_PIN3


/* Configure Pins of Rows in our MC */
#define KPD_ROW0_PIN              DIO_PIN4
#define KPD_ROW1_PIN              DIO_PIN5
#define KPD_ROW2_PIN              DIO_PIN6
#define KPD_ROW3_PIN              DIO_PIN7



#endif
