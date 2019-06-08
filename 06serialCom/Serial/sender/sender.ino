char mystr[12] = "Empowersys";
void setup() {
Serial.begin(9600);
}

void loop() {
Serial.write(mystr,12);
delay(2500);
}

