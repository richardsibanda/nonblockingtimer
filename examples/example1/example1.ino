#include "NonBlockingTimer.h"

NonBlockingTimer timer(5000); // Create a timer with a 5-second interval

void setup() {
  Serial.begin(9600);
  timer.start(); // Start the timer
}

void loop() {
  if (timer.hasElapsed()) {
    Serial.println("Timer has elapsed!");
    timer.start(); // Restart the timer
  }

  // Other code in the main loop
}
