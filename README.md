<!-- Improved compatibility of back to top link: See: https://github.com/othneildrew/Best-README-Template/pull/73 -->
<a name="readme-top"></a>

<!-- PROJECT SHIELDS -->
<!--
*** I'm using markdown "reference style" links for readability.
*** Reference links are enclosed in brackets [ ] instead of parentheses ( ).
*** See the bottom of this document for the declaration of the reference variables
*** for contributors-url, forks-url, etc. This is an optional, concise syntax you may like.
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->
[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]

<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/fathan-27/ultrasonic-distance-alarm">
    <img src="images/logo.png" alt="Logo" width="80" height="80">
  </a>

  <h3 align="center">Ultrasonic Distance Alarm</h3>

  <p align="center">
    Arduino-based distance detection system with alarm functionality
    <br />
    <a href="https://github.com/fathan-27/ultrasonic-distance-alarm"><strong>Explore the docs »</strong></a>
    <br />
    <br />
    <a href="https://github.com/fathan-27/ultrasonic-distance-alarm">View Demo</a>
    ·
    <a href="https://github.com/fathan-27/ultrasonic-distance-alarm/issues">Report Bug</a>
    ·
    <a href="https://github.com/fathan-27/ultrasonic-distance-alarm/issues">Request Feature</a>
  </p>
</div>

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#features">Features</a></li>
    <li><a href="#components-list">Components List</a></li>
    <li><a href="#how-it-works">How It Works</a></li>
    <li><a href="#wiring-diagram">Wiring Diagram</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
  </ol>
</details>

---

<!-- ABOUT THE PROJECT -->
## About The Project

