#define push 8
#define led 7
void setup()
{
 pinMode(push,INPUT_PULLUP);
 pinMode(led,OUTPUT);
}

void loop()
{
bool pushvalue = digitalRead(push);
  if(pushvalue==LOW)
  {
digitalWrite(led,HIGH);
  }
  else
  {
  digitalWrite(led,LOW);
  }
}