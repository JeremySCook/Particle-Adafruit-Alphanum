// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_LEDBackpack_RK.h>

// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_GFX_RK.h>



//test 2

Adafruit_AlphaNum4 alpha4 = Adafruit_AlphaNum4();

void setup() {
  
  alpha4.begin(0x70);  // pass in the address

  alpha4.writeDigitRaw(3, 0x0);
  alpha4.writeDigitRaw(0, 0xFFFF);
  //alpha4.writeDigitRaw(1, 0xFFFF);
  alpha4.writeDigitRaw(2, 0xFFFF);
  //alpha4.writeDigitRaw(3, 0xFFFF);
  alpha4.writeDisplay();
  
 // alpha4.clear();
 // alpha4.writeDisplay();

}


char displaybuffer[4] = {' ', ' ', ' ', ' '};

void loop() {
}
