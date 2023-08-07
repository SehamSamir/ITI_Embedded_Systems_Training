/************************************************************************************/
/************************* Author : Seham      **************************************/
/************************* Layer  : MCAL         ************************************/
/************************  SWC    : EXTI         ************************************/
/************************* Version: 1.0         *************************************/



void EXTI_voidInt0Init(void)
{
	
	/*check sense control of Pin INT0 */
	
	#if     INT0_SENSE == LOW_LEVEL 
	
		CLR_BIT(MCUCR,MCUCR_ISC00);
		CLR_BIT(MCUCR,MCUCR_ISC01);
	
	
	#elif   INT0_SENSE == ON_CHANGE
		SET_BIT(MCUCR,MCUCR_ISC00);
		CLR_BIT(MCUCR,MCUCR_ISC01);
	
	
	#elif   INT0_SENSE == FALLING_EDGE
		CLR_BIT(MCUCR,MCUCR_ISC00);
		SET_BIT(MCUCR,MCUCR_ISC01);
	
	
	#elif   INT0_SENSE == RISING_EDGE
	
		SET_BIT(MCUCR,MCUCR_ISC00);
		SET_BIT(MCUCR,MCUCR_ISC01);
	
	
	#else
		#error "WRONG SENSE CONTROL CONFIGUERATION "
	

	#endif
	
	
	/* Check peripheral Interrupt Enable for Pin INT0*/
	
	
	#if INT0_INITIAL_STATE  ==  ENABLED 
	
	SET_BIT(GICR , GICR_INT0);
	
	#elif INT0_INITIAL_STATE  == DISABLED 
	
	CLR_BIT(GICR , GICR_INT0);
	
	#else
		#error "WRONG INT0_INITIAL_STATE CONFIGUERATION "
	
	
	#endif
	
	
}