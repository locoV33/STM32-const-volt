#ifndef I2C_LCD_H
#define I2C_LCD_H

#include "stm32l0xx_hal.h"

// Ekrano I2C adresas. Dažniausiai buna 0x27 arba 0x3F. 
// Kadangi HAL biblioteka reikalauja adreso pastumto per 1 bita, dauginame iš 2.
#define LCD_ADDR (0x27 << 1) 

void lcd_init(void);
void lcd_send_cmd(char cmd);
void lcd_send_data(char data);
void lcd_send_string(char *str);
void lcd_put_cur(int row, int col);
void lcd_clear(void);

#endif