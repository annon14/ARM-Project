#include "At91SAM7X256.h"
#include "delay.h"
#include "pio.h"
//#include "seg.h"
int se[]={0x00400000,0x00790000,0x00240000,0x00300000,0x00190000,0x00120000,0x00020000,0x00780000,0x00000000,0x00100000};
int A=0;
int main(void)
{
PORTA_OUTPUT=0XFFFFFFFF;
while (1)
{
PORTA=se[A];
delay_ms(500);
A++;
if (A==10) A=0;
}}

