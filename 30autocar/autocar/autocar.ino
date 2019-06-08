
int touch_op = 3;//output for touch sensor
int readvalue = 0;

int ldr_op=2;//ldr output
int v;

int a0=A0,d0=8;
int limit,value;

void setup() {
Serial.begin(9600);
pinMode(touch_op,INPUT);
pinMode(ldr_op,INPUT);
pinMode(d0,INPUT);
}

void loop() {
  readvalue = digitalRead(touch_op);
  if(readvalue == HIGH)
  {
  Serial.println("CAR DOOR OPEN");
  delay(3000);
  }
  else
  {
 Serial.println("CAR DOOR CLOSED");
  delay(3000);
  }

v=digitalRead(ldr_op);
  if(v==HIGH)
  {
    Serial.println("HEAD LIGHT IS ON");
    delay(3000);
  }
  else
  {
 Serial.println("HEAD LIGHT IS OFF");
  delay(3000);
  }

  value=analogRead(a0);
  limit=digitalRead(d0);
if(limit==LOW)
{
 
    Serial.println("CAR NOT ON");
    delay(3000);
  }
  else
  {
 Serial.println("CAR ON");
  delay(3000);
  }
}

