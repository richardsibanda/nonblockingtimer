#ifndef NonBlockingTimer_h
#define NonBlockingTimer_h

class NonBlockingTimer {
public:
  NonBlockingTimer(unsigned long interval);
  void start();
  void stop();
  bool isRunning();
  bool hasElapsed();
private:
  unsigned long _interval;
  unsigned long _startTime;
  bool _running;
};

#endif
