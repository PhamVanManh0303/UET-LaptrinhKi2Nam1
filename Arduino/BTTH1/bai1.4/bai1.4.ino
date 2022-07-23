void setup() {
  // put your setup code here, to run once:
  for (int i = 2; i < 10; i++) {
    pinMode(i,OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  int  b = 10;
  for (int j = 2; j < 10; j++) {
    for (int i = 2; i < b; i++) {
      digitalWrite(i,1);
      delay(100);
      if (i != b-1) digitalWrite(i,0);
    }
    b--;
  }
  for (int i = 2; i < 10; i++) {
    digitalWrite(i,0);
  }
  b = 10; 
  
}
