/* Arduino Object Oriented Programming
 * Crafted on 2016/01/30
 * This sketch is defining a simple class that can be helpful to treat PINs as ojects. */

#include "digitalPin.h" // to make the code more readable every class should be stored in separate files

DigitalPin builtinLED(13); // instantiating from the DigitalPin class

void setup()
{
  builtinLED.begin(); 
}

void loop()
{
  builtinLED.on();
  delay(10);
  builtinLED.off();
  delay(50);
  builtinLED.on();
  delay(20);
  builtinLED.off();
  delay(500);
}
