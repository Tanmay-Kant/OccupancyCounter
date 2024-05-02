#include "OccupancyCounter.h"
#include "config.h"
#include "Arduino.h"
#include "errorCodes.h"

enum Zone { ZONE1 = 0, ZONE2 = 1 };
enum Event { NONE = 0, ENTERED = 1, LEFT = 2 };
enum GlobalEvent { EnteredZone1 = 1, LeftZone1 = 2, EnteredZone2 = 3, LeftZone2 = 4 };

OccupancyCounter::OccupancyCounter() {
  // Constructor for OccupancyCounter class. Initializes object state.
}

void OccupancyCounter::setSensor(Sensor* sensor) {
  mySensor = sensor;
}

int OccupancyCounter::update() {
  // Main logic to update the occupancy count based on sensor data.
  if (mySensor->dataAvailable()) {
    bool zone1Active, zone2Active, currentlyInside;

    zone1Active = mySensor->getZone1();
    zone2Active = mySensor->getZone2();
    currentlyInside = zone1Active || zone2Active;

    if (!previouslyInside && currentlyInside) {
      int event = determineGlobalEvent(zone1Active, zone2Active);
      if (event < 0) {
        return event; // Error handling
      }
      entryEvent = event;
    } else if (previouslyInside && !currentlyInside) {
      int event = determineGlobalEvent(zone1Active, zone2Active);
      if (event < 0) {
        return event; // Error handling
      }
      exitEvent = event;
      int OccupancyChange = calculateOccupancyChange(entryEvent, exitEvent);

#ifdef MOUNTED_INSIDE
      OccupancyChange = -OccupancyChange;
#endif

      OccupancyCount += OccupancyChange;
    }

    previouslyInside = currentlyInside;
    previousZone1 = zone1Active;
    previousZone2 = zone2Active;
    return RESULT_OK;
  }
  return RESULT_ERROR; // No data available from sensor
}

int OccupancyCounter::getCount() {
  return OccupancyCount;
}

void OccupancyCounter::setCount(int value) {
  OccupancyCount = value;
}

int OccupancyCounter::getLimit() {
  return limit;
}

void OccupancyCounter::setLimit(int value) {
  limit = value;
}

int OccupancyCounter::getSingleZoneEvent(bool prevState, bool currentState) {
  // Determine if a person has entered or left a single zone.
  if (prevState == currentState) {
    return NONE;
  } else if (!prevState && currentState) {
    return ENTERED;
  } else {
    return LEFT;
  }
}

int OccupancyCounter::determineGlobalEvent(bool zone1, bool zone2) {
  // Determine the global event based on zone transitions.
  int zone1Event = getSingleZoneEvent(previousZone1, zone1);
  int zone2Event = getSingleZoneEvent(previousZone2, zone2);

  if (zone1Event && zone2Event) {
    return PERSON_TOO_FAST; // Error if someone is moving too fast
  }

  if (zone1Event == ENTERED) {
    Serial.println("Entered Zone 1");
    return EnteredZone1;
  } else if (zone1Event == LEFT) {
    Serial.println("Left Zone 1");
    return LeftZone1;
  }

  if (zone2Event == ENTERED) {
    Serial.println("Entered Zone 2");
    return EnteredZone2;
  } else if (zone2Event == LEFT) {
    Serial.println("Left Zone 2");
    return LeftZone2;
  }

  return NONE;
}

int OccupancyCounter::calculateOccupancyChange(int entry, int exit) {
  // Calculate change in the number of occupancy based on entry and exit events.
  if (entry == EnteredZone1 && exit == LeftZone2) {
    Serial.println("+1");
    return +1;
  } else if (entry == EnteredZone2 && exit == LeftZone1) {
    Serial.println("-1");
    return -1;
  }
  return 0;
}
