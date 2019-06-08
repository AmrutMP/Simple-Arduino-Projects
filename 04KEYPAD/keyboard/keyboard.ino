
char keyboard[4][4]=
{{'0','1','2','3'},
 {'4','5','6','7'},
 {'8','9','A','B'},
 {'C','D','E','F'} 
};
int rowpin[4]={10,11,12,13};
int colmpin[4]={6,7,8,9};

void setup() {
  Serial.begin(9600);
  Serial.println("4x4 KEYPAD");
  pinMode(rowpin[4],INPUT);
  pinMode(colmpin[4],INPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
