/************************************************************************************/
/************************* Author : Seham      **************************************/
/************************* Layer  : MCAL       **************************************/
/************************* SWC    : DIO        **************************************/
/************************* Version: 1.0        **************************************/

#ifndef DIO_PRIVATE_H
#define DIO_PRIVATE_H

#define PORTA_REG      *((u8 *)0x3B) // PORTA control registers
#define DDRA_REG       *((u8 *)0x3A)
#define PINA_REG       *((u8 *)0x39)
				       
#define PORTB_REG      *((u8 *)0x38) // PORTB control registers
#define DDRB_REG       *((u8 *)0x37)
#define PINB_REG       *((u8 *)0x36)
					   
#define PORTC_REG      *((u8 *)0x35) // PORTC control registers
#define DDRC_REG       *((u8 *)0x34)
#define PINC_REG       *((u8 *)0x33)
					   
#define PORTD_REG      *((u8 *)0x32) // PORTD control registers
#define DDRD_REG       *((u8 *)0x31)
#define PIND_REG       *((u8 *)0x30)





#endif