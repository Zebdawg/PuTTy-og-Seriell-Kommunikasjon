int knapp = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(13, INPUT);
}
void loop()
{
  knapp = digitalRead(13);
  if (knapp == HIGH){
    Serial.write("hei");
  }
  else {
    Serial.write("");
  }
  delay(1000);
}
