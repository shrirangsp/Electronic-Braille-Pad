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

// the setup function runs once when you press reset or power the board
void setup() {
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
  //transmit A
 
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
