#include <SPI.h>
   char senddata = 'a'; 
   void setup (void) {

   pinMode(MOSI,OUTPUT);
   pinMode(MISO, INPUT);
   digitalWrite(SS, HIGH); // disable Slave Select
   SPI.begin();
   Serial.begin(9600);
   SPI.setClockDivider(SPI_CLOCK_DIV8);//divide the clock by 2
   /*digitalWrite(SS, LOW); // enable Slave Select
   Serial.print("Sending..");
   Serial.println(c);
   SPI.transfer (c);
   c = SPDR;
   Serial.println("");
   digitalWrite(SS, HIGH); // disable Slave Select
   delay(2000);*/
}

void loop (void) {
  char rxcd;
  digitalWrite(SS,LOW);
  
  rxcd=SPI.transfer(senddata);

  Serial.print("Sending :");
  Serial.println(senddata);
  digitalWrite(SS, HIGH);
  if(senddata < 132) 
  {
    senddata++;
  }
   else
   {
      senddata ='a';
   }
  delay(900);
}
