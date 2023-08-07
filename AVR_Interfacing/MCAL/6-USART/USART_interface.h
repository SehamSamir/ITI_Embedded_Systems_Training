/***************************************************************************************/
/************************    Author: Seham     *****************************************/
/************************    Layer:  MCAL      *****************************************/
/************************    SWC:    USART     *****************************************/
/***************************************************************************************/

#ifndef USART_INTERFACE_H_
#define USART_INTERFACE_H_

void USART_Init ();

void USART_voidSend(u8 Copy_u8data);

u8 USART_u8Receive(void);





#endif