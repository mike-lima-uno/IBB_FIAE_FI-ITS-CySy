// GLOBALS

boolean state = true;

const int BIL = LED_BUILTIN;
const int WAITING_TIME = 1000;


void setup() {
  // put your setup code here, to run once:
  pinMode(BIL, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(BIL, state);
  delay(WAITING_TIME);
  state = !state;

}
