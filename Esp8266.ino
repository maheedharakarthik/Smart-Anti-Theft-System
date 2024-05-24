#include <ESP8266WiFi.h>
const char* ssid = "Karthik";
const char* password = "eswar@12345";

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting...");
  }
  Serial.println("Connected!");
}

void sendAlert() {
  // Code to send alert via HTTP request or MQTT
}
