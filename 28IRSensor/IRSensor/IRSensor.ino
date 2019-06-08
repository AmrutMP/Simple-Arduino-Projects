int ir = 2;
int LED = 13;
void setup() {
  
Serial.begin(9600);
  // put your setup code here, to run once:
pinMode(ir,INPUT);
pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(ir) == HIGH){
digitalWrite(LED,HIGH);
Serial.println("Object detected");
}
else{
digitalWrite(LED,LOW);
Serial.println("Object Not detected");
}
}
