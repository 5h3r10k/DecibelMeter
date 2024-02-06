#ifndef DecibelMeter_h
#define DecibelMeter_h

#include "Arduino.h"
#include <Wire.h>

class DecibelMeter {
  public:
    DecibelMeter();                    // Default constructor
    void begin();                      // Initialize the sensor
    float readDecibels();              // Method to read decibels
    void setDeviceAddress(byte address); // Setter for device address
    void setRegisterAddress(byte reg);  // Setter for register address

  private:
    byte _deviceAddress;              // I2C address of the decibel meter
    byte _dbRegister;                 // Register to read the decibel value
};

#endif
