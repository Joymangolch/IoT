#include <NewPing.h>

#define TRIG_PIN 3   // Pin connected to the Trig pin of the sensor
#define ECHO_PIN 2  // Pin connected to the Echo pin of the sensor
#define MAX_DISTANCE 200 // Maximum distance we want to measure (in cm)
#define LED_PIN 4
#define BUZZER_PIN 8
NewPing sonar(TRIG_PIN, ECHO_PIN, MAX_DISTANCE);

void setup() {
  Serial.begin(9600); // Start the serial communication at 9600 baud
  pinMode(TRIG_PIN,OUTPUT);
  pinMode(ECHO_PIN,INPUT);
  pinMode(LED_PIN,OUTPUT);
  pinMode(BUZZER_PIN,OUTPUT);
}

void loop() {
  delay(1000); // Wait 50ms between pings to give the sensor time to settle
  unsigned int distance = sonar.ping_cm(); // Get distance in cm

  // If the distance is 0, it means the object is out of range
  if (distance == 0) {
    digitalWrite(4,1);
    digitalWrite(8,0);
    Serial.println("IN range");
  } else {
    digitalWrite(4,0);
    digitalWrite(8,1);
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
  }
}
