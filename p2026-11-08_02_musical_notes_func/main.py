from machine import Pin, PWM
from time import sleep_ms

class PlayMusic:
    def __init__(self, pin):
        self.buzzer = PWM(Pin(pin))

    def play_note(self, freq: any, duration: int) -> None:
        if not isinstance(freq, int) and not isinstance(freq, float):
            raise ValueError(f"freq must be integer or float, {type(freq)} given.")

        self.buzzer.freq(int(freq))
        self.buzzer.duty_u16(32768) # on
        sleep_ms(duration)
        self.buzzer.duty_u16(0)    # off

    def terminate(self):
        self.buzzer.deinit()

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

p = PlayMusic(0)
p.play_note(A4, 1000)
p.terminate()