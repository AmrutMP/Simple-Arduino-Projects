#include <SPI.h>
char buff;
byte indx;
boolean process;
int c = 5;
void setup (void) {
   Serial.begin (9600);
   pinMode(MOSI,INPUT);
   pinMode(MISO,OUTPUT); // have to send on master in so it set as output
   SPCR |= _BV(SPE);// (SPCR=SPCR _BV(SPE) turn on SPI in slave mode
   SPCR |= _BV(SPIE);
   indx = 0; // buffer empty
   process = false;
   SPDR = c;
   SPI.attachInterrupt(); // turn on interrupt
     if (process) {
      Serial.print("Sending..");
      Serial.println (buff);
      process = false; //reset the process
   }
}
ISR (SPI_STC_vect){// SPI interrupt routine { 
   buff = SPDR; // read byte from SPI Data Register
   process = true;
   }

void loop (void) {
 //print the array on serial monitor
      Serial.print("Recieved..");
      Serial.println(buff);
      delay(1000);
}
