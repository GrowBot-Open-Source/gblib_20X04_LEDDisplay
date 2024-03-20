#include <Arduino.h>
#include "gb_20X04_LEDDisplay.h"
#include <LiquidCrystal_I2C.h>

gb_20X04_LEDDisplay::gb_20X04_LEDDisplay(byte address)
{
    this->address = address;
}

void gb_20X04_LEDDisplay::setupLedDisplay(byte address)
{
    LiquidCrystal_I2C lcd(byte address, 20, 4);
    lcd.init();
    lcd.backlight();
}

void gb_20X04_LEDDisplay::writeText(char text, int col, int row))
{
    lcd.setCursor(col, row);
    lcd.print(text);
}

void gb_20X04_LEDDisplay::clearDisplay()
{
    lcd.clear();
}