#include "AT91SAM7X256.h"
#include "pio.h"
#include "delay.h"
// Switch: if button press start led blinking when push the button for 3 second program change to another LED Blinking & revese.
int  main(void)
{	
	int a=0;
	int b=0;
  PORTA_OUTPUT=0x000000FF;
	PORTA_INPUT=0x00000F00;
	//Test Pulse LED
	PORTA=0x0000000F;
	delay_ms(50);	
  PORTA=0x00000000;
  
	
	while(1){
	//***************************Start LED blinking ******************************	
  if (PINA(11)==0) 
		{
			PORTA=0x00000001;
			a=1;
		}
	while (a==1)
		{
			delay_ms(500);
			PORTA=PORTA*2;
			if (PORTA==0x00000010)
				{
			  PORTA=0x00000001;
		    }
			if (PINA(11)==0) b++;//Counting about 3 second
			if (b==5) a=2;
		}
		
		b=0;// Reset counter variable to start counter part from first
			//***************************Second mode LED blinking ******************************	
		while (a==2)
		{		
			PORTA=0x0000000A;
			delay_ms(250);
			PORTA=0x00000005;
			delay_ms(250);
			if (PINA(11)==0) b++;//Counting about  second
			if (b==4) 
			{
				PORTA=0x00000001;
				a=1;
			}
			
		}
		b=0;
	}
}
