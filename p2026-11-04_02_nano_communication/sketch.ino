/*
  Nano-to-Nano serial communication example.
  Upload this same sketch to both Nano boards. The role is selected by D12:
  leave D12 unconnected on the transmitter, and connect D12 to GND on the
  receiver. The transmitter sends LED indexes; the receiver lights the
  corresponding LED.

  This project could not be fully tested in Wokwi because its multi-MCU
  simulation supports ESP32-family boards only, so the second Nano does not run.
*/

#include <SoftwareSerial.h>

// Software serial uses D3 as RX and D4 as TX.
SoftwareSerial link(3, 4);

// LED output pins on the receiver.
const byte RX_LEDS[] = {2, 5, 8, 11};
// D12 selects the role: HIGH for transmitter, LOW for receiver.
const byte TX_ROLE_PIN = 12;
byte nextLed = 0;

void setup() {
  pinMode(TX_ROLE_PIN, INPUT_PULLUP);

  // Configure the LED outputs and start with all LEDs off.
  for (byte i = 0; i < 4; i++) {
    pinMode(RX_LEDS[i], OUTPUT);
    digitalWrite(RX_LEDS[i], LOW);
  }

  // Initialize the serial link at 9600 bits per second.
  link.begin(9600);
}

void loop() {
  if (digitalRead(TX_ROLE_PIN) == HIGH) {
    // Transmitter: send the next LED index as a character ('0' to '3').
    link.write('0' + nextLed);
    nextLed = (nextLed + 1) % 4;
    delay(200);
  } else {
    // Receiver: process incoming data when a character is available.
    if (link.available() > 0) {
      char received = link.read();

      // Ignore any data that is not a valid LED index.
      if (received >= '0' && received <= '3') {
        // Turn off all LEDs before lighting the selected one.
        for (byte i = 0; i < 4; i++) {
          digitalWrite(RX_LEDS[i], LOW);
        }

        byte idx = received - '0';
        digitalWrite(RX_LEDS[idx], HIGH);
      }
    }
  }
}