#include <Wire.h>
#include "DecibelMeter.h"

DecibelMeter dbMeter; // Create DecibelMeter object with default settings

void setup() {
  Serial.begin(9600);
  dbMeter.setDeviceAddress(0x48); // Optional, set if different from default
  dbMeter.setRegisterAddress(0x0A); // Optional, set if different from default
  dbMeter.begin();
}

void loop() {
  float decibels = dbMeter.readDecibels();
  if (decibels >= 0) {
    Serial.print("Decibel Level: ");
    Serial.println(decibels);
  } else {
    Serial.println("Error reading decibel level");
  }
  delay(500);
}
