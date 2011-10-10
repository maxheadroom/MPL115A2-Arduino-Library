/****************************
 * Read MPL115A2
 *  An example sketch that prints the
 *  local pressure to the PC's serial port
 *
 *  Tested with the MPL115A2-Breakout
 *  Pressure Sensor from Misenso Electronics
 *****************************/

#include <Wire.h>
#include <MPL115A2.h>

void setup()
{
  MPL115A2.begin();
  MPL115A2.shutdown();
  Serial.begin(9600);
}

void loop()
{
  Serial.print("Pressure(kPa): ");
  Serial.println(MPL115A2.pressure());
  MPL115A2.shutdown();
  
  delay(1000);
}
