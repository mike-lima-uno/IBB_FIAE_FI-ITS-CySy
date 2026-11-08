# pi-pico - initial - 2026-11-05

# types of pico:
# https://www.raspberrypi.com/documentation/microcontrollers/pico-series.html#pico1

# FOR RAPID REFERENCE - board layout
# https://www.raspberrypi.com/documentation/microcontrollers/pico-series.html#layout_non-wireless


# project code: micropython - uses the main.py
from machine import Pin
from time import sleep

print("pico1 starts.")
led = Pin(0, Pin.OUT)

while True:
    print("blick .. ")
    led.toggle()
    sleep(1)


# project code: arduino -> uses the sketch.ino  
# - - - - - - - - - - 
# const int LED_PIN = 0;  // GP0 da Raspberry Pi Pico

# void setup() {
#   pinMode(LED_PIN, OUTPUT);
#   Serial1.begin(115200);
#   Serial1.println("pico1 starts.");
# }

# void loop() {
#   Serial1.println("blink...");
#   digitalWrite(LED_PIN, HIGH);
#   delay(1000);

#   digitalWrite(LED_PIN, LOW);
#   delay(1000);
# }


# project code: arduino sketch.ino -> using function
# - - - - - - - - - - 
# const int LED_PIN = 0;  // GP0, ligado ao LED externo

# void blick() {
#   Serial1.println("blink...");
#   digitalWrite(LED_PIN, HIGH);
#   delay(1000);

#   digitalWrite(LED_PIN, LOW);
#   delay(1000);
# }

# void setup() {
#   pinMode(LED_PIN, OUTPUT);
#   Serial1.begin(115200);
#   Serial1.println("pico1 starts.");
# }

# void loop() {
#   blick();
# }

