int l = 0;
volatile int s = HIGH;
void setup()
{
  pinMode(l,OUTPUT);
  attachInterrupt(0,blink,CHANGE);
}
void loop()
{
  digitalWrite(0, s);
   }
void blink(){
  s = !s;
}