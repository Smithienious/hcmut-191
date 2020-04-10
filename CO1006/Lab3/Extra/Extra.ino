void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  Serial.print("Hi");
}

void loop() {
  char ent[3]; int x = 0;
  while(Serial.available() && x < 3){
    Serial.print("Input "); Serial.print(x); Serial.print(": ");
    ent[x] = Serial.read();
    if(ent[0] == 'O'){
      if(ent[1] == 'N'){ digitalWrite(13, HIGH);}
      if(ent[1] == 'F' && ent[2] == 'F'){ digitalWrite(13, LOW);}
    }
    x++;
  }
  if(x == 3){ x = 0;}
}
