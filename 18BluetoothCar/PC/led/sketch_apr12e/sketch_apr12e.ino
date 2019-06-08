void setup()
{
pinMode(13,OUTPUT);
pinMode(0,OUTPUT);
pinMode(1,OUTPUT);
Serial.begin(9600);
Serial.println("Enter the key");
}

void loop()
{
if(Serial.available()>0)
{
char c = Serial.read();
if(c=='r' || c=='R'){   
digitalWrite(0,1);
digitalWrite(1,);
digitalWrite(13,1);

}
if(c=='t' || c=='T'){                         //LEFT TURN
digitalWrite(0,1);
digitalWrite(1,0);
digitalWrite(13,0);
}
if(c=='l' || c=='L'){                         //LEFT TURN
digitalWrite(0,1);
digitalWrite(1,1);
digitalWrite(13,1);
}
if(c=='a' || c=='A'){                         //LEFT TURN
digitalWrite(0,LOW);
digitalWrite(1,LOW);
digitalWrite(13,HIGH);
}

if(c=='o' || c=='O'){                         //LEFT TURN
digitalWrite(0,HIGH);
digitalWrite(1,HIGH);
digitalWrite(13,LOW);
}
if(c=='b' || c=='B'){  //LEFT TURN
{
  digitalWrite(0,1);
  delay(1000);
  digitalWrite(1,0);
  digitalWrite(13,0);
  delay(1000);
  digitalWrite(13,1);
  delay(1000);
}
}
}
}
