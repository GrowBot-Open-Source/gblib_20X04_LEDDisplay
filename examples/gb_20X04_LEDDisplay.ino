#include <gb_20X04_LEDDisplay.h>

gb_20X04_LEDDisplay display(0x27);

void setup()
{
    display.setupLedDisplay(0x27);
    display.writeText("Hello World", 0, 0);
}

void loop() {}
