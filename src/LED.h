#include <Arduino.h>

class LED
{
  public:
    LED(int pin, int r, int g, int b);
    void setColour(int rV, int gV, int bV);
  private:
    int _pin, _r, _g, _b, rVal = 0, gVal = 0, bVal = 0;
};

LED::LED(int pin, int r, int g, int b)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
  _r = r;
  _g = g;
  _b = b;
}

void LED::setColour(int rV, int gV, int bV) {
  analogWrite(_r, rV);
  analogWrite(_g, gV);
  analogWrite(_b, bV)

}
