const int gasSensorPin = A0;
const int alarmPin = 9;  // LED connected to pin 9
void setup() 
{
  pinMode(alarmPin, OUTPUT);
  Serial.begin(9600);  // Initialize serial communication for debugging
}
void loop() 
{
  int gasLevel = analogRead(gasSensorPin);
  Serial.print("Gas Level: ");
  Serial.println(gasLevel);
  if (gasLevel >= 00) 
{  
// Adjust the threshold as needed
    digitalWrite(alarmPin, HIGH);  // Turn on the alarm (LED)
    Serial.println("Warning: Alcohol detected!");
  } 
else 
{
    digitalWrite(alarmPin, LOW);  // Turn off the alarm
  }

  delay(1000);  // Read gas level every second (adjust as needed)
}