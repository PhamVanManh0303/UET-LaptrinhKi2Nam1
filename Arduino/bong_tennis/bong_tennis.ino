void setup() {
  // put your setup code here, to run once:
  for (int i = 2; i <= 9; i++) {
    pinMode(i,OUTPUT);
  }
}
int x = 9;
void loop() {
  // put your main code here, to run repeatedly:
  for (int i = x; i >= 2; i--) {
    digitalWrite(i,1);
    delay(100);
    digitalWrite(i,0);
  }
  x--;
  for (int i = 2; i <= x-1; i++) {
    digitalWrite(i,1);
    delay(100);
    digitalWrite(i,0);
  }
  if (x == 2) {
    digitalWrite(x,1);
    delay(500);
    digitalWrite(x,0);
    x = 9;
  }
}
