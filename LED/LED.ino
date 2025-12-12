#include <SoftwareSerial.h>

SoftwareSerial bluetooth(10, 11); // RX, TX
const int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
  bluetooth.begin(38400);
}

void loop() {
  if (bluetooth.available() > 0) {
    char command = bluetooth.read();
    
    if (command == '1') {
      digitalWrite(ledPin, !digitalRead(ledPin));
    }
  }
}
