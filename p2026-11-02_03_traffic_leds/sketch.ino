// GLOBALS

short LED = 9;

const int WAITING_TIME = 1000;


void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, true);
  delay(WAITING_TIME);
  digitalWrite(LED, false);

  LED = LED + 2;
  if (LED > 13) {LED = 9;}

}
