#include "AT91SAM7X256.h"
#include "pio.h"
#define LCD_bits 4
#define LCD_PORT_A
#define LCD_RS 0
#define LCD_E 1
#define LCD_DB4 2
#define LCD_DB5 3
#define LCD_DB6 4
#define LCD_DB7 5
#include "LCD.h"
#include "delay.h"
int main(void)
{
lcd_init();
lcd_clear();	
lcd_gotoxy(1, 1);
lcd_putsf("Reza");
lcd_gotoxy(2, 1);
lcd_putsf("Alireza");
//lcd_putchar(char ch);
//lcd_command(char cmd);	
//lcd_clear(void);
//lcd_clear_line(char y);
//lcd_shift_left(char n);
//lcd_shift_right(char n);
//	delay_ms(100);
//lcd_putsf(char* data);
//lcd_define_char(const char *pc,char char_code);
}
