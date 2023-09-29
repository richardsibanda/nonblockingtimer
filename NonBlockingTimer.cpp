#include "NonBlockingTimer.h"
#include "Arduino.h"

NonBlockingTimer::NonBlockingTimer(unsigned long interval) {
  _interval = interval;
  _running = false;
}

void NonBlockingTimer::start() {
  _startTime = millis();
  _running = true;
}

void NonBlockingTimer::stop() {
  _running = false;
}

bool NonBlockingTimer::isRunning() {
  return _running;
}

bool NonBlockingTimer::hasElapsed() {
  if (_running && millis() - _startTime >= _interval) {
    _running = false;
    return true;
  }
  return false;
}
