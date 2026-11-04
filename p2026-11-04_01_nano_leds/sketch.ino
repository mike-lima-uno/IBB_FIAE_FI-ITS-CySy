const short WAITING_TIME = 200;

void setup() {
  // put your setup code here, to run once:

  for (int p=4; p<= 10; p += 2)
  {
    pinMode(p, OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:

  
  for (int p=4; p<= 10; p += 2)
  {
    digitalWrite(p, HIGH);
    delay(WAITING_TIME);
    digitalWrite(p, LOW);
    delay(WAITING_TIME);
  }

}
