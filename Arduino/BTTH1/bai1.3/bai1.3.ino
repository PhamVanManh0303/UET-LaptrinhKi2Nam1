void setup() {
  // put your setup code here, to run once:
  for (int i = 2; i < 10; i++) {
    pinMode(i,OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 2; i < 10; i++) {
    digitalWrite(i,1);
    delay(100);
    digitalWrite(i,0);
  }
  for (int i = 8; i > 2; i--) {
    digitalWrite(i,1);
    delay(100);
    digitalWrite(i,0);
  }
  
}
