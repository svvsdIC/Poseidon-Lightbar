void setup()
{
  pinMode(13, OUTPUT); // PWM Pin
  pinMode(22, OUTPUT); // Laser Pin
}

void loop()
{
  analogWrite(13, 100); // Value is the duty cycle, ranging from 0 - 255
  digitalWrite(22, HIGH); // Laser is on or off
}