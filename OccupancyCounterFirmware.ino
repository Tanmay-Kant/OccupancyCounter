#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>
#include <WiFiUdp.h>

#include "Config.h"
#include "errorCodes.h"
#include "webUi.h"
#include "TofSensor.h"
#include "OccupancyCounter.h"

// Network credentials stored in Config.h
const char* ssid = STASSID;
const char* password = STAPSK;

// Toggle for enabling debug mode
#define ENABLE_DEBUG

// Sensor and counter instances
TofSensor myTofSensor;
PeopleCounter peopleCounter;

// Function prototype for blinking LED
void blinkLed(int times, int interval = 500);

void setup() {  
#ifdef ENABLE_DEBUG
  Serial.begin(115200);
  Serial.println("Setup starting");
  delay(5000);  // Delay for serial connection to stabilize
#endif

  pinMode(LED_BUILTIN, OUTPUT);

#ifdef AP_MODE
  // Configures and starts the WiFi Access Point
  if (WiFi.softAP(ssid, password)) {
    Serial.print("Access Point \"");
    Serial.print(ssid);
    Serial.println("\" started");
    Serial.print("IP address:\t");
    Serial.println(WiFi.softAPIP());
  } else {
    Serial.println("AP Failed");
  }
#else
  // Connects to the WiFi network in station mode
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.waitForConnectResult() != WL_CONNECTED) {
    delay(5000);
    ESP.restart();  // Restart if connection fails
  }
#endif

  Serial.println("Ready");

  myTofSensor.setup();
  Serial.println("Checkpoint1");
  peopleCounter.setSensor(&myTofSensor);
  Serial.println("Checkpoint2");
  setupWebUi(&peopleCounter);
}

unsigned long lastLedUpdate = 0;  // Time of last LED update

void loop() {
  // Toggle the LED every second
  if ((millis() - lastLedUpdate) > 1000) {
    digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
    lastLedUpdate = millis();
  }

  updateWebUi();
  yield();  // Allows background tasks to run

  myTofSensor.update();
  peopleCounter.update();
}

// Function to blink the LED a specified number of times with a given interval
void blinkLed(int times, int interval) {
  for (int i = 0; i < times; i++) {
    digitalWrite(LED_BUILTIN, LOW);
    delay(interval);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(interval);
  }
}