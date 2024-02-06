# DecibelMeter Library for Arduino

## Overview

The DecibelMeter library provides an easy and efficient way to integrate decibel level measurement into Arduino projects using the [PCB Artists I2C decibel meter sensor](https://pcbartists.com/product/i2c-decibel-sound-level-meter-module/). It abstracts the complexity of I2C communication into a simple interface that can be used to read sound levels directly in decibels.

## Features

- Simple interface to read decibel levels from an I2C sensor.
- Default support for common I2C address and register but allows for customization.
- Lightweight and easy to integrate into various Arduino-based projects.

## Installation

1. Navigate to the [GitHub repository](https://github.com/5h3r10k/DecibelMeter).
2. Locate the "Code" button near the top right of the page and click it.
3. From the dropdown, select "Download ZIP".
4. Save the ZIP file to your computer
5. Open the Arduino IDE and navigate to `Sketch > Include Library > Add .ZIP Library...`.
6. Select the ZIP file you downloaded and click "Open".
7. Restart the Arduino IDE to see the library in the list of installed

Optionally, you can also install the library manually by following these steps:

5. Extract the ZIP and move the `DecibelMeter` folder to your Arduino IDE's `libraries` directory.
6. Restart the Arduino IDE to see the library in the list of installed libraries.

## API Reference

- **DecibelMeter()**: Constructor. Initializes a DecibelMeter object with default settings.
- **void begin()**: Initializes the library and prepares the sensor for reading decibel levels.
- **float readDecibels()**: Returns the current decibel level as measured by the sensor.
- **void setDeviceAddress(byte address)**: Sets a new I2C address for the sensor, if different from the default.
- **void setRegisterAddress(byte reg)**: Sets a new register address for reading the decibel level, if different from the default.

For detailed examples and additional information, please refer to the `examples` folder within the library.
