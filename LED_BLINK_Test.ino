/*
Arduino LED Blink Test (Trial 1)
Board: Arduino R3 (Uno)
Output : Led

LED Connections:
-LED (+) -> Arduino Digital Pin 13
-LED (-) -> 220 Ohm resistor
-Resistor -> Arduino GND

Description: 
This sketch turns an led on and off repeatedly.
It is commonly used as the first test program
to verify Arduino Board, Wiring, and software.
*/

const int ledPin =13; // LED connected to digital pin 13

void setup() {
  pinMode(ledPin, OUTPUT); // Set LED pin as output
}

void loop() {
  digitalWrite(ledPin, HIGH); // Turn LED on
  delay(1000); // Wait for 1 second 

  digitalWrite(ledPin, LOW); // Turn LED off
  delay(1000); //Wait 1 second 
}
