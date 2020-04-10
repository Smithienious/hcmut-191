void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  Serial.println("Hi");
}

void loop() {
  if(Serial.available() > 0){
    Serial.print("Input a character: ");
    char temp = Serial.read();
    if(temp == 'o'){
      digitalWrite(13, HIGH);
    }
    else{
      digitalWrite(13, LOW);
    }
  }
}
