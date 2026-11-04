// GLOBALS

short LED = 9;

const int WAITING_TIME = 1000;


void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);

  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  // https://docs.wokwi.com/parts/wokwi-buzzer
  tone(4, 400, 100);
  delay(200);
  tone(4, 400, 100);

  digitalWrite(LED, true);
  delay(WAITING_TIME);
  digitalWrite(LED, false);
  
  LED = LED + 2;
  if (LED > 13) {LED = 9;}

  // It's alive ! ! !
  // HU-A - HA - HA - HA - HA  ! ! !

}
