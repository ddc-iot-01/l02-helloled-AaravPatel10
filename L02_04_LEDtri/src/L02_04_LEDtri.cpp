/* 
 * Project L02_04_LEDtri
 * Author: Aarav
 * Date: 6/11/25
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(SEMI_AUTOMATIC);


SYSTEM_THREAD(ENABLED);
const int PINLED = D1 ;
const int PINDDELAY = 22.867;
int j;

void setup() {
  // Put initialization like pinMode and begin functions here
  pinMode(PINLED ,OUTPUT);
}


void loop() {
  for(j = 0 ; j <= 255; j++){
  analogWrite(PINLED, j);
   delay(PINDDELAY);
  }
   
  for(j = 255; j >= 0; j--){

  analogWrite(PINLED, j);

  delay(PINDDELAY);
}
}
