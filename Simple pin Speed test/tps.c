#include "AT91SAM7X256.h"
#include "pio.h"
#include "delay.h"
// Generate Pulse

int main(void){
	PORTA_OUTPUT=0x0000000F;// 
	while(1){
		SET_PORTA=PA0;
//		delay_us(1);
		RST_PORTA=PA0;
//		delay_us(1);
	}
}
