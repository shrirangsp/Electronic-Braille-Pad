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
int G=2;
int Y=3;
int O1=4;
int O2=5;
int R=6;
int BB11=7;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(G,OUTPUT);
  pinMode(Y,OUTPUT);
  pinMode(O1,OUTPUT);
  pinMode(O2,OUTPUT);
  pinMode(R,OUTPUT);
  pinMode(BB11,OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  //transmit A
  digitalWrite(G,HIGH);
   digitalWrite(Y,LOW);
  
  digitalWrite(O1,LOW);
  digitalWrite(O2,LOW);
                                            // turn the LED on (HIGH is the voltage level)
  digitalWrite(R,LOW);
   digitalWrite(BB11,LOW);
  delay(3000);
      
//wait for a second
 
  // turn the LED off by making the voltage LOW    
  // wait for a second

  
  //Transmit B
  digitalWrite(G,HIGH);
  digitalWrite(Y,HIGH);
  
  digitalWrite(O1,LOW);
  digitalWrite(O2,LOW);
                                            // turn the LED on (HIGH is the voltage level)
  digitalWrite(BB11,LOW);
                                             // turn the LED on (HIGH is the voltage level)
   digitalWrite(R,LOW);
  delay(3000);
  
 
  //Transmit C 
  
  digitalWrite(G,HIGH);
  digitalWrite(Y,LOW); 
 digitalWrite(BB11,LOW);
  digitalWrite(O1,LOW);
  digitalWrite(O2,HIGH);
   digitalWrite(R,LOW);
  
  
  delay(3000);
  


//Transmit D

  digitalWrite(G,HIGH);
  digitalWrite(Y,LOW); 
  digitalWrite(O2,HIGH);
  digitalWrite(R,HIGH);
  digitalWrite(BB11,LOW);
  digitalWrite(O1,LOW);  
  
  delay(3000);
  

//transmit E
  digitalWrite(G,HIGH);
  digitalWrite(Y,LOW); 
 digitalWrite(BB11,LOW);
  digitalWrite(O1,LOW);
   digitalWrite(R,HIGH);
    digitalWrite(O2,LOW);
  
  
  delay(3000);
}

 //transmit F
  digitalWrite(G,HIGH);
   digitalWrite(Y,LOW);
  
  digitalWrite(O1,LOW);
  digitalWrite(O2,LOW);
                                            // turn the LED on (HIGH is the voltage level)
  digitalWrite(R,LOW);
   digitalWrite(BB11,LOW);
  delay(3000);
      
//wait for a second
 
  // turn the LED off by making the voltage LOW    
  // wait for a second

  
  //Transmit G
  digitalWrite(G,HIGH);
  digitalWrite(Y,HIGH);
  
  digitalWrite(O1,LOW);
  digitalWrite(O2,LOW);
                                            // turn the LED on (HIGH is the voltage level)
  digitalWrite(BB11,LOW);
                                             // turn the LED on (HIGH is the voltage level)
   digitalWrite(R,LOW);
  delay(3000);
  
 
  //Transmit H 
  
  digitalWrite(G,HIGH);
  digitalWrite(Y,LOW); 
 digitalWrite(BB11,LOW);
  digitalWrite(O1,LOW);
  digitalWrite(O2,HIGH);
   digitalWrite(R,LOW);
  
  
  delay(3000);
  


//Transmit I

  digitalWrite(G,HIGH);
  digitalWrite(Y,LOW); 
  digitalWrite(O2,HIGH);
  digitalWrite(R,HIGH);
  digitalWrite(BB11,LOW);
  digitalWrite(O1,LOW);  
  
  delay(3000);
  

//transmit J
  digitalWrite(G,HIGH);
  digitalWrite(Y,LOW); 
 digitalWrite(BB11,LOW);
  digitalWrite(O1,LOW);
   digitalWrite(R,HIGH);
    digitalWrite(O2,LOW);
  
  
  delay(3000);
} //transmit K
  digitalWrite(G,HIGH);
   digitalWrite(Y,LOW);
  
  digitalWrite(O1,LOW);
  digitalWrite(O2,LOW);
                                            // turn the LED on (HIGH is the voltage level)
  digitalWrite(R,LOW);
   digitalWrite(BB11,LOW);
  delay(3000);
      
//wait for a second
 
  // turn the LED off by making the voltage LOW    
  // wait for a second

  
  //Transmit L
  digitalWrite(G,HIGH);
  digitalWrite(Y,HIGH);
  
  digitalWrite(O1,LOW);
  digitalWrite(O2,LOW);
                                            // turn the LED on (HIGH is the voltage level)
  digitalWrite(BB11,LOW);
                                             // turn the LED on (HIGH is the voltage level)
   digitalWrite(R,LOW);
  delay(3000);
  
 
  //Transmit M 
  
  digitalWrite(G,HIGH);
  digitalWrite(Y,LOW); 
 digitalWrite(BB11,LOW);
  digitalWrite(O1,LOW);
  digitalWrite(O2,HIGH);
   digitalWrite(R,LOW);
  
  
  delay(3000);
  


//Transmit N

  digitalWrite(G,HIGH);
  digitalWrite(Y,LOW); 
  digitalWrite(O2,HIGH);
  digitalWrite(R,HIGH);
  digitalWrite(BB11,LOW);
  digitalWrite(O1,LOW);  
  
  delay(3000);
  

