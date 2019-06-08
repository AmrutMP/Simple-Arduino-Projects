int latchPin = 5;
int clkPin =6;
int dataPin = 4;
byte LED = 0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(latchPin,OUTPUT);
pinMode(clkPin,OUTPUT);
pinMode(dataPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int i = 0;
LED = 0;
shiftLED();
delay(500);
for(i=0;i<8;i++)
{
  LED = 1 << i;
  Serial.println(LED);
  shiftLED();
  delay(500);
}
for(i=0;i<8;i++)
{
  LED = 256 >> i;
  Serial.println(LED);
  shiftLED();
  delay(500);
}
}

void shiftLED()
{
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clkPin,LSBFIRST,LED);
  digitalWrite(latchPin,HIGH);
}

