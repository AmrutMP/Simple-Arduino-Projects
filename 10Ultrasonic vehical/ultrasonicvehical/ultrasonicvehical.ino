
int trigPin = 5;
int echoPin = 6;
int motorPin0 = 4;
int motorPin1 = 9;
long duration;
int distance;
void setup() {
unsigned int t;
pinMode(echoPin,INPUT);
pinMode(trigPin,OUTPUT);
pinMode(motorPin0,OUTPUT);
pinMode(motorPin1,OUTPUT);
digitalWrite(motorPin0,LOW);
Serial.begin(9600);
}

void loop() {
digitalWrite(trigPin,LOW);
delayMicroseconds(10);

digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);

duration = pulseIn(echoPin,HIGH);

distance = duration*0.034/2;
Serial.print("Distance = ");
Serial.println(distance);
delay(10);

if(distance < 10)
{
delay(10);
do
{
delay(10);
digitalWrite(trigPin,LOW);
delayMicroseconds(10);

digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);

duration = pulseIn(echoPin,HIGH);

distance = duration*0.034/2;
Serial.print("Distance = ");
Serial.println(distance);  
digitalWrite(motorPin0,LOW);
digitalWrite(motorPin1,HIGH);  
Serial.println("Reverse");
}while(distance < 50);
}

else if(distance > 50)
{  
delay(10);
do
{
delay(10);
digitalWrite(trigPin,LOW);
delayMicroseconds(10);

digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);

duration = pulseIn(echoPin,HIGH);

distance = duration*0.034/2;
Serial.print("Distance = ");
Serial.println(distance);  
digitalWrite(motorPin1,LOW);
digitalWrite(motorPin0,HIGH);  
Serial.println("Forward");
}while(distance > 10);
}
}




