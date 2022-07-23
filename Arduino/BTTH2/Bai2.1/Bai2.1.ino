int button = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  for (int i = 2; i < 10; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  if(!digitalRead(button) == HIGH) {
    for (int i = 2; i <= 9; i++) {
      digitalWrite(i,1);
    }
  } else {
    for (int i = 2; i <= 9; i++) {
      digitalWrite(i,0);
    }
  }
}
