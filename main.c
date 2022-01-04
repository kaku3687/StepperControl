#include <msp430.h> 

//Deployed on MSP430G2553
/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	//Setup the output PIN(s)
	//P2.0 - PIN 8 20-pin TSSOP

	//Set Direction
	P2DIR = BIT1; // OUTPUT

	//Set For Timer Out
	P2SEL = BIT1;
	P2SEL2 = 0x00;
	
    //Timer Control/Compare
    TA1CCR0 = 20;
    TA1CCR1 = 10;

    //Timer Control/Compare
    TA1CCTL1 |= OUTMOD_2 + CCI;
	//Setup Timer_A
	//Timer Control Register
	TA1CTL |= TASSEL_2 + MC_1 + ID_2;

	volatile unsigned int t_out;

	//P2OUT = OUT & TA0CCTL0;


}
 
