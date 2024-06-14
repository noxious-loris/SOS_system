const int forceSensorPin = A0; // Connect force sensor to analog pin A0

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read force sensor value
  int sensorValue = analogRead(forceSensorPin);

  // Check if force exceeds threshold (adjust threshold value as needed)
  if (sensorValue > 500) {
    // If force exceeds threshold, send a message to ESP8266
    Serial.println("Force detected!");
  }

  delay(1000); // Delay for stability
}
