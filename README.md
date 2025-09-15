# 🚗 Bluetooth Controlled RC Car

## 📌 Project Overview
This is a Bluetooth controlled RC car built with Arduino UNO and L298N motor driver.  
Control the car’s movement (forward, backward, left, right) and horn using a mobile Bluetooth app.

## ⚡ Features
- Forward, Backward, Left, Right control via HC-05 Bluetooth module
- Activate horn (buzzer) with a single command
- Simple and beginner-friendly design
- Real-time response with mobile app control

## 🛠️ Components Used
- Arduino UNO
- L298N Motor Driver
- 2x DC Motors + Wheels
- HC-05 Bluetooth Module
- Buzzer
- Battery Pack (9V or Li-ion)
- Jumper Wires, Chassis

## 🔧 Pin Mapping (Inline)
- IN1 → D13, IN2 → D12, IN3 → D11, IN4 → D10, Buzzer → D9  
- HC-05: TX → RX, RX → TX (Arduino)


## 💻 Arduino Code
Complete code is in `Bluetooth_RC_Car.ino`

## 🚀 How to Run
1. Clone the repository:  
   ```bash
   git clone https://github.com/Vashitva1356/Arduino-Bluetooth-RC-Car.git
