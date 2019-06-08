char mystr[12];
void setup() {
  Serial.begin(9600);
}
void loop() {
Serial.readBytes(mystr,12);
Serial.println(mystr);
delay(5000);
}
