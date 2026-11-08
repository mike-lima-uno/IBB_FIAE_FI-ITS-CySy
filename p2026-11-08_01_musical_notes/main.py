from machine import Pin, PWM
from time import sleep

# notes
C4  = 261.63
C4s = 277.18
D4  = 293.66
D4s = 311.13
E4  = 329.63
F4  = 349.23
F4s = 369.99
G4  = 392.00
G4s = 415.30
A4  = 440.00
A4s = 466.16
B4  = 493.88

buzzer = PWM(Pin(0))

buzzer.freq(int(A4))       # 440 Hz A4 (see above)
# buzzer.freq(440)         # does the same
buzzer.duty_u16(32768) # on
sleep(1)

buzzer.duty_u16(0)    # off
buzzer.deinit()
