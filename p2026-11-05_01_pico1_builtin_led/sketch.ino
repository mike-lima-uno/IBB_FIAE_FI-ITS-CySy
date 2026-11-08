/*
pi-pico - initial - 2026-11-05

types of pico:
https://www.raspberrypi.com/documentation/microcontrollers/pico-series.html#pico1

FOR RAPID REFERENCE - board layout
https://www.raspberrypi.com/documentation/microcontrollers/pico-series.html#layout_non-wireless
*/

/* project code: micropython - uses the main.py
from machine import Pin
from time import sleep

print("pico1 starts.")
led = Pin("LED", Pin.OUT)

while True:
    print("blick .. ")
    led.toggle()
    sleep(1)
*/

/* project code: arduino -> uses the sketch.ino   */
void setup() {
  Serial1.println("pico1 starts.");

  pinMode(LED_BUILTIN, OUTPUT);
  Serial1.begin(115200);
}

void loop() {
  Serial1.println("blick .. ");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

