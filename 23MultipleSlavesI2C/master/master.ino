#include<Wire.h>
void setup() {
  // put your setup code here, to run once:
Wire.begin();
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("requesting to slave 0\n");
Wire.requestFrom(0,6);

while (Wire.available()){
  char c = Wire.read();
  Serial.print(c);
}
Serial.println(".....");
delay(1000);
Serial.println("requesting to slave 1\n");
Wire.requestFrom(1,6);
while (Wire.available()){
  char c = Wire.read();
  Serial.print(c);
}
Serial.println(".....");
delay(1000);}
