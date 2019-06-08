int led=3;
int brightness=0;
int fadeamount=1;
void setup() {
pinMode(led,OUTPUT);

}

void loop() {
  analogWrite(led,brightness);
  // put your main code here, to run repeatedly:
brightness=brightness+fadeamount;
if(brightness==0 || brightness==255)
{
  fadeamount= -fadeamount;
}
delay(3);
}
