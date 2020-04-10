void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i<=255; i++){
    analogWrite(10, i);
    delay(10);
  }
  for(int i = 255; i>=0; i--){
    analogWrite(10, i);
    delay(10);
  }
}