[![Product Name Screen Shot][product-screenshot]](https://example.com)

The **Ultrasonic Distance Alarm** is an Arduino-based project that detects nearby objects using an ultrasonic sensor and triggers an alarm when the distance falls below a configurable threshold. This project is perfect for:

- 🚗 Parking assistance systems
- 🚨 Security and intrusion detection
- 🤖 Obstacle avoidance for robots
- 🏠 Smart home automation
- 📊 Distance measurement projects

This repository provides complete documentation, circuit schematics, Arduino code, and component lists to help you build and customize your own ultrasonic distance alarm system.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

### Built With

* [![Arduino][Arduino.cc]][Arduino-url]
* [![C++][C++]][Cpp-url]

<p align="right">(<a href="#readme-top">back to top</a>)</p>

---

<!-- GETTING STARTED -->
## Getting Started

### Prerequisites

Before you start, make sure you have:

- Arduino IDE installed ([Download here](https://www.arduino.cc/en/software))
- Basic understanding of Arduino programming
- USB cable to upload code to Arduino board
- All components listed in the [Components List](#components-list)

### Installation

1. **Clone the repository**
   ```sh
   git clone https://github.com/fathan-27/ultrasonic-distance-alarm.git
   cd ultrasonic-distance-alarm
   ```

2. **Download Arduino IDE**
   - Visit [Arduino.cc](https://www.arduino.cc/en/software)
   - Install for your operating system (Windows, macOS, Linux)

3. **Prepare Hardware**
   - Assemble all components according to [Wiring Diagram](#wiring-diagram)
   - Connect Arduino to your computer via USB

4. **Upload Code**
   - Open `ultrasonic_alarm.ino` in Arduino IDE
   - Select correct board and COM port
   - Click "Upload" button
   - Open Serial Monitor to verify (Baud: 9600)

<p align="right">(<a href="#readme-top">back to top</a>)</p>

---

<!-- USAGE EXAMPLES -->
## Usage

### Basic Operation

1. **Power on** the Arduino board
2. **Approach the sensor** with an object
3. **Alarm triggers** when object is within threshold distance (default: 30cm)
4. **Monitor distance** in Serial Monitor (Tools > Serial Monitor)

### Customization

**Change Alarm Threshold:**
```cpp
int alarmThreshold = 30; // Change this value (in cm)
```

**Adjust Trigger Delay:**
```cpp
delay(200); // Change this value (in milliseconds)
```

**Different Pin Configuration:**
Update these values to match your wiring:
```cpp
const int trigPin = 9;    // TRIG pin number
const int echoPin = 10;   // ECHO pin number
const int buzzerPin = 8;  // Buzzer pin number
const int ledPin = 7;     // LED pin number
```

<p align="right">(<a href="#readme-top">back to top</a>)</p>

---

<!-- FEATURES -->
## Features

- ✅ Real-time distance measurement (2cm - 400cm)
- ✅ Configurable alarm threshold
- ✅ Audible buzzer alert
- ✅ Visual LED indicator
- ✅ Serial Monitor output for debugging
- ✅ Stable and reliable HC-SR04 sensor integration
- ✅ Low power consumption
- ✅ Easy to customize and expand

<p align="right">(<a href="#readme-top">back to top</a>)</p>

---

<!-- COMPONENTS LIST -->
## Components List

| Component | Quantity | Notes |
|-----------|----------|-------|
| Arduino Uno / Nano | 1 | Microcontroller |
| HC-SR04 Ultrasonic Sensor | 1 | Distance measurement |
| Buzzer (5V) | 1 | Audio alarm |
| LED | 1 | Visual indicator (any color) |
| Resistor 220Ω | 1 | LED current limiting |
| Breadboard | 1 | For prototyping |
| Jumper Wires | 20+ | Connections |
| USB Cable | 1 | Programming & power |
| 5V Power Source | 1 | External power (optional) |

### Bill of Materials (BOM)

**Total Estimated Cost:** $5 - $10 USD

> **Note:** Prices vary by region and supplier. These are typical hobby-grade components.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

---

<!-- HOW IT WORKS -->
## How It Works

### Operating Principle

The HC-SR04 ultrasonic sensor works by measuring the time it takes for a sound pulse to travel to an object and back:

```
1. TRIGGER PULSE
   └─→ Microcontroller sends 10µs pulse to TRIG pin

2. SOUND TRANSMISSION
   └─→ Sensor emits 40kHz ultrasonic sound wave

3. ECHO RECEPTION
   └─→ Sound bounces off object and returns to sensor
   └─→ ECHO pin goes HIGH when sound is received

4. TIME MEASUREMENT
   └─→ Duration = time for sound to go and return

5. DISTANCE CALCULATION
   └─→ Distance = (Duration × 340) / 2
   └─→ Duration in microseconds, result in centimeters

6. ALARM DECISION
   └─→ If Distance < Threshold → Activate buzzer & LED
   └─→ Else → Deactivate buzzer & LED
```

### Calculation Formula

```
Speed of Sound = 340 m/s = 0.034 cm/µs

Distance (cm) = (Duration in µs × 0.034) / 2
```

The division by 2 accounts for the round-trip distance.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

---

<!-- WIRING DIAGRAM -->
## Wiring Diagram

### Pin Configuration

```
┌─────────────────────────────────────────────────────────┐
│                    ARDUINO UNO                          │
└─────────────────────────────────────────────────────────┘

    HC-SR04 SENSOR            BUZZER          LED
    ┌──────────┐              
    │ VCC      │─────5V──────────────────────────
    │ GND      │─────GND─────────────────GND────┐
    │ TRIG     │─────D9                          │
    │ ECHO     │─────D10                         │
    └──────────┘                                 │
                              ┌─────────────D8   │
                              │                  │
                            BUZZER             220Ω
                              │               RESISTOR
                              │                  │
                            ─────             ─────
                             GND               GND
```

### Detailed Connection Table

| Component | Pin | Arduino Pin | Notes |
|-----------|-----|-------------|-------|
| HC-SR04 VCC | - | 5V | Power supply |
| HC-SR04 GND | - | GND | Ground |
| HC-SR04 TRIG | - | D9 | Trigger signal |
| HC-SR04 ECHO | - | D10 | Echo signal |
| Buzzer (+) | - | D8 | Positive terminal |
| Buzzer (-) | - | GND | Negative terminal |
| LED (+) | - | D7 | Via 220Ω resistor |
| LED (-) | - | GND | Cathode |

> **⚠️ Important:** Always use a 220Ω resistor with the LED to prevent damage!

### Breadboard Layout

Refer to the schematic diagram provided in the `/schematic` folder for detailed breadboard layout.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

---

<!-- PROJECT STRUCTURE -->
## Project Structure

```
ultrasonic-distance-alarm/
│
├── README.md                    # This file
├── LICENSE                      # Project license
│
├── src/
│   └── ultrasonic_alarm.ino    # Main Arduino sketch
│
├── schematic/
│   ├── circuit_diagram.png      # Circuit diagram image
│   ├── wiring_guide.md          # Detailed wiring guide
│   └── breadboard_layout.png    # Breadboard layout
│
├── docs/
│   ├── INSTALLATION.md          # Installation guide
│   ├── TROUBLESHOOTING.md       # Troubleshooting tips
│   └── CUSTOMIZATION.md         # Customization guide
│
├── examples/
│   ├── basic_example.ino        # Basic implementation
│   └── advanced_example.ino     # Advanced features
│
└── images/
    ├── logo.png                 # Project logo
    └── demo.png                 # Demo image
```

<p align="right">(<a href="#readme-top">back to top</a>)</p>

---

<!-- CODE EXAMPLE -->
## Code Example

### Main Arduino Sketch

```cpp
// Ultrasonic Distance Alarm - Main Code
// HC-SR04 Sensor with Arduino Uno

// Pin Configuration
const int trigPin = 9;    // Trigger pin
const int echoPin = 10;   // Echo pin
const int buzzerPin = 8;  // Buzzer pin
const int ledPin = 7;     // LED pin

// Configuration
int alarmThreshold = 30;  // Alarm triggers when object is closer than 30cm
long duration;
int distance;

void setup() {
  // Initialize pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  
  // Initialize serial communication
  Serial.begin(9600);
  Serial.println("Ultrasonic Distance Alarm Started!");
  Serial.print("Threshold: ");
  Serial.print(alarmThreshold);
  Serial.println(" cm");
}

void loop() {
  // Clear the trigger pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  // Send trigger pulse
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Measure echo duration
  duration = pulseIn(echoPin, HIGH);
  
  // Calculate distance (Speed of sound: 0.034 cm/µs)
  distance = duration * 0.034 / 2;
  
  // Print distance to Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  // Check if object is within threshold
  if (distance < alarmThreshold && distance > 0) {
    // Activate alarm
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(ledPin, HIGH);
    Serial.println(">>> ALARM TRIGGERED <<<");
  } else {
    // Deactivate alarm
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);
  }
  
  // Delay before next measurement
  delay(200);
}
```

### Download Code

- **Latest Version:** [ultrasonic_alarm.ino](src/ultrasonic_alarm.ino)
- **Source:** GitHub Repository

<p align="right">(<a href="#readme-top">back to top</a>)</p>

---

<!-- TROUBLESHOOTING -->
## Troubleshooting

### No readings from sensor
- ✓ Check all wiring connections
- ✓ Verify sensor receives stable 5V power
- ✓ Ensure TRIG and ECHO pins match your code
- ✓ Test sensor with a known obstacle at 20cm

### Unstable or fluctuating readings
- ✓ Keep sensor away from electrical interference
- ✓ Use shorter, quality jumper wires
- ✓ Ensure proper ground connection
- ✓ Add 100nF capacitor across sensor power pins

### Alarm never triggers
- ✓ Verify alarm threshold value is reasonable
- ✓ Test buzzer and LED independently
- ✓ Check buzzer/LED wiring and polarity
- ✓ Ensure sufficient power supply (min 500mA)

### Alarm triggers constantly
- ✓ Increase alarm threshold value
- ✓ Check for nearby obstacles
- ✓ Verify sensor calibration
- ✓ Look for electrical noise interference

For more help, see [TROUBLESHOOTING.md](docs/TROUBLESHOOTING.md)

<p align="right">(<a href="#readme-top">back to top</a>)</p>

---

<!-- ROADMAP -->
## Roadmap

- [x] Basic distance measurement
- [x] Alarm functionality
- [x] LED indicator
- [ ] LCD display for real-time distance
- [ ] Multiple sensors support
- [ ] Data logging to SD card
- [ ] Wireless notification (Bluetooth/WiFi)
- [ ] Mobile app integration
- [ ] Cloud data storage
- [ ] Advanced filtering algorithms

See the [open issues](https://github.com/fathan-27/ultrasonic-distance-alarm/issues) for a full list of proposed features (and known issues).

<p align="right">(<a href="#readme-top">back to top</a>)</p>

---

<!-- CONTRIBUTING -->
## Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".

Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

<p align="right">(<a href="#readme-top">back to top</a>)</p>

---

<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE` for more information.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

---

<!-- CONTACT -->
## Contact

**Fathan Rizki**
- GitHub: [@fathan-27](https://github.com/fathan-27)
- Project Link: [https://github.com/fathan-27/ultrasonic-distance-alarm](https://github.com/fathan-27/ultrasonic-distance-alarm)

<p align="right">(<a href="#readme-top">back to top</a>)</p>

---

<!-- ACKNOWLEDGMENTS -->
## Acknowledgments

* [Arduino Official Documentation](https://www.arduino.cc/reference/en/)
* [HC-SR04 Sensor Guide](https://howtomechatronics.com/tutorials/arduino/ultrasonic-sensor-hc-sr04/)
* [Best README Template](https://github.com/othneildrew/Best-README-Template)
* [Awesome README](https://github.com/Louis3797/awesome-readme-template)

<p align="right">(<a href="#readme-top">back to top</a>)</p>

---

<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/fathan-27/ultrasonic-distance-alarm.svg?style=for-the-badge
[contributors-url]: https://github.com/fathan-27/ultrasonic-distance-alarm/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/fathan-27/ultrasonic-distance-alarm.svg?style=for-the-badge
[forks-url]: https://github.com/fathan-27/ultrasonic-distance-alarm/network/forks
[stars-shield]: https://img.shields.io/github/stars/fathan-27/ultrasonic-distance-alarm.svg?style=for-the-badge
[stars-url]: https://github.com/fathan-27/ultrasonic-distance-alarm/stargazers
[issues-shield]: https://img.shields.io/github/issues/fathan-27/ultrasonic-distance-alarm.svg?style=for-the-badge
[issues-url]: https://github.com/fathan-27/ultrasonic-distance-alarm/issues
[license-shield]: https://img.shields.io/github/license/fathan-27/ultrasonic-distance-alarm.svg?style=for-the-badge
[license-url]: https://github.com/fathan-27/ultrasonic-distance-alarm/blob/main/LICENSE
[product-screenshot]: images/screenshot.png
[Arduino.cc]: https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white
[Arduino-url]: https://www.arduino.cc/
[C++]: https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white
[Cpp-url]: https://cplusplus.com/
