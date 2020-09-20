int x = 13;
void setup()
{
  pinMode(x,OUTPUT);
 }
void loop()
{
  digitalWrite(x,HIGH);
  delay(500);
  digitalWrite(x,LOW);
  delay(500);
    
}