// Include the required Wire library for I2C<br>
#include <Wire.h>
int LED = 13;
int x;
void setup() {
  // Define the LED pin as Output
  pinMode (LED, OUTPUT);
  // Start the I2C Bus as Slave on address 9
  Wire.begin(9); 
  // Attach a function to trigger when something is received.
  Wire.onReceive(receiveEvent);
  Serial.begin(9600);
}
void receiveEvent(int bytes) {
  x = Wire.read();// read one character from the I2C
    Serial.println(x);
  Serial.println("Recieved");
  if (x == 0) {
    digitalWrite(LED, HIGH);
    delay(1000);
    }
    if( x == 5)
    {
    digitalWrite(LED, LOW);
    delay(1000);
}
}
void loop() {
  //If value received is 0 blink LED for 200 ms

  
  //If value received is 3 blink LED for 400 ms
  /*if (x == '3') {
    digitalWrite(LED, HIGH);
    delay(2000);
    digitalWrite(LED, LOW);
    delay(2000);
  }
  if (x == '4' ) {
    digitalWrite(LED,HIGH);
    delay(3000);
    digitalWrite(LED,LOW);
    delay(3000);
  }*/
}
