#include <SoftwareSerial.h>

SoftwareSerial BT(10, 11); //Rx, Tx respectively
String readdata;

void setup() 
{
  BT.begin(9600);
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() 
{
  while (BT.available())      //Check if there is an available byte to read
  {  
  delay(10);                  //Delay added to make thing stable
  char c = BT.read();         //Conduct a serial read
  readdata += c;              //build the string- "forward", "reverse", "left" and "right"
  } 
  if (readdata.length() > 0) 
  {
    Serial.println(readdata);
    if(readdata == "F")
  {
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    delay(100);
  }

  else if(readdata == "B")
  {
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    delay(100);
  }

  else if (readdata == "L")
  {
    digitalWrite (4, LOW);
    digitalWrite (5, LOW);
    digitalWrite (6, HIGH);
    digitalWrite (7, LOW);
    delay (100);
  }

 else if ( readdata == "R")
 {
   digitalWrite (4, HIGH);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   digitalWrite (7, LOW);
   delay (100);
 }

 else if (readdata == "S")
 {
   digitalWrite (4, LOW);
   digitalWrite (5, LOW);
   digitalWrite (6, LOW);
   digitalWrite (7, LOW);
   delay (100);
   
 }
 else if (readdata == "W")
 {
   digitalWrite (8,HIGH);
   digitalWrite (9, LOW);
   digitalWrite (2, LOW);
   digitalWrite (3, LOW);
   delay (4000);
 digitalWrite (8,LOW);
   digitalWrite (9, LOW);
   digitalWrite (2, LOW);
   digitalWrite (3, LOW);
   delay (100);
 }
 
 else if (readdata == "w")
 {
   digitalWrite (8,LOW);
   digitalWrite (9, HIGH);
   digitalWrite (2, LOW);
   digitalWrite (3, LOW);
   delay (3000);
 digitalWrite (8,LOW);
   digitalWrite (9, LOW);
   digitalWrite (2, LOW);
   digitalWrite (3, LOW);
   delay (100);
 
 }

  else if (readdata == "U")
 {
   digitalWrite (8,LOW);
   digitalWrite (9, LOW);
   digitalWrite (2,HIGH);
   digitalWrite (3, LOW);
   delay (100);
 }
 else if (readdata == "u")
 {
   digitalWrite (8,LOW);
   digitalWrite (9, LOW);
   digitalWrite (2, LOW);
   digitalWrite (3, HIGH);
   delay (100);
 }
readdata="";        //Reset the variable
  }}
 
