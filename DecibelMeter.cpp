#include "DecibelMeter.h"

DecibelMeter::DecibelMeter() {
  _deviceAddress = 0x48; // Default I2C address
  _dbRegister = 0x0A;    // Default register address
}

void DecibelMeter::begin() {
  Wire.begin(); // Start I2C communication
}

float DecibelMeter::readDecibels() {
  Wire.beginTransmission(_deviceAddress);
  Wire.write(_dbRegister);
  Wire.endTransmission();

  Wire.requestFrom(_deviceAddress, (byte)1);
  if (Wire.available()) {
    return Wire.read(); // Assuming the decibel value is directly readable as a byte
  }
  return -1; // Error value
}

void DecibelMeter::setDeviceAddress(byte address) {
  _deviceAddress = address;
}

void DecibelMeter::setRegisterAddress(byte reg) {
  _dbRegister = reg;
}
