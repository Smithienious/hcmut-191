void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.print("Hi");
  Serial.begin(9600);
}

void speed(int speed_left, int speed_right){
  if (speed_left < 0){
    digitalWrite(8, HIGH);
    digitalWrite(11, LOW);
    analogWrite(9, abs(speed_left));
  }
  else if (speed_left > 0){
    digitalWrite(8, LOW);
    digitalWrite(11, HIGH);
    analogWrite(9, speed_left);
  }
  else{
    analogWrite(9, 0);
  }
  if (speed_right < 0){
    analogWrite(10, abs(speed_right));
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW); 
  }
  else if(speed_right > 0){
    analogWrite(10, speed_right);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
  }
  else{
    analogWrite(10, 0);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    char temp = Serial.read();
    if(temp == 'W') speed(100, 100);
    else if(temp == 'S') speed(-100, -100);
    else if(temp == 'A') speed(-100, 100);
    else if(temp == 'D') speed(100, -100);
    else speed(0, 0);
  }
}
