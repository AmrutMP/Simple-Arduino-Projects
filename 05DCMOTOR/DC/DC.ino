int motorpinf=12;
int motorpinr=9;
void setup() {
Serial.begin(9600);
pinMode(motorpinf,OUTPUT);
pinMode(motorpinr,OUTPUT);
}
void loop() 
{
  delay(2000);
  Serial.println("Motor in Forward Direction");
  digitalWrite(motorpinf,HIGH);
  delay(3000);
  digitalWrite(motorpinf,LOW);
  delay(3000);
  Serial.println("Motor in Reverse Direction");
  delay(1000);
  digitalWrite(motorpinr,HIGH);
  delay(3000);
  digitalWrite(motorpinr,LOW);
  delay(3000);

}
