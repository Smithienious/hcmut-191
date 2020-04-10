void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
  analogWrite(9, 100);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8, HIGH);
  digitalWrite(11, LOW);
  delay(2000);
  digitalWrite(8, LOW);
  digitalWrite(11, HIGH);
  delay(2000);
}
