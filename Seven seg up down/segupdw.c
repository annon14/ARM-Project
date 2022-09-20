#include "At91SAM7X256.h"
#include "delay.h"
#include "pio.h"

int seg[]={0x00400000,0x00790000,0x00240000,0x00300000,0x00190000,0x00120000,0x00020000,0x00780000,0x00000000,0x00100000};
int A=0;
int B=0;
int main(void)
{
PORTA_OUTPUT=0X00FF0000;
while (1)
{
	B=0;
	for (A=0;A<=8;A++)
	{
	 PORTA=seg[B];
   delay_ms(500);
	 B++;
	}
  for (A=0;A<=8;A++)
	{
		
	 PORTA=seg[B];
   delay_ms(500);
	 B--;
	}
}}
