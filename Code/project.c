/*
 * File:   project.c
 * Author: ah427
 *
 * Created on 21 ?????, 2024, 08:41 ?
 */


#include <xc.h>
#include "project.h"

#define _XTAL_FREQ 80000000UL

uint8 newData[6];
void initialization(void);
const uint8 customChar[] = {
  0x0E,
  0x1B,
  0x11,
  0x11,
  0x11,
  0x11,
  0x1F,
  0x00
};

uint16 num1 = 0;
uint8 newData16[16];
void main(void) {
    initialization(); 
//    lcd_4bit_send_char(&lcd_4bit, 'A');
//    lcd_4bit_send_char_pos(&lcd_4bit, 'c', 2, 5);
//    lcd_4bit_send_string(&lcd_4bit, "MORAA");
//    lcd_convert_uint8_string(num, newData);
//    lcd_4bit_send_string_pos(&lcd_4bit, newData, 3, 6);
    
//    lcd_8bit_send_char(&lcd_8bit, 'A');
//    lcd_8bit_send_char_pos(&lcd_8bit, 'c', 2, 5);
//    lcd_8bit_send_string(&lcd_8bit, "MEROOO");
//    lcd_8bit_send_string_pos(&lcd_8bit, "Hell0o", 3, 6);
      lcd_8bit_send_custom_char(&lcd_8bit, 1, 1, customChar, 0);

    
    
    return;
}

void initialization(void){ 
    ecu_initialization();
}
