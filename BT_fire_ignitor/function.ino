void ignite() {
  digitalWrite(4, HIGH);
  tone(5, 1912, 200);
  delay(200);
  tone(5, 1912, 200);
  servo2.write(80);
  delay(t);
  servo1.write(15 * n);
  delay(t);
  servo2.write(20);
  delay(t);
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(6, LOW);
  delay(100);
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(6, LOW);
  digitalWrite(4, LOW);
  delay(200);
}

void allInRow() {
  t = 200;
  for (n = 1; n < 11; n++) {
    ignite();
  }
  servo2.write(80);
}

void Random() {
  t = 300;
  for (int x = 1; x < 6; x++) {
    n = x;
    ignite();
    n = 11 - x;
    ignite();
  }
  servo2.write(80);
}

void Reset() {
  delay(800);
  servo2.write(80);
}

void timer() {
  n = 1;
  t = 300;
  digitalWrite(4, HIGH);
  delay(56000);
  tone(5, 1912, 200);
  delay(800);
  tone(5, 1912, 200);
  delay(800);
  tone(5, 1912, 200);
  delay(800);
  delay(800);
  ignite();
  servo2.write(80);
}

void push() {
  digitalWrite(4, HIGH);
  tone(5, 1912, 200);
  delay(200);
  tone(5, 1912, 200);
  servo2.write(20);
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(6, LOW);
  delay(100);
  digitalWrite(6, HIGH);
}

void pushOut() {
  servo2.write(80);
  digitalWrite(6, LOW);
  digitalWrite(4, LOW);
  delay(200);
}
