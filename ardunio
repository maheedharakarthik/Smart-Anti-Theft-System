const int pirPin = 2; // PIR sensor pin
const int ledPin = 13; // LED for indication

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = digitalRead(pirPin);
  if (sensorValue == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Motion Detected!");
    // Code to send alert
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(1000);
}
