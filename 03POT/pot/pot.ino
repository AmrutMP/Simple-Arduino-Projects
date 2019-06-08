int ledpin=3  ;
int potpin=A1;
int readvalue;
int writevalue;
void setup() {
  Serial.begin(9600);
 pinMode(potpin,INPUT);
 pinMode(ledpin,OUTPUT);
}


void loop() {
readvalue = analogRead(potpin);
writevalue=(255./1023.)*readvalue;
analogWrite(ledpin,writevalue);
Serial.print("The readvalue is ");
Serial.println(readvalue);
Serial.print("The writevalue is ");
Serial.println(writevalue);
delay(1000);
}
