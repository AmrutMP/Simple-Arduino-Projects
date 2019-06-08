int sensorPin = A0; // select the input pin for LDR
int LED = 13;
int sensorValue = 0; // variable to store the value coming from the sensor
void setup() {
Serial.begin(9600);
pinMode(LED,OUTPUT);//sets serial port for communication
}
void loop() {
sensorValue = analogRead(sensorPin); // read the value from the sensor
Serial.println(sensorValue); //prints the values coming from the sensor on the screen
if(sensorValue > 1000)
digitalWrite(LED,HIGH);
else
digitalWrite(LED,LOW);


delay(100);

}
