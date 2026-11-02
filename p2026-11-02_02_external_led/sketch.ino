// GLOBALS

boolean state = true;

const int LED = 8;
const int WAITING_TIME = 1000;


void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, state);
  delay(WAITING_TIME);
  state = !state;

}
