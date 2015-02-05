// This #include statement was automatically added by the Spark IDE.
#include "Adafruit_MPL115A.h"



int InputPin = D2;
int val = 0;

bool remote = false;

//  instantiate the Sensor
Adafruit_MPL115A2 sensor1;

double temp = 0;
char* message = "Hello";


void setup() {

	// initiate the I2C bus
    Wire.begin();
	// register new function with Spark Cloud for the temperature
    Spark.variable("temp", &temp, DOUBLE);
	// initialze the sensor
    sensor1.begin();

}


void loop() {
	// read temperature from the sensor
	temp = sensor1.getTemperature();
}
