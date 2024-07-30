#include<TM1637Display.h>
#include<NewPing.h>

// Define the TM1637 display connections
#define CLK 48 // Clock pin
#define DIO 49 // Data I/O pin

TM1637Display display(CLK, DIO); // Initialize the display object

// Define the Ultrasonic sensor connections
#define TRIG_PIN 51 // Trigger pin
#define ECHO_PIN 52// Echo pin

void setup() {
  display.setBrightness(0x0f); // Set the brightness (0x0f is the brightest)
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}

void loop() {
  long duration, distance;
  
  // Send a 10us pulse to trigger the ultrasonic sensor
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  
  // Read the echo time
  duration = pulseIn(ECHO_PIN, HIGH);
  
  // Calculate the distance (speed of sound is 34300 cm/s)
  distance = (duration / 2) / 29.1; // Divide by 29.1 to get cm

  // Display the distance on the TM1637 display
  if (distance >= 0 && distance < 200) {
    display.showNumberDec(distance, false, 4, 0);
  } else {
    display.showNumberDec(0000, false, 4, 0); // Show 9999 if out of range
  }

  delay(100); // Update rate
}
