void setup() {
  // put your setup code here, to run once:
  for (int i = 9; i > 1; i--) 
  pinMode(i,OUTPUT);
}

void loop() {
  
  // put your main code here, to run repeatedly:
  int b = 2;
  while (b < 10) {
    for (int i = 9; i >= b; i--) {
      digitalWrite(i,1);
      delay(50);
      if (i == b) {
        digitalWrite(i,1);
        delay(50);
      } else {
        digitalWrite(i,0);
      }
    }
    b++;
  }
   for (int i = 9; i >=2; i--) {
    digitalWrite(i,0);
   }
}
