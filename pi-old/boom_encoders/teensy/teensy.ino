#include <Encoder.h>

// Define the pins for your encoders
#define ENCODER1_PIN1 2
#define ENCODER1_PIN2 3
#define ENCODER2_PIN1 4
#define ENCODER2_PIN2 5

// Initialize your encoders
Encoder myEnc1(ENCODER1_PIN1, ENCODER1_PIN2);
Encoder myEnc2(ENCODER2_PIN1, ENCODER2_PIN2);

void setup() {
  Serial.begin(9600);
  while(!Serial); // wait for Serial connection
}

void loop() {
  // Check if data is available to read
  if(Serial.available() > 0) {
    char command = Serial.read();
    // If the received command is 'r', read the encoders
    if(command == 'r') {
      // Read the values
      long enc1Value = myEnc1.read();
      long enc2Value = myEnc2.read();
      Serial.println(enc1Value);
      Serial.println(enc2Value);
    }
    // Clear the buffer
    while (Serial.available())
      (void) Serial.read();
  }
}
