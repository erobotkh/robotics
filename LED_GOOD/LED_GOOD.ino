#include <LED_K1.h>
LED leds(2,3,4,5,6,7,8,9,10,11,12);
void setup() {
  leds.setPIN();
}

void loop() {
  leds.showLED();
}
