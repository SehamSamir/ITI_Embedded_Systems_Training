/***************************************************************************************/
/************************    Author: Seham     *****************************************/
/************************    Layer:  MCAL      *****************************************/
/************************    SWC:    USART     *****************************************/
/***************************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "USART_interface.h"
#include "USART_register.h"
#include "USART_config.h"


void USART_Init (void)
{

	u8 Local_u8Value= 0;

	CLR_BIT(UCSRA,UCSRA_U2X);  		       // normal speed
	CLR_BIT(UCSRA,UCSRA_MPCM);
	UBRRL=51;                 			   // baud rate set to 9600bps

	SET_BIT(Local_u8Value,UCSRC_URSEL);    // using UCSRC not UBBRH

	CLR_BIT(Local_u8Value,UCSRC_UMSEL);    // Asynchon

	CLR_BIT(Local_u8Value,UCSRC_UPM1);     // no parity
	CLR_BIT(Local_u8Value,UCSRC_UPM0);

	SET_BIT(Local_u8Value,UCSRC_USBS);     // two stop bit

	SET_BIT(Local_u8Value,UCSRC_UCSZ1);    // using 8 bit data
	SET_BIT(Local_u8Value,UCSRC_UCSZ0);    // using 8 bit dataR
	CLR_BIT(UCSRB,UCSRB_UCSZ2);

	UCSRC =Local_u8Value;



	SET_BIT(UCSRB,UCSRB_TXEN);            // transmitter enable
	SET_BIT(UCSRB,UCSRB_RXEN);            // receiver   enable

/*

	// Set BaudRate -> 9600/16MhZ
	UBRRL = 51;
	UBRRH = 0;
	// Set Frame Format -> 8 data, 1 stop, No Parity
	UCSRC = 0x86;
	// Enable RX and TX
	UCSRB = 0x18;
*/
}

void USART_voidSend(u8 Copy_u8data)
{
	while(GET_BIT(UCSRA,UCSRA_UDRE)==0);   //wait until the transmission buffer(UDRE) is empty(ready to receive data)
	UDR=Copy_u8data;

}


u8 USART_u8Receive(void)
{

	while(GET_BIT(UCSRA,UCSRA_RXC)==0);


	return UDR;
}



