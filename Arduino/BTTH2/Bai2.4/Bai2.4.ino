int button = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(button,INPUT);
  pinMode(2,OUTPUT);
}
int a = 1,b = 0;
void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(button) == HIGH) {
    a *= -1;
  }
  if (digitalRead(button) == LOW) {
    a *= -1;
  }
  if (a == 1) {
    if (b == 1) b == 0;
    else b == 1;
    digitalWrite(2, b);
  } else {
    digitalWrite(2,b);
    a = 1;
  }
  
}
