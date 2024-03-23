/*********************************************************************
 * gb_20X04_LEDDisplay.cpp
 *
 * Copyright (C)    20124   [GrowBot Open Source],
 * GitHub Link :XXXXX
 * This Library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Description:Implement a 20x4 LED Display into the growbot system
 *
 * Product Links：
 *
 * Sensor driver pin：0x27
 * Connection:
 * VCC-5v
 * GND-GND
 * SCL-SCL(analog pin 5)
 * SDA-SDA(analog pin 4)
 *
 * author  :  GrowBot
 * version :  V1.0
 * date    :  2024-05-14
 **********************************************************************/

#include "gb_20X04_LEDDisplay.h"
#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4); // for an 20x4 LED display that sends via I2C 0x27

void gb_20X04_LEDDisplay::initDisplay()
{
    lcd.init(); // initialize the lcd
    // Print a message to the LCD.
    lcd.backlight();
}

void gb_20X04_LEDDisplay::displayText(String text, int col, int row)
{
    lcd.print(text);
    lcd.setCursor(col, row);
}

void gb_20X04_LEDDisplay::clearDisplay()
{
    lcd.clear();
}