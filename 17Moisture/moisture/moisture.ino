const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
const int analogOutPin = 9; // Analog output pin that the LED is attached to

int sensorValue = 0;        // value read from the pot
int Dpercent = 0;   
int Mpercent = 0;
int motor=0;
void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  pinMode(13,OUTPUT); 
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);            
  // map it to the range of the analog out:
  Dpercent = map(sensorValue, 200, 1023, 0, 100);
  Mpercent=100-Dpercent;  
  
  if(Mpercent<=20){
    digitalWrite(13,HIGH);
    motor=1;
  }else{
    digitalWrite(13,LOW);
    motor=0;
  }
  
  Serial.print(Mpercent);                       
  Serial.print("_");
  if(motor==0)
    Serial.print("OFF");
  else
    Serial.print("ON");

  Serial.println("_");
  
  
  delay(2000);                     
}
