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
  by Arturo Guadalupi
*/


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(3, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  delay(1000); 
  digitalWrite(4, LOW);// turn the LED on (HIGH is the voltage level)
      
//wait for a second
  digitalWrite(3, LOW); 
  delay(1000);
  digitalWrite(2, HIGH);
  delay(1000); 
  digitalWrite(4, LOW);// turn the LED off by making the voltage LOW    
  // wait for a second
   digitalWrite(3, LOW); 
  delay(1000);
  digitalWrite(2, LOW);
  delay(1000); 
  digitalWrite(4, HIGH);
  
}


