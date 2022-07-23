void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT_PULLUP);
  for (int i = 2; i < 10; i++) {
    pinMode(i, OUTPUT);
  }
}
void loop() {
  // put your main code here, to run repeatedly:
  float Volt = (float) analogRead(A0)/1024*8;
  int a = (int) Volt;
  for (int i = 2; i <= a; i++) {
    digitalWrite(i,1);
  }
  for (int i = a; i >= 2; i--) {
    digitalWrite(i,0);
  }
 }
