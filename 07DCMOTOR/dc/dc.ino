int motorpin=9;
int ledpin=3;
int potpin=A1;
//int brightness=0;
//int fadeamount=1;
int readvalue;
int writevalue;
void setup() {
Serial.begin(9600);
pinMode(ledpin,OUTPUT);
pinMode(motorpin,OUTPUT);
pinMode(potpin,INPUT);
}

void loop() {
readvalue = analogRead(A1);
writevalue=(255./1023.)*readvalue;
Serial.println(writevalue);
digitalWrite(ledpin,writevalue);
digitalWrite(motorpin,writevalue);
// put your main code here, to run repeatedly:
/*brightness=brightness+fadeamount;
if(brightness==0 || brightness==255)
{
  fadeamount= -fadeamount;
}*/
delay(100);
}
