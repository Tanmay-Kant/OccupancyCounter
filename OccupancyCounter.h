#ifndef OCCUPANCY_COUNTER_H
#define OCCUPANCY_COUNTER_H

#include "Sensor.h"
#include "config.h"

class OccupancyCounter {
public:
    // Constructor: Initializes an instance of the OccupancyCounter class.
    OccupancyCounter();

    // Associates a sensor object with this occupancy counter.
    void setSensor(Sensor* sensor);

    // Processes new sensor data and updates the occupancy count.
    int update();

    // Retrieves the current count of people.
    int getCount();

    // Retrieves the maximum occupancy limit.
    int getLimit();

    // Sets the current count of people.
    void setCount(int value);

    // Sets the maximum occupancy limit.
    void setLimit(int value);

private:
    Sensor* mySensor; // Pointer to the associated sensor object.
    int peopleCount = 0; // Current number of people counted.
    int limit = DEFAULT_PEOPLE_LIMIT; // Maximum number of people allowed.

    bool previousZone1Active = false; // Previous state of Zone 1.
    bool previousZone2Active = false; // Previous state of Zone 2.
    bool previouslyInside = false; // Was there at least one person previously detected inside.
    int entryEvent = 0; // Last entry event recorded.
    int exitEvent = 0; // Last exit event recorded.

    // Logs an event when a change in zone occupancy is detected.
    void logEvent(bool zone1, bool zone2);

    // Updates state variables for zones and inside status.
    int updateState(bool& zone1Active, bool& zone2Active, bool& currentlyInside);

    // Determines the type of single-zone event based on state changes.
    int getSingleZoneEvent(bool prevState, bool currentState);

    // Determines the type of global event based on zone changes.
    int determineGlobalEvent(bool zone1, bool zone2);

    // Evaluates and calculates the change in the count of people based on events.
    int calculatePeopleChange(int entry, int exit);
};

#endif // OCCUPANCY_COUNTER_H