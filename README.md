# DHT11-Temperature-Humidity-Monitor-with-0.96-OLED-Display
a DHT11 temperature and humidity sensor with a 0.96-inch I2C OLED display using an Arduino Uno.. The setup is simple, beginner-friendly, and ideal for basic environmental monitoring or mini-projects.

A simple and beginner-friendly environmental monitoring system that interfaces a DHT11 temperature & humidity sensor with a 0.96-inch I2C OLED display using an Arduino Uno.
This project is ideal for mini-projects, lab experiments, IoT basics, and sensor interfacing practice.

🧠 Project Overview

This project reads real-time temperature (°C) and humidity (%) from the DHT11 sensor and displays the values on a 128×64 OLED display using I2C communication.
The Arduino Uno handles sensor data, formatting, and display updates every second, making it a compact, reliable climate-monitoring system.

🔄 What is Happening

The DHT11 sensor measures temperature and humidity digitally.

Arduino reads this data using the DHT sensor library.

The OLED display receives data over I2C (SDA → A4, SCL → A5).

Values are refreshed every second for real-time monitoring.

This eliminates the need for the Serial Monitor and gives direct hardware output.

🎯 Features

Real-time temperature monitoring

Real-time humidity display

Crisp 0.96" OLED graphical output

Simple 2-wire I2C communication

Beginner-friendly hardware setup

Low power usage

Perfect for Arduino mini-projects

🛠️ Hardware Components

Arduino Uno

DHT11 Temperature & Humidity Sensor

0.96" OLED Display (SSD1306, I2C)

Jumper wires

Breadboard (optional)

🧩 Software Details

Language: C++ (Arduino)

Main File: DHT11_OLED_Display.ino

Required Libraries:

Adafruit Unified Sensor

DHT Sensor Library (Adafruit)

Adafruit GFX

Adafruit SSD1306

Install all using Arduino IDE → Tools → Manage Libraries.

         
Clone the Repository
git clone [https://github.com/Anseek/DHT11-Temperature-Humidity-Monitor.git](https://github.com/Anseek/DHT11-Temperature-Humidity-Monitor-with-0.96-OLED-Display/tree/main)


📹 Demonstration

Add your project video here:
temperature and humidity sensing.mp4

🧩 Applications

Room temperature monitoring

Humidity sensing

Portable weather station

IoT learning projects

Smart home prototypes

🔮 Future Improvements

Add LED/buzzer alerts for high temperature

Log data on SD card

Send data to cloud (ThingSpeak/MQTT)

Add RTC module (DS3231) for timestamp data
