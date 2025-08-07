Project: Turning on an LED using a Push Button (with an Internal Pull-up Resistor)

A simple project using the Arduino UNO to turn on a LED when a button is pressed, using the internal resistor `INPUT_PULLUP`.

components:

Arduino UNO
-  (Push Button)
-  LED
- resistor 220 ohm
- Breadboard
- wires
 
 project code:

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