/*
Uses a FOR loop for data and prints a number in various formats.
*/
int x = 0; 
int n = 0;
// variable

void setup() {
  Serial.begin(9600);      // open the serial port at 9600 bps:    
}

void loop() {  


    for(n=1;n<5; n++)
 {
  
    for(x=1;x<11; x++)
 {
  Serial.print(n);
  Serial.print("\t");
  Serial.print("x");
  Serial.print("\t");
  Serial.print(x);
  Serial.print("\t");
 Serial.print("=");
  Serial.print("\t");
 Serial.print(n*x);
  Serial.println("\t");
       
 }

  Serial.println("");      // prints another carriage return
 }


     
  
   delay(2000);            // delay 200 milliseconds
  Serial.println("");      // prints another carriage return
}
