/* 
 * Project L02_05_hellosinled
 * Author: Aarav Patel
 * Date: 6/11/25
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"
#include "math.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(SEMI_AUTOMATIC);


SYSTEM_THREAD(ENABLED);

const int LEDPIN = D1;
 float t;
 const float  frequency = 0.2;
 float brightnessFloat;

 
void setup() {
  // Put initialization like pinMode and begin functions here
  pinMode(LEDPIN,OUTPUT);
}

void loop() {
  t = millis()/ 1000.0;
   brightnessFloat = 127.5 * (sin(2 * M_PI * frequency * t) + 1); 
analogWrite(LEDPIN,brightnessFloat);
}
