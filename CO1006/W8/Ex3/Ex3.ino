void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  analogWrite(10, 100);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(2000);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(2000);
}