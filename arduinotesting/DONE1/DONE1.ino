

int R1=2;
int R2=3;
int R3=4;
int R4=5;
int R5=6;
int R6=7;
 char msg[] = "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z";
//char msg[] ="a b c d e f g h i j k l m n o p q r s t u v w x y z";
//char msg[] = "HELLO ";
//char msg[] = "PRASHANT ";
void setup() {  
Serial.begin(9600);
 
  pinMode(R1,OUTPUT);
  pinMode(R2,OUTPUT);
  pinMode(R3,OUTPUT);
  pinMode(R4,OUTPUT);
  pinMode(R5,OUTPUT);
  pinMode(R6,OUTPUT);
}


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
 alphabate(1,1,1,1,1,1); // space
  }
  }
  
 
}


void alphabate(int RR1, int RR2,int RR3,int RR4,int RR5,int RR6){
   digitalWrite(R1,RR1);
   digitalWrite(R2,RR2);
  
  digitalWrite(R3,RR3);
  digitalWrite(R4,RR4);
                                          
  digitalWrite(R5,RR5);
   digitalWrite(R6,RR6);
  delay(2000);
 
  digitalWrite(R1,0);
   digitalWrite(R2,0);
  
  digitalWrite(R3,0);
  digitalWrite(R4,0);
                                            
  digitalWrite(R5,0);
   digitalWrite(R6,0);
   delay(1000);
}
