int sensorPin = 2; // Connect sensor output pin to Arduino digital pin 2

void setup() 
{
  Serial.begin(9600);
  pinMode(sensorPin, INPUT); // Set the sensor pin as input
}

void loop() {
  int motionDetected = digitalRead(sensorPin); // Read the sensor pin

  if (motionDetected == HIGH) 
  {
    Serial.println("Motion detected!");
  }
  else 
  {
    Serial.println("No motion detected.");
  }
  
  delay(1000); // Wait for 1 second before next reading
}