#include "AT91SAM7X256.h"
#include "pio.h"
#include "delay.h"
// Pulse Genrator
int  main(void)
{
	
PORTA_OUTPUT=0X0000000F;
	while(1){
		PORTA=0X0000000A;
	  delay_ms(50);	
	  PORTA=0X00000000;
		delay_ms(500);
		PORTA=0X00000005;	
    delay_ms(50);
		PORTA=0X00000000;
		delay_ms(500);	

	}
}



  


  