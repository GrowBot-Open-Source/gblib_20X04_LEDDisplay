/*********************************************************************
 * gb_20X04_LEDDisplay.h
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
#include <Arduino.h>
#ifndef gb_20X04_LEDDisplay_h
#define gb_20X04_LEDDisplay_h

class gb_20X04_LEDDisplay
{
private:
public:
    gb_20X04_LEDDisplay(){};
    ~gb_20X04_LEDDisplay(){};
    void initDisplay();
    void displayText(String text, int col, int row);
    void clearDisplay();
};

#endif