#include "TofSensor.h"
#include <Arduino.h>
#include <Wire.h>
#include "TofSensorConfig.h"

// Optical centers for zone recognition
uint8_t opticalCenters[2] = { 68, 188 };

TofSensor::TofSensor() : Sensor(), myTofSensor() {
    // Constructor initializes the TofSensor by inheriting from Sensor and initializing myTofSensor
}

void TofSensor::setup() {
    // Sets up the I2C communication and sensor configuration
    Wire.begin(4, 5);      
    //I2C.begin(4,5,100000);
    // Wire.setClock(100000);
    //myTofSensor.setTimeout(500);
    // myTofSensor.init();
    // myTofSensor.begin();
    // if(!myTofSensor.init()){
    //   Serial.println("Failed to initialize sensor");
    // }
    if (myTofSensor.begin() != 0) {
        Serial.println("Sensor error");
    }
    
    myTofSensor.setDistanceModeLong();
    myTofSensor.setTimingBudgetInMs(20);
    
    startMeasurement();
}

void TofSensor::update() {
    // Update method to check for new sensor data and toggle between zones
    if (myTofSensor.checkForDataReady()) {
        getResult();
        newDataAvailable = (currentZone == 1) && !newDataAvailable;
        
        currentZone = !currentZone;
        startMeasurement();     
    }
}

void TofSensor::startMeasurement() {
    // Begins a new measurement based on the current zone
    myTofSensor.stopRanging();
    myTofSensor.clearInterrupt();
    myTofSensor.setROI(zoneX, zoneY, opticalCenters[currentZone]);
    myTofSensor.startRanging();
}

void TofSensor::getResult() {
    // Retrieves the distance measurement and determines if a person is present
    int distance = myTofSensor.getDistance();
    if (currentZone == 0) {
        zone1 = personPresent(distance);
    } else {
        zone2 = personPresent(distance);
    }
}

bool TofSensor::personPresent(int distance) {
    // Determines if the measured distance indicates a person's presence
    return distance < PERSON_THRESHOLD;
}
