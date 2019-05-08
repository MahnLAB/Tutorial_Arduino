// Tool Arduino IDE 1.8.9
// Model : Uno R3 (all kind of using Atmega328), Mega, due ...
// written by Ahn Seung-Ho

void setup() 
{
  pinMode(13,OUTPUT);  // led pin in circuit
}

void loop() 
{
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
}
