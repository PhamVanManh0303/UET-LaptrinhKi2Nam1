int button = 13;
void setup() {
  // put your setup code here, to run once:
  for (int i = 2; i <= 9; i++) {
    pinMode(i,OUTPUT);
  }
  pinMode(button, INPUT);
}
int a = 2;
void loop() {
  // put your main code here, to run repeatedly:
  
  for (int i = 2; i <= 9; i++) {
    if (digitalRead(button) == HIGH) {
      a++;
      digitalWrite(i,1);
      delay(40);
    }
    if (digitalRead(button) == LOW) break;
  }
  if (digitalRead(button) == LOW) {
    for (int i = a; i >= 2; i--){
    digitalWrite(i,0);
    delay(40);
    a--;
  }
  }
}
