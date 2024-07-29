int pirPin = 2;  // Pin connected to PIR sensor's output
int ledPin = 3; // Pin connected to onboard LED or external LED

void setup() {
  pinMode(pirPin, INPUT); // Set the PIR sensor pin as input
  pinMode(ledPin, OUTPUT); // Set the LED pin as output
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int sensorValue = digitalRead(pirPin); // Read the sensor value

  if (sensorValue == HIGH) { // Motion detected
    Serial.println("Motion detected!");
    digitalWrite(ledPin, HIGH); // Turn on LED
  } else {
    digitalWrite(ledPin, LOW); // Turn off LED
    Serial.println(" No Motion detected!");
  }

  delay(1000); // Short delay to stabilize the reading
}
