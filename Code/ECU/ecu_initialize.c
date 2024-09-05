#include "ecu_initialize.h"

lcd_4bit_mode lcd_4bit = {
    .rs.Direction = GPIO_OUTPUT,
    .rs.Logic = GPIO_LOW,
    .rs.Port = GPIO_PORTC,
    .rs.Pin = GPIO_PIN0,
    
    .en.Direction = GPIO_OUTPUT,
    .en.Logic = GPIO_LOW,
    .en.Port = GPIO_PORTC,
    .en.Pin = GPIO_PIN1,

    .data[0].Direction = GPIO_OUTPUT,
    .data[0].Logic = GPIO_LOW,
    .data[0].Port = GPIO_PORTC,
    .data[0].Pin = GPIO_PIN2,
    
    .data[1].Direction = GPIO_OUTPUT,
    .data[1].Logic = GPIO_LOW,
    .data[1].Port = GPIO_PORTC,
    .data[1].Pin = GPIO_PIN3,
    
    .data[2].Direction = GPIO_OUTPUT,
    .data[2].Logic = GPIO_LOW,
    .data[2].Port = GPIO_PORTC,
    .data[2].Pin = GPIO_PIN4,
    
    .data[3].Direction = GPIO_OUTPUT,
    .data[3].Logic = GPIO_LOW,
    .data[3].Port = GPIO_PORTC,
    .data[3].Pin = GPIO_PIN5,
            
};

lcd_8bit_mode lcd_8bit = {
    .rs.Direction = GPIO_OUTPUT,
    .rs.Logic = GPIO_LOW,
    .rs.Port = GPIO_PORTC,
    .rs.Pin = GPIO_PIN6,
    
    .en.Direction = GPIO_OUTPUT,
    .en.Logic = GPIO_LOW,
    .en.Port = GPIO_PORTC,
    .en.Pin = GPIO_PIN7,

    .data[0].Direction = GPIO_OUTPUT,
    .data[0].Logic = GPIO_LOW,
    .data[0].Port = GPIO_PORTD,
    .data[0].Pin = GPIO_PIN0,
    
    .data[1].Direction = GPIO_OUTPUT,
    .data[1].Logic = GPIO_LOW,
    .data[1].Port = GPIO_PORTD,
    .data[1].Pin = GPIO_PIN1,
    
    .data[2].Direction = GPIO_OUTPUT,
    .data[2].Logic = GPIO_LOW,
    .data[2].Port = GPIO_PORTD,
    .data[2].Pin = GPIO_PIN2,
    
    .data[3].Direction = GPIO_OUTPUT,
    .data[3].Logic = GPIO_LOW,
    .data[3].Port = GPIO_PORTD,
    .data[3].Pin = GPIO_PIN3,
    
    .data[4].Direction = GPIO_OUTPUT,
    .data[4].Logic = GPIO_LOW,
    .data[4].Port = GPIO_PORTD,
    .data[4].Pin = GPIO_PIN4,
    
    .data[5].Direction = GPIO_OUTPUT,
    .data[5].Logic = GPIO_LOW,
    .data[5].Port = GPIO_PORTD,
    .data[5].Pin = GPIO_PIN5,
    
    .data[6].Direction = GPIO_OUTPUT,
    .data[6].Logic = GPIO_LOW,
    .data[6].Port = GPIO_PORTD,
    .data[6].Pin = GPIO_PIN6,
    
    .data[7].Direction = GPIO_OUTPUT,
    .data[7].Logic = GPIO_LOW,
    .data[7].Port = GPIO_PORTD,
    .data[7].Pin = GPIO_PIN7,
};

void ecu_initialization(void)
{
    lcd_4bit_initialize(&lcd_4bit);
    lcd_8bit_initialize(&lcd_8bit);
}

