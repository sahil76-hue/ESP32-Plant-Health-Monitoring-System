This project implements an IoT-based environmental monitoring system using the ESP32.
It enables real-time monitoring of temperature and humidity data collected from environmental sensors.

The system is simulated using Wokwi and is designed for applications such as smart agriculture, greenhouse monitoring, and remote climate supervision.

🚀 Key Features

Real-time temperature monitoring

Real-time humidity monitoring

Wi-Fi-enabled IoT connectivity

Cloud-ready architecture

Simulation-based development using Wokwi

Scalable for smart farming applications

🧰 Hardware Components

ESP32 Development Board

DHT11 / DHT22 Temperature & Humidity Sensor

Wi-Fi Network

Power Supply

🏗️ System Architecture

The DHT sensor reads environmental parameters.

ESP32 processes the sensor data.

Data is transmitted over Wi-Fi.

Data can be visualized on cloud dashboards (future integration ready).

🔄 Working Principle

The DHT sensor captures temperature and humidity.

ESP32 reads sensor values via GPIO.

Data is formatted and transmitted through Wi-Fi.

Real-time monitoring enables environmental decision-making.

🌾 Applications

Smart Agriculture

Greenhouse Monitoring

Remote Weather Stations

Industrial Environmental Monitoring

Cold Storage Monitoring

🧪 Simulation Platform

This project is developed and tested using:

Wokwi – for hardware simulation

Arduino framework for ESP32 firmware

📊 Future Enhancements

Integration with AWS IoT Core

MQTT Protocol Implementation

Real-time dashboard using Node-RED

Mobile application monitoring

Automated irrigation control based on humidity
