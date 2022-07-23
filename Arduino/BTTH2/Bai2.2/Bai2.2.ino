int button = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(button,INPUT);
  for (int i = 2; i <= 9; i++) {
    pinMode(i,OUTPUT);
  }
}

int a = 0;

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(button) == HIGH) {
    a++;
  }
  if (a == 3) {
    a = 0;
  }
  if (a == 0){
    for (int i = 2; i <= 9; i++) {
      digitalWrite(i, 1);
    }
    delay(1000);
    for (int i = 2; i <= 9; i++) {
      digitalWrite(i, 0);
    }
    delay(1000);
  } else if (a == 1) {
      for (int i = 2; i <= 9; i++) {
        digitalWrite(i, 1);
        delay(100);
      }
      for (int i = 9; i >= 2; i--) {
        digitalWrite(i,0);
        delay(100);
      }
  }
  else if ( a == 2) {
    for (int i = 2; i <= 9; i++) {
      digitalWrite(i,1);
      delay(100);
      digitalWrite(i,0);
    }
    for (int i = 8; i >= 3; i--) {
      digitalWrite(i,1);
      delay(100);
      digitalWrite(i,0);
    }
  }
}
