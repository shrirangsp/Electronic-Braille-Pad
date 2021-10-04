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
int G1=3;
int BB11=4;
int R2=5;
int G2=6;
int B2=7;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(G1,OUTPUT);
  pinMode(R1,OUTPUT);
  pinMode(BB11,OUTPUT);
  pinMode(R2,OUTPUT);
  pinMode(G2,OUTPUT);
  pinMode(B2,OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(R1,LOW);
   digitalWrite(R2,LOW);
  
  digitalWrite(BB11,LOW);
  digitalWrite(B2,LOW);
                                            // turn the LED on (HIGH is the voltage level)
  digitalWrite(G1,HIGH);
   digitalWrite(G2,HIGH);
  delay(1000);
      
//wait for a second
 
  // turn the LED off by making the voltage LOW    
  // wait for a second
  
  digitalWrite(R1,LOW);
   digitalWrite(R2,LOW);
  
  digitalWrite(G1,LOW);
   digitalWrite(G2,LOW);
                                            // turn the LED on (HIGH is the voltage level)
  digitalWrite(BB11,HIGH);
                                             // turn the LED on (HIGH is the voltage level)
   digitalWrite(B2,HIGH);
  delay(1000);
  
 
  
  
   
 
  
  digitalWrite(G1,LOW);
   digitalWrite(G2,LOW);
                                            // turn the LED on (HIGH is the voltage level)
  digitalWrite(BB11,LOW);
  digitalWrite(B2,LOW);
  
  digitalWrite(R1,HIGH);
   digitalWrite(R2,HIGH);
  delay(1000);
  

}


