void setup()
{
pinMode(13,OUTPUT);
Serial.begin(9600);
Serial.println("Enter the key");
}

void loop()
{
if(Serial.available()>0)
{
char c = Serial.read();
if(c=='s' || c=='S'){                         //LEFT TURN
Serial.println("ON");
digitalWrite(13,HIGH);
}
if(c=='d' || c=='D'){                         //LEFT TURN
Serial.println("OFF");
digitalWrite(13,LOW);

}
}
}
