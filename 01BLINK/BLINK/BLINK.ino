int rled=13;
int bled=11;
void setup() {

pinMode(rled,OUTPUT);
pinMode(bled,OUTPUT);
}

void loop() {
digitalWrite(rled,HIGH);
delay(1000);
digitalWrite(rled,LOW);
delay(1000);
digitalWrite(bled,HIGH);
delay(1000);
digitalWrite(bled,LOW);
delay(1000);
}
