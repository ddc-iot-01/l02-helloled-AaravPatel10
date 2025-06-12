/* 
 * Project lo2_helloled
 * Author: Aarav Patel
 * Date: 6/10/25
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(SEMI_AUTOMATIC);


void setup() {
 pinMode(D1,OUTPUT);
}

void loop() {
  digitalWrite(D1,HIGH);
delay(1000);
digitalWrite(D1,LOW);
delay(1000);
 
}
