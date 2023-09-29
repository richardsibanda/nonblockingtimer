NonBlockingTimer Library for Arduino

The NonBlockingTimer library provides an easy-to-use implementation of non-blocking timers for Arduino projects. Unlike traditional timers, this library allows you to create timers that operate independently, allowing your program to continue execution while the timer counts down in the background.

Features:
Simple Interface: The library offers a straightforward interface for creating and managing non-blocking timers.
Start and Stop: Timers can be started and stopped at any point, giving you full control over their behavior.
Interval-based Timing: Timers trigger after a specified interval, providing precise control over when events occur.
Efficient Resource Usage: Designed with efficiency in mind, this library minimizes resource consumption while ensuring accurate timing.
Usage:
Installation: Include the "NonBlockingTimer.h" header file in your Arduino sketch to start using the library.
Timer Creation: Initialize a NonBlockingTimer object with the desired time interval.
Starting and Stopping: Use the start() and stop() methods to control the timer's operation.
Check for Elapsed Time: Use hasElapsed() to determine if the specified interval has passed.
License:
This library is released under the MIT License, allowing for both personal and commercial use.

Contributions:
Contributions and bug reports are welcome! Please feel free to open an issue or create a pull request.

Author:
[Richard Sibanda]