void setup()
{
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
}
void loop()
{
digitalWrite(4, HIGH);
digitalWrite(5, LOW);
delay(3000);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
delay(1000);
digitalWrite(5, HIGH);
digitalWrite(4, LOW);
delay(3000);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
delay(1000);
}
