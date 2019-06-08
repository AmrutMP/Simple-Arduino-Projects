int ledpin=9;
int potpin=A1;
int motorpin=6;
int readvalue;
int writevalue;
void setup() {
  Serial.begin(9600);
 pinMode(potpin,INPUT);
 pinMode(ledpin,OUTPUT);
 pinMode(motorpin,OUTPUT);
}


void loop() {
readvalue = analogRead(potpin);
writevalue=(255./1023.)*readvalue;
digitalWrite(ledpin,writevalue);
digitalWrite(motorpin,writevalue);
Serial.print("The readvalue is ");
Serial.println(readvalue);
Serial.print("The writevalue is ");
Serial.println(writevalue);
delay(1000);
}
