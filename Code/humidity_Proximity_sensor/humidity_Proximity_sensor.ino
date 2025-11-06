#include "Adafruit_VCNL4200.h" 
#include <Adafruit_AHTX0.h>

Adafruit_VCNL4200 vcnl4200; //proximity sensor 
Adafruit_AHTX0 aht;         //RH sensor 

void setup() {
  Serial.begin(115200);
  while (!Serial) {
    delay(10); // wait for native USB
  }

  Serial.println("Adafruit AHT20 & VCNL4200 demo!");
  //get VCNL Sensor
  if (!vcnl4200.begin()) {
    Serial.println("Could not find a valid VCNL4200 sensor, check wiring!");
    while (1) {
      delay(10);
    }
    Serial.println("VCNL4200 found!");

  }
  // get RH Sensor 
  if (! aht.begin()) {
    Serial.println("Could not find AHT? Check wiring");
    while (1) delay(10);
  }
  Serial.println("AHT20 (RH Sensor) found");

  //Proximity sensor Setup
  vcnl4200.setALSshutdown(false);
  vcnl4200.setALSIntegrationTime(VCNL4200_ALS_IT_100MS);
  vcnl4200.setALSPersistence(VCNL4200_ALS_PERS_2);

  vcnl4200.setProxShutdown(false);
  vcnl4200.setProxHD(false);
  vcnl4200.setProxLEDCurrent(VCNL4200_LED_I_200MA);
  vcnl4200.setProxIntegrationTime(VCNL4200_PS_IT_8T);

}

void loop() {
  uint16_t proxData = vcnl4200.readProxData();
  Serial.print("Prox Data: ");
  Serial.println(proxData);
  // Read the ambient light sensor (ALS) data
  uint16_t alsData = vcnl4200.readALSdata();
  Serial.print("ALS Data: ");
  Serial.print(alsData);
  // Read the raw white sensor data
  uint16_t whiteData = vcnl4200.readWhiteData();
  Serial.print(", White Data: ");
  Serial.println(whiteData);
  
  //RH Sensor
  sensors_event_t humidity, temp;
  aht.getEvent(&humidity, &temp);// populate temp and humidity objects with fresh data
  Serial.print("Temperature: "); Serial.print(temp.temperature); Serial.println(" degrees C");
  Serial.print("Humidity: "); Serial.print(humidity.relative_humidity); Serial.println("% rH");

  delay(1000);

}
