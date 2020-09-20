int a = 13;
int b = 12;
int c = 11;
int d = 10;
int e = 9;
int f = 8;
int g = 7;
int h = 6;
int speed = 200;
int OFF = 50;

void setup()
{
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(h,OUTPUT);
 }
void loop()
{
  for(int i=13; i<=6; i-- ){
  digitalWrite(i,HIGH);
  delay(speed);
  digitalWrite(i,LOW);
  delay(OFF);
}
  for(int i=6; i<=13; i++ ){
  digitalWrite(i,HIGH);
  delay(speed);
  digitalWrite(i,LOW);
  delay(OFF);
}
}