#include <avr/interrupt.h>
int ledpin = 13;
int intpin = 2;
volatile int state = false;
int i;
void setup() {
  pinMode(ledpin,OUTPUT);
  digitalWrite(ledpin,LOW);
  pinMode(intpin,INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(2),blink0,CHANGE);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

delay(2000);
Serial.println("Doing Things.........");
}

void blink0()
{
  Serial.println("Button Pressed");
if(state == false)
{
  digitalWrite(ledpin,LOW);
  state = false;
}
else
{
  digitalWrite(ledpin,HIGH);
  state = true;
}
}


