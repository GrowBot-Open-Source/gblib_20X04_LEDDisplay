#include <Arduino.h>
#include "gb_20X04_LEDDisplay.h"

gb_20X04_LEDDisplay::gb_20X04_LEDDisplay(byte address){
    _address = address;
}

void gb_20X04_LEDDisplay::initLedDisplay()
{
    I2C_init();         
    writeChar(0, 0x33);
    delay_ms();
    writeChar(0, 0x32);
    delay_ms();
    writeChar(0, 0x28); 
    delay_ms();
    writeChar(0, 0x0C); 
    writeChar(0, 0x01);
    delay_ms();
    writeChar(0, 0x06);
}

void gb_20X04_LEDDisplay::setupLedDisplay(){
    initLedDisplay();
    delay(1000);
}

void gb_20X04_LEDDisplay::writeText(unsigned char text []){
    byte i = 0;
    while (text[i] != '\0')
    {
        writeChar(1, text[i]);
        i++;
    }
}

void gb_20X04_LEDDisplay::writeChar(byte mode, byte value){
    byte highnib = value & 0xF0;       
    byte lownib = (value << 4) & 0xF0; 
    send4bits(highnib | mode);         
    send4bits(lownib | mode);
}

void gb_20X04_LEDDisplay::send4bits(byte value){
    PCF8574_sendByte(value);
    PCF8574_sendByte(value | 0b00000100);  
    delay_short();                         
    PCF8574_sendByte(value & ~0b00000100); 
    delay_us();
}

void gb_20X04_LEDDisplay::PCF8574_sendByte(byte data){
    I2C_start();         
    I2C_write(_address); 
    I2C_write(data);     
    I2C_stop();          
}