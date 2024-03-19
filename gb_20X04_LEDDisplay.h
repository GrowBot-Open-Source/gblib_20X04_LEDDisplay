#ifndef gb_20X04_LEDDisplay_h
#define gb_20X04_LEDDisplay_h

class gb_20X04_LEDDisplay
{
private:
    byte _address;
    void send4bits(byte value);
    void PCF8574_sendByte(byte data);

public:
    gb_20X04_LEDDisplay(byte address);
    ~gb_20X04_LEDDisplay();
    void setupLedDisplay();
    void initLedDisplay();
    void writeText(unsigned char text[]);
    void writeChar(byte mode, byte value);
};

#endif