void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(7, OUTPUT);
}
void loop()
{
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  tone(7, 750, 500);
  delay(200);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  tone(7, 100, 300);
  delay(500);
}
