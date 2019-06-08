// Include the required Wire library for I2C<br>
#include<Wire.h> 
int x = 0;
void setup() {
  // Start the I2C Bus as Master
  Wire.begin();
  Serial.begin(9600); 
}
void loop() {
  Serial.println("Sending");
  Serial.print(x);
  Wire.beginTransmission(9); // transmit to device #9
  Wire.write(0);              // sends x 
  Wire.endTransmission();
  delay(5000);// stop transmitting
  Serial.println("Sending");
  Serial.print(x);
  Wire.beginTransmission(9); // transmit to device #9
  Wire.write(5);              // sends x 
  Wire.endTransmission();
  delay(5000);// stop transmitting
  }
