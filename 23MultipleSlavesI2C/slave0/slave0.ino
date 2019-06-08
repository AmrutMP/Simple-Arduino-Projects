#include<Wire.h>
void setup() {
  // put your setup code here, to run once:
Wire.begin(0);
Wire.onRequest(requestEvent);
}

void loop() {
  // put your main code here, to run repeatedly:
delay(500);
}

void requestEvent() {
  Wire.write("Slave0");
}

