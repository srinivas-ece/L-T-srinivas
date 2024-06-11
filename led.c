#include <Arduino.h>

// Define the GPIO pin for the LED
const int ledPin = 2;

void setup() {
  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(ledPin, HIGH);
  delay(1000); // Wait for a second

  // Turn the LED off
  digitalWrite(ledPin, LOW);
  delay(1000); // Wait for a second
}