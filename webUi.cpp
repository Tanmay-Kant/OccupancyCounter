#include "webUi.h"
#include "website.h"
#include "config.h"
#include "errorCodes.h"

#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>
#include <WebSocketsServer.h>

// Web server on port 80 for HTTP, WebSocket server on port 81
ESP8266WebServer server(80);
WebSocketsServer socketServer(81);

// Pointer to the PeopleCounter instance
PeopleCounter* myPeopleCounter;

void handleRoot() {
    // Handler for the root path "/"
    server.send(200, "text/html", homepage);
}

void handleCorrection() {
    // Handler for displaying the correction form
    server.send(200, "text/html", correctionForm);
}

void handleSetParameters() {
    // Handler for setting count and limit from web form
    int newCount = server.arg("count").toInt();
    int newLimit = server.arg("limit").toInt();

    if (newCount >= 0) {
        myPeopleCounter->setCount(newCount);
    }
    if (newLimit >= 0) {
        myPeopleCounter->setLimit(newLimit);
    }

    handleCorrection();
}

void handleNotFound() {
    // Handler for HTTP paths not found
    String message = "File Not Found\n\nURI: " + server.uri();
    message += "\nMethod: " + (server.method() == HTTP_GET ? "GET" : "POST");
    message += "\nArguments: " + String(server.args()) + "\n";

    for (uint8_t i = 0; i < server.args(); i++) {
        message += " " + server.argName(i) + ": " + server.arg(i) + "\n";
    }

    server.send(404, "text/plain", message);
}

void handleLimit() {
    // Handler for fetching the current limit
    server.send(200, "text/plain", String(myPeopleCounter->getLimit()));
}

void updateCounter() {
    // Sends the current people count to the client
    String count = String(myPeopleCounter->getCount());
    server.send(200, "text/plain", count);
}

void setupWebUi(PeopleCounter* peopleCounter) {
    // Configure the web server with routes
    myPeopleCounter = peopleCounter;

    server.on("/", handleRoot);
    server.on("/count", updateCounter);
    server.on("/correction", handleCorrection);
    server.on("/setParameters", handleSetParameters);
    server.on("/limit", handleLimit);
    server.onNotFound(handleNotFound);

    server.begin();
    startWebsocket();
}

void updateWebUi() {
    // Handle incoming web server requests
    server.handleClient();
    updateWebsocket();
}

void webSocketEvent(uint8_t num, WStype_t type, uint8_t* payload, size_t length) {
    // Handle WebSocket events
    switch (type) {
        case WStype_DISCONNECTED:
            break;
        case WStype_CONNECTED:
            break;
        case WStype_TEXT:
            break;
    }
}

void startWebsocket() {
    // Initializes and starts the WebSocket server
    socketServer.begin();
    socketServer.onEvent(webSocketEvent);
}

void updateWebsocket() {
    // Broadcasts the updated count if it has changed
    socketServer.loop();
    int currentCount = myPeopleCounter->getCount();
    if (currentCount != lastCount) {
        socketServer.broadcastTXT(String(currentCount));
        lastCount = currentCount;
    }
}

void sendErrorMessage(int error) {
    // Broadcasts error messages to connected WebSocket clients
    switch (error) {
        case SENSOR_TIMEOUT_ERROR:
            socketServer.broadcastTXT("Error: TofSensor timed out");
            break;
        case PERSON_TOO_FAST:
            socketServer.broadcastTXT("Error: Person too fast");
            break;
    }
}

int lastCount = 0;  // Variable to track the last broadcasted count