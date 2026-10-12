# Ultrasonic Distance Alarm

A simple Arduino-based distance monitoring project that uses an HC-SR04 ultrasonic sensor to detect nearby objects and trigger visual and audible alerts.

## Overview

This project measures distance in real time and changes the alarm state based on how close an object is:

- 1–10 cm: red LED + fast buzzer pulse
- 10–25 cm: red LED + faster buzzer pulse
- 25–50 cm: yellow LED + moderate buzzer pulse
- 50–80 cm: green LED + slower buzzer pulse
- Outside range: all LEDs off and buzzer silent

## Hardware

- Arduino Uno / compatible board
- HC-SR04 ultrasonic sensor
- Buzzer
- 3 LEDs (red, yellow, green)
- Resistors as needed for LEDs
- Jumper wires and breadboard

## Pin Configuration

The sketch uses the following pins:

- Trigger: D12
- Echo: D13
- Buzzer: D8
- Red LED: D2
- Yellow LED: D3
- Green LED: D4

## How It Works

1. The ultrasonic sensor sends a 10µs trigger pulse.
2. The sensor waits for the echo signal.
3. The Arduino reads the pulse duration.
4. Distance is calculated using the speed of sound.
5. The program compares the measured distance to predefined ranges.
6. The buzzer and LEDs respond according to the distance zone.

## Project File

The main source code is stored in:

- `ultrasonic distance alarm.ino`

## Example Behavior

- Nearby object detected: buzzer sounds and red LED flashes
- Medium distance: yellow LED indicates warning zone
- Safe distance: green LED indicates normal status

## Upload Instructions

1. Open the file `ultrasonic distance alarm.ino` in the Arduino IDE.
2. Select the correct board and COM port.
3. Upload the sketch to the Arduino.
4. Open the Serial Monitor if needed for debugging.

## Notes

This project is designed for learning and prototyping. The alarm logic and thresholds can be adjusted for different distance ranges and warning behaviors.

## License

This repository does not currently include a license file. If you plan to reuse or distribute the project, add a license before publishing it publicly.
