#ifndef gb_20X04_LEDDisplay_h
#define gb_20X04_LEDDisplay_h

class gb_20X04_LEDDisplay
{
private:
    byte address;
public:
    gb_20X04_LEDDisplay(byte address);
    ~gb_20X04_LEDDisplay();
    void setupLedDisplay(byte address);
    void writeText(char text, int col, int row);
    void clearDisplay();
};

#endif