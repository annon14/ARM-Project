#include "AT91SAM7X256.h"
#include "pio.h"
#include "stdio.h"
#include "delay.h"
#include "adc.h"
#define LCD_bits 4
#define LCD_PORT_A
#define LCD_RS 0
#define LCD_E 1
#define LCD_DB4 2
#define LCD_DB5 3
#define LCD_DB6 4
#define LCD_DB7 5
#include "LCD.h"

int main (void)
{
	float lm35; //because number after decimation change to float
	float lm35var;
//	int adc=0;
	char buffer[4];
	lcd_init();
	config_adc(0x20);
	while(1)
	{
	start_adc();
		lm35=read_adc(5);
		lm35var=lm35;
//change lm35 input to temp
// (lm35value*3300)/1023--then-->/10 change to temp

		lm35*=0.0682;
		lcd_gotoxy(1,1);
		lcd_putsf("Temp");
		sprintf(buffer , "%f" , lm35);//
		lcd_putsf(buffer);
		lcd_gotoxy(2,1);
		lcd_putsf("LM35 var");
		sprintf(buffer , "%f" , lm35var);//
		lcd_putsf(buffer);
//		lcd_puts(adc);
		delay_ms(200);
		lcd_clear();
	}
}