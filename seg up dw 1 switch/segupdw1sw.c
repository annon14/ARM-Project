#include "At91SAM7X256.h"
#include "delay.h"
#include "pio.h"
// up and down number on a 7 segment with two switches
int seg[]={0x00400000,0x00790000,0x00240000,0x00300000,0x00190000,0x00120000,0x00020000,0x00780000,0x00000000,0x00100000};
int A=0;
int B=0;
int main(void)
{
	PORTA_OUTPUT=0X00FF0000;
  PORTA_INPUT=0X0000FF00;
	B=0;
  A=0;
	while (1)
	{
		A=0;
//********************************Count down part**********************************		
		while (PINA(10)==0)
			{
				A++;
		    delay_ms(100);
		    if (A>=10) 
				{
					B--;
					A=0;
					if (B<0) B=0;
					PORTA=seg[B];
				}
				
				
	    }

	
	PORTA=seg[B]; 
	delay_ms(100);
	if (PINA(10)==0) B++;// Count up
	if (B<0) B=0;
	if (B>9) B=9;	
	
}
}
