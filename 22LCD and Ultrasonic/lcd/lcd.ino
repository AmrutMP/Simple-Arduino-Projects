#include <LiquidCrystal.h>
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(0, 1, 8, 9, 10, 11); /// REGISTER SELECT PIN,ENABLE PIN,D4 PIN,D5 PIN, D6 PIN, D7 PIN
//“RS, En, D4, D5, D6, D7”
  const int trigPin = 6;
  const int echoPin = 5;
  long duration;
  int distance;
void setup()
{
  // set up the LCD's number of columns and rows:
lcd.begin(16, 2);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
}

void loop()
{
// set the cursor to column 0, line 1
  delay(1000);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration= pulseIn(echoPin,HIGH);
  distance = duration*0.034/2;
lcd.print("Distance:");
lcd.print(distance);//print name
lcd.setCursor(0, 1); // set the cursor to column 0, line 2
lcd.print("www.circuitdigest.com");//print name
delay(750);//delay of 0.75sec //shifting data on LCD
lcd.setCursor(0, 0);// set the cursor to column 0, line1
}
