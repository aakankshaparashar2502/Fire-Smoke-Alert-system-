// Smoke Detector using Arduino Uno and MQ-2 Sensor

const int smokePin = A0;     // MQ-2 Analog Output
const int buzzerPin = 8;      // Buzzer Pin

int smokeValue = 0;
int threshold = 1;          // Adjust after testing

void setup()
{
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(buzzerPin, LOW);

  Serial.begin(9600);

  Serial.println("Smoke Detector Started");
}

void loop()
{
  smokeValue = analogRead(smokePin);

  Serial.print("Smoke Value: ");
  Serial.println(smokeValue);

  if (smokeValue > threshold)
  {
    digitalWrite(buzzerPin, HIGH);
    Serial.println("WARNING! Smoke Detected!");
  }
  else
  {
    digitalWrite(buzzerPin, LOW);
    Serial.println("Air is Normal");
  }

  delay(500);
}