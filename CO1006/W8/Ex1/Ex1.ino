void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
  digitalWrite(8, HIGH);
  digitalWrite(11, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(9, 100);
  delay(2000);
  analogWrite(9, 0);
  delay(2000);
}
