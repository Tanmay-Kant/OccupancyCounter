#include "Sensor.h"

// Checks if new data is available from the sensor
bool Sensor::dataAvailable() {
    // If new data is available, reset the flag and return true
    if (newDataAvailable) {
        newDataAvailable = false;
        return true;
    }
    // Otherwise, return false
    return false;
}

// Retrieves the status of Zone 1
bool Sensor::getZone1() {
    // Return the boolean status indicating the presence of an object in Zone 1
    return zone1;
}

// Retrieves the status of Zone 2
bool Sensor::getZone2() {
    // Return the boolean status indicating the presence of an object in Zone 2
    return zone2;
}
