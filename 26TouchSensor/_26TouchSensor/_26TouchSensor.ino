int touch = 2;
int LED = 13;
void setup() {
  
Serial.begin(9600);
  // put your setup code here, to run once:
pinMode(touch,INPUT);
pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(touch) == HIGH){
digitalWrite(LED,HIGH);
Serial.println("Touched");
}
else{
digitalWrite(LED,LOW);
Serial.println("Not Touched");
}
}
