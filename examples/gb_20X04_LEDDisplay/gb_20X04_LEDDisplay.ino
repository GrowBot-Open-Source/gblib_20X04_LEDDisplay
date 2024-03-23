#include <gb_20X04_LEDDisplay.h>

gb_20X04_LEDDisplay lcdDisplay;

void setup()
{
    Serial.begin(9600);
    lcdDisplay.initDisplay();
}

void loop()
{
    lcdDisplay.clearDisplay();
    lcdDisplay.displayText("Testing", 0, 0);
    delay(1000);
    lcdDisplay.clearDisplay();
    lcdDisplay.displayText("Testing", 0, 1);
    delay(1000);
    lcdDisplay.clearDisplay();
    lcdDisplay.displayText("Testing", 0, 2);
    delay(1000);
}