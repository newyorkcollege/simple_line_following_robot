int duration;
int distance;
int sensorPin = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  pinMode(sensorPin, OUTPUT);
  digitalWrite(sensorPin, LOW);
  delayMicroseconds(2);
  digitalWrite(sensorPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(sensorPin, LOW);
  pinMode(sensorPin, INPUT);
  duration = pulseIn(sensorPin, HIGH);
  distance = duration/58;
  if(distance < 25) {
    digitalWrite(13, HIGH); // Turn on LED
    delay(1000);
    digitalWrite(13, LOW);
  }
  Serial.println(distance);
  delay(100);
}
