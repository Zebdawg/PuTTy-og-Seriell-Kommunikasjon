void setup()
{
  Serial.begin(9600);
}
void loop()
{
  int value = analogRead(A0);
  value = map(analogRead(A0),0,1023,0,255);
  Serial.write(0);
  delay(value);
  Serial.write(1);
  delay(value);
}
