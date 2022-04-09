const int pir=2;
const int trig=3;
const int echo=4;
const int siren=5;//Connect it to pin 5 of UM3561
int a;
long distance;
void setup() {
  // put your setup code here, to run once:
pinMode(pir,INPUT);
pinMode(echo,INPUT);
pinMode(trig,OUTPUT);
pinMode(siren,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
a=digitalRead(pir);
digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);
distance=(pulseIn(echo,HIGH)*0.034)/2;
if(distance<=10.0)
{
  if(a==HIGH)
{
  digitalWrite(siren,HIGH);
}
else
{
  digitalWrite(siren,LOW);
}
}
else
{
  digitalWrite(siren,HIGH);
}
}
