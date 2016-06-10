void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  

}

void loop() {
  int sensorValue = analogRead(A0);
  int BLACK_EST = 600;

  if(sensorValue > BLACK_EST) {
     digitalWrite(13, HIGH);
  }
  else {
    digitalWrite(13, LOW);
  }
  
  Serial.println(sensorValue);
  delay(1);
}
