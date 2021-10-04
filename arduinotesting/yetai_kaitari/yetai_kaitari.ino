/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO 
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN takes care 
  of use the correct LED pin whatever is the board used.
  If you want to know what pin the on-board LED is connected to on your Arduino model, check
  the Technical Specs of your board  at https://www.arduino.cc/en/Main/Products
  
  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
  
  modified 2 Sep 2016
  by Arturo Guadalupiint 
*/
int R1=2;
int R2=3;
int R3=4;
int R4=5;
int R5=6;
int R6=7;
char msg[] = " fuckoff ";
// the setup function runs once when you press reset or power the board
void setup() {  
Serial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(R1,OUTPUT);
  pinMode(R2,OUTPUT);
  pinMode(R3,OUTPUT);
  pinMode(R4,OUTPUT);
  pinMode(R5,OUTPUT);
  pinMode(R6,OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  int len = strlen(msg);
for (int i = 0; i < len; i++){
   Serial.println(msg[i]);
//   delay(500);
  if (msg[i]=='A' || msg[i]== 'a' )
  {
  alphabate(1,0,0,0,0,0); //A
  }
   else if (msg[i]=='B' || msg[i]== 'b' )
  {
  alphabate(1,1,0,0,0,0);    //B
  }

 else if (msg[i]=='C' || msg[i]== 'c' )
  {
   alphabate(1,0,0,1,0,0);  //c
  }

else if (msg[i]=='D' || msg[i]== 'd' )
  {
    alphabate(1,0,0,1,1,0);    //D
   
  }
else if (msg[i]=='E' || msg[i]== 'e' )
  {
   alphabate(1,0,0,0,1,0);    //E
 
  }
else if (msg[i]=='F' || msg[i]== 'f' )
  {
  alphabate(1,1,0,1,0,0);    //F
   
  }
else if (msg[i]=='G' || msg[i]== 'g' )
  {
  alphabate(1,1,0,1,1,0);  //G  
 
  }
else if (msg[i]=='H' || msg[i]== 'h' )
  {
  alphabate(1,1,0,0,1,0);    //H
   
  }
  else if (msg[i]=='I' || msg[i]== 'i' )
  {
  alphabate(0,1,0,1,0,0);  //I
 
  }else if (msg[i]=='J' || msg[i]== 'j' )
  {
    alphabate(0,1,0,1,1,0);  //J  
  
  }
  else if (msg[i]=='K' || msg[i]== 'k' )
  {
  alphabate(1,0,1,0,0,0);   //K 

  }
  else if (msg[i]=='L' || msg[i]== 'l' )
  {
   alphabate(1,1,1,0,0,0);    //L
   
  }else if (msg[i]=='M' || msg[i]== 'm' )
  {
  alphabate(1,0,1,1,0,0);  //M  
 
  }
  else if (msg[i]=='N' || msg[i]== 'n' )
  {
  alphabate(1,0,1,1,1,0);    //N
 
  }
  else if (msg[i]=='O' || msg[i]== 'o' )
  {
    alphabate(1,0,1,0,1,0);  //O  
 
  }
  else if (msg[i]=='P' || msg[i]== 'p' )
  {
  alphabate(1,1,1,1,0,0);    //P
  
  }
  else if (msg[i]=='Q' || msg[i]== 'q' )
  {
   alphabate(1,1,1,1,1,0);  //Q  
  
  }
  else if (msg[i]=='R' || msg[i]== 'r' )
  {
 alphabate(1,1,1,0,1,0);    //R
   
  }
  else if (msg[i]=='S' || msg[i]== 's' )
  {
  alphabate(0,1,1,1,0,0);  //S  
 
  }
  else if (msg[i]=='T' || msg[i]== 't' )
  {
  alphabate(0,1,1,1,1,0);    //T
  
  }
  else if (msg[i]=='U' || msg[i]== 'u' )
  {
  alphabate(1,0,1,0,0,1);   //U 

  }
  else if (msg[i]=='V' || msg[i]== 'v' )
  {
   alphabate(1,1,1,0,0,1);    //V
   
  }
  else if (msg[i]=='W' || msg[i]== 'w' )
  {
  alphabate(0,1,0,1,1,1);  //W  
 
  }
  else if (msg[i]=='X' || msg[i]== 'x' )
  {
  alphabate(1,0,1,1,0,1);    //X
  
  }
  else if (msg[i]=='Y' || msg[i]== 'y' )
  {
   alphabate(1,0,1,1,1,1);  //Y  
 
  }
  else if (msg[i]=='Z' || msg[i]== 'z' )
  {
  alphabate(1,0,1,0,1,1);    //Z
  }
  else 
  {
 alphabate(0,0,0,0,0,0);
  }
  }
  
 /*
  alphabate(1,0,0,0,0,0); //A
  alphabate(1,1,0,0,0,0);    //B
    alphabate(1,0,0,1,0,0);  //c
  alphabate(1,0,0,1,1,0);    //D
    alphabate(1,0,0,0,1,0);    //E
  alphabate(1,1,0,1,0,0);    //F
    alphabate(1,1,0,1,1,0);  //G  
  alphabate(1,1,0,0,1,0);    //H
    alphabate(0,1,0,1,0,0);  //I
    alphabate(0,1,0,1,1,0);  //J  
   alphabate(1,0,1,0,0,0);   //K 
  alphabate(1,1,1,0,0,0);    //L
    alphabate(1,0,1,1,0,0);  //M  
  alphabate(1,0,1,1,1,0);    //N
    alphabate(1,0,1,0,1,0);  //O  
  alphabate(1,1,1,1,0,0);    //P
    alphabate(1,1,1,1,1,0);  //Q  
  alphabate(1,1,1,0,1,0);    //R
    alphabate(0,1,1,1,0,0);  //S  
  alphabate(0,1,1,1,1,0);    //T
   alphabate(1,0,1,0,0,1);   //U 
  alphabate(1,1,1,0,0,1);    //V
    alphabate(0,1,0,1,1,1);  //W  
  alphabate(1,0,1,1,0,1);    //X
    alphabate(1,0,1,1,1,1);  //Y  
  alphabate(1,0,1,0,1,1);    //Z
   
  
  alphabate(0,0,0,0,0,0);
*/
}


void alphabate(int RR1, int RR2,int RR3,int RR4,int RR5,int RR6){
   digitalWrite(R1,RR1);
   digitalWrite(R2,RR2);
  
  digitalWrite(R3,RR3);
  digitalWrite(R4,RR4);
                                            // turn the LED on (HIGH is the voltage level)
  digitalWrite(R5,RR5);
   digitalWrite(R6,RR6);
  delay(3000);
}
