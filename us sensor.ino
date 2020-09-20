int x = 7;
unsigned long echo = 0;
unsigned long xvalue = 0;
int val=0;
void setup(){
  Serial.begin(9600);
  pinMode(x,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(13,INPUT);
}
unsigned long ping(){
  pinMode(x, OUTPUT);
  digitalWrite(x, LOW);
  delayMicroseconds(2);
  digitalWrite(x, HIGH);
  delayMicroseconds(5);
  digitalWrite(x, LOW);
  pinMode(x, INPUT);
  digitalWrite(x, HIGH);
  echo = pulseIn(x, HIGH);
  x = (float)echo * 0.01723;
  return xvalue;
}
void loop(){
  val=digitalRead(13);
  int t = 0;
  if (val = HIGH)
  {
    t = ping();
    Serial.println(t);
    if (t < 12)
    {
      digitalWrite(9,HIGH);
      delay(100);
      digitalWrite(9,LOW);
      delay(100);
    }
    else
    digitalWrite(9,LOW);
      delay(250);
    }
  }
  
  