int motorPin1 = 3;
int motorPin2 = 9; 

int increment=10;
int speed0=1;
 
void setup() 
{ 
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  Serial.begin(9600);
} 


void loop() 
{
      while(speed0>=0 && speed0<=255)
      {
          if (speed0 == 0 && speed0 == 255)
          {
              increment= -increment;
          }
          
              analogWrite(motorPin1, speed0);
              analogWrite(motorPin2,speed0);
              delay(30);
              speed0=speed0+increment;
      }
}
