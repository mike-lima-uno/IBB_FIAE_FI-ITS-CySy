const int PINS[] = {9, 10, 11};
const int testing_time = 500;

const int JOY_X = A0;
const int JOY_Y = A1;

void test_led(int pin) {  
  /*
  RGB LED (Common Anode + ): The comon pin is connected to 5V.
  To turn on a color, the digital pin must output LOW (0V).
  Outputting HIGH (5V) turns the color off.
  Setting digitalWrite HIGH ensures the LED start off
  */
  Serial.print("testing pin ");
  Serial.println(pin);
  
  digitalWrite(pin, LOW);  // Envia 0V para fechar o circuito e acender a cor (Ânodo Comum)
  delay(testing_time);
  digitalWrite(pin, HIGH); // Envia 5V para apagar a cor
  delay(testing_time);
}

void setup() {
  Serial.begin(9600);
  Serial.println("start.");

  for (int i = 0; i < 3; i++) {
    int pin = PINS[i];
    pinMode(pin, OUTPUT);
    digitalWrite(pin, HIGH); // ensure led starts off
    test_led(pin);
  }

  Serial.println("ready.");
}

void loop() {
  // read joystick analog
  int x = map(analogRead(JOY_X), 0, 1023, -255, 255);
  int y = map(analogRead(JOY_Y), 0, 1023, -255, 255);

  // Reference: https://sliderabbit.com/blog/slide-design-how-to-build-a-powerful-color-palette/
  int rx, ry, gx, gy, r, g, b;
  if (x > 0) {
    rx = x;
    gx = 0;
  } else {
    rx = 0;
    gx = - x;
  }

  if (y > 0) {
    b = 0;
    ry = y;
    gy = y;
  } else {
    ry = 0;
    gy = 0;
    b = - y;
  }

  r = sqrt(pow(rx,2) + pow(ry,2));
  g = sqrt(pow(gx,2) + pow(gy,2));

  // here you must to invert the value cause the rgb led is common anode and shut off when HIGH
  analogWrite(PINS[0], 255-r);
  analogWrite(PINS[1], 255-g);
  analogWrite(PINS[2], 255-b);

  Serial.print(x);
  Serial.print(" ");
  Serial.print(y);
  Serial.print(" - ");
  Serial.print(rx);
  Serial.print(" ");
  Serial.print(ry);
  Serial.print(",  ");
  Serial.print(gx);
  Serial.print(" ");
  Serial.print(gy);
  Serial.print(",  ");
  Serial.print(b);
  Serial.print(" - (");
  Serial.print(r);
  Serial.print(", ");
  Serial.print(g);
  Serial.print(", ");
  Serial.print(b);
  Serial.println(")");
}