//transmit O
  digitalWrite(G,HIGH);
  digitalWrite(Y,LOW); 
 digitalWrite(BB11,LOW);
  digitalWrite(O1,LOW);
   digitalWrite(R,HIGH);
    digitalWrite(O2,LOW);
  
  
  delay(3000);
} //transmit A
  digitalWrite(G,HIGH);
   digitalWrite(Y,LOW);
  
  digitalWrite(O1,LOW);
  digitalWrite(O2,LOW);
                                            // turn the LED on (HIGH is the voltage level)
  digitalWrite(R,LOW);
   digitalWrite(BB11,LOW);
  delay(3000);
      
//wait for a second
 
  // turn the LED off by making the voltage LOW    
  // wait for a second

  
  //Transmit B
  digitalWrite(G,HIGH);
  digitalWrite(Y,HIGH);
  
  digitalWrite(O1,LOW);
  digitalWrite(O2,LOW);
                                            // turn the LED on (HIGH is the voltage level)
  digitalWrite(BB11,LOW);
                                             // turn the LED on (HIGH is the voltage level)
   digitalWrite(R,LOW);
  delay(3000);
  
 
  //Transmit C 
  
  digitalWrite(G,HIGH);
  digitalWrite(Y,LOW); 
 digitalWrite(BB11,LOW);
  digitalWrite(O1,LOW);
  digitalWrite(O2,HIGH);
   digitalWrite(R,LOW);
  
  
  delay(3000);
  


//Transmit D

  digitalWrite(G,HIGH);
  digitalWrite(Y,LOW); 
  digitalWrite(O2,HIGH);
  digitalWrite(R,HIGH);
  digitalWrite(BB11,LOW);
  digitalWrite(O1,LOW);  
  
  delay(3000);
  

//transmit E
  digitalWrite(G,HIGH);
  digitalWrite(Y,LOW); 
 digitalWrite(BB11,LOW);
  digitalWrite(O1,LOW);
   digitalWrite(R,HIGH);
    digitalWrite(O2,LOW);
  
  
  delay(3000);
} //transmit A
  digitalWrite(G,HIGH);
   digitalWrite(Y,LOW);
  
  digitalWrite(O1,LOW);
  digitalWrite(O2,LOW);
                                            // turn the LED on (HIGH is the voltage level)
  digitalWrite(R,LOW);
   digitalWrite(BB11,LOW);
  delay(3000);
      
//wait for a second
 
  // turn the LED off by making the voltage LOW    
  // wait for a second

  
  //Transmit B
  digitalWrite(G,HIGH);
  digitalWrite(Y,HIGH);
  
  digitalWrite(O1,LOW);
  digitalWrite(O2,LOW);
                                            // turn the LED on (HIGH is the voltage level)
  digitalWrite(BB11,LOW);
                                             // turn the LED on (HIGH is the voltage level)
   digitalWrite(R,LOW);
  delay(3000);
  
 
  //Transmit C 
  
  digitalWrite(G,HIGH);
  digitalWrite(Y,LOW); 
 digitalWrite(BB11,LOW);
  digitalWrite(O1,LOW);
  digitalWrite(O2,HIGH);
   digitalWrite(R,LOW);
  
  
  delay(3000);
  


//Transmit D

  digitalWrite(G,HIGH);
  digitalWrite(Y,LOW); 
  digitalWrite(O2,HIGH);
  digitalWrite(R,HIGH);
  digitalWrite(BB11,LOW);
  digitalWrite(O1,LOW);  
  
  delay(3000);
  

//transmit E
  digitalWrite(G,HIGH);
  digitalWrite(Y,LOW); 
 digitalWrite(BB11,LOW);
  digitalWrite(O1,LOW);
   digitalWrite(R,HIGH);
    digitalWrite(O2,LOW);
  
  
  delay(3000);
} //transmit A
  digitalWrite(G,HIGH);
   digitalWrite(Y,LOW);
  
  digitalWrite(O1,LOW);
  digitalWrite(O2,LOW);
                                            // turn the LED on (HIGH is the voltage level)
  digitalWrite(R,LOW);
   digitalWrite(BB11,LOW);
  delay(3000);
      
//wait for a second
 
  // turn the LED off by making the voltage LOW    
  // wait for a second

  
  //Transmit B
  digitalWrite(G,HIGH);
  digitalWrite(Y,HIGH);
  
  digitalWrite(O1,LOW);
  digitalWrite(O2,LOW);
                                            // turn the LED on (HIGH is the voltage level)
  digitalWrite(BB11,LOW);
                                             // turn the LED on (HIGH is the voltage level)
   digitalWrite(R,LOW);
  delay(3000);
  
 
  //Transmit C 
  
  digitalWrite(G,HIGH);
  digitalWrite(Y,LOW); 
 digitalWrite(BB11,LOW);
  digitalWrite(O1,LOW);
  digitalWrite(O2,HIGH);
   digitalWrite(R,LOW);
  
  
  delay(3000);
  


//Transmit D

  digitalWrite(G,HIGH);
  digitalWrite(Y,LOW); 
  digitalWrite(O2,HIGH);
  digitalWrite(R,HIGH);
  digitalWrite(BB11,LOW);
  digitalWrite(O1,LOW);  
  
  delay(3000);
  

//transmit E
  digitalWrite(G,HIGH);
  digitalWrite(Y,LOW); 
 digitalWrite(BB11,LOW);
  digitalWrite(O1,LOW);
   digitalWrite(R,HIGH);
    digitalWrite(O2,LOW);
  
  
  delay(3000);
}
