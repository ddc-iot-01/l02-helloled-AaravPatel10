/* 
 * Project L02_02_helloLedvar
 * Author: Aarav Patel
 * Date: 6/10/25
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(SEMI_AUTOMATIC);

SYSTEM_THREAD(ENABLED);

SerialLogHandler logHandler(LOG_LEVEL_INFO);
 const int LEDPIN = D1;
 const int LEDDELAY  = 1000;
 int i;

void setup() {
 pinmode(LEDPIN, OUTPUT);
 i = 100;
}

void loop() {
  digitalWrite(LEDPIN, HIGH);
  Delay(LEDDELAY);
  digitalWrite(LEDPIN, LOW);
  Delay(LEDDELAY + i);
  i = i + 1--;
}
