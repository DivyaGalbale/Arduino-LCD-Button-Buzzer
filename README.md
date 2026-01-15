# Arduino-LCD-Button-Buzzer
Mini Project using I2C LCD, Button and buzzer
# LCD Button Buzzer Alert System

## Components
- Arduino Uno
- I2C 16x2 LCD
- Push Button
- Buzzer

## Description
When button is pressed, LCD shows ALERT and buzzer turns ON.
When released, system returns to normal mode.

## Connections
LCD:
VCC -> 5V
GND -> GND
SDA -> A4
SCL -> A5

Button:
One side -> D7
Other side -> GND

Buzzer:
+ -> D8
- -> GND
