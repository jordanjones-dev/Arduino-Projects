/*
Arduino Potentiometer LED Brightness Control (Trial 2)
Board: Arduino R3 (UNO)
Input: Potentiometer
OUtput: LED

Potentiometer Connections:
Potentiometer Pin 1 -> GND
Potentiometer Pin 2 -> (Middle Wipper) -. Analog Pin 0
Potentiometer Pin 3 -> 5v 

LED Connections:
Arduino Digital Pin 6-> LED (+)
LED (-) -> Resistor
Resistor -> Arduino GND

Description:
This project uses a potentiometer to control the brightness of an LED. 
Turning the potentiometer changes its resistance which changes the analog value
being read by the Arduino.
*/
int pot; // Stores the value Read from the potentiometer
int led; // Stores the Brightness value from the LED 
void setup() {
  // put your setup code here, to run once:
pinMode(A0, INPUT);
pinMode (6, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
pot = analogRead (A0);
led = map(pot,0, 1023, 0, 255);

analogWrite(6,led);

}
