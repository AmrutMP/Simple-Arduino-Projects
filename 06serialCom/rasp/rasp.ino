char mystr[5];
void setup() {
  Serial.begin(9600);
}

void loop() {
Serial.readBytes(mystr,1);
Serial.println(mystr);
delay(1000);

}
