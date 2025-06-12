/* 
 * Project L02_helloLEDanalog
 * Author: Aarav Patel
 * Date: 6/11/25
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(SEMI_AUTOMATIC);


SYSTEM_THREAD(ENABLED);
const int  REDLED = D1;
const int  REDDLAY = 5000;

void setup() {

  // Put initialization like pinMode and begin functions here
  pinMode(REDLED, OUTPUT);
}

void loop() {
  
  analogWrite(REDLED ,16);
  delay(REDDLAY);
analogWrite(REDLED, 16);
delay(REDDLAY);
}