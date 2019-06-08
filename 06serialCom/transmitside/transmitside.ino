char mystr[12] = "Hello pavan";
char readstr[3];
void setup() {
Serial.begin(9600);
}

void loop() {
Serial.write(mystr,12);
//delay(1000);
//Serial.println("");
Serial.readBytes(readstr,3);
Serial.println(readstr);
}
