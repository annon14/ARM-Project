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
	float adc; //because number after decimation change to float
//	int adc=0;
	char buffer[4];
	lcd_init();
	config_adc(0x10);
	while(1)
	{
	start_adc();
		adc=read_adc(4);
		adc/=310;
		lcd_gotoxy(1,1);
		lcd_putsf("POT VAR");
		lcd_gotoxy(2,1);
		sprintf(buffer , "%f" , adc);//
		lcd_putsf(buffer);
//		lcd_puts(adc);
		delay_ms(100);
		lcd_clear();
	}
}