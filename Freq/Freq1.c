#include "AT91SAM7X256.h"
#include "pio.h"
#include "delay.h"
// Generate Pulse

int main(void){
	PORTA_OUTPUT=0xFFFFFFFF;// 
	while(1){
		PORTA=0x00000001;// value to port A
		delay_ms(25);
		PORTA=0x00000000;
		delay_ms(975);
	};
};
