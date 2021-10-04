
#include <SoftwareSerial.h> //serial port 

SoftwareSerial mySerial(9, 10);//initialising gsm
int R1=2;
int R2=3;
int R3=4;
int R4=5;
int R5=6;
int R6=7;
//char msg[] = "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z";
char msg[] = "";

//char msg[] ="a b c d e f g h i j k l m n o p q r s t u v w x y z";
//char msg[] = "HELLO ";
//char msg[] = "PRASHANT ";

String inData;
String inData1;
int cnt=0;
void setup() {  
Serial.begin(9600);
 
  pinMode(R1,OUTPUT);
  pinMode(R2,OUTPUT);
  pinMode(R3,OUTPUT);
  pinMode(R4,OUTPUT);
  pinMode(R5,OUTPUT);
  pinMode(R6,OUTPUT);
  mySerial.begin(9600);   // Setting the baud rate of GSM Module  
   mySerial.print("AT+CMGDA=\""); 
  //delay(100);
 
  mySerial.println("DEL ALL\"");
  delay(500);
 
 // Serial.begin(9600);    // Setting the baud rate of Serial Monitor (Arduino)
  delay(5000);
mySerial.println("AT+CNMI=2,2,0,0,0"); // AT Command to receive a live SMS
  delay(1000);
}


void loop() {
while (mySerial.available() > 0)
    {
        char recieved = mySerial.read();
        inData += recieved; 

        // Process message when new line character is recieved
        if (recieved == '\n')
        {
            

            // You can put some if and else here to process the message juste like that:
if(cnt==1)
  {
    inData1=inData;
     Serial.print("Message received:"); 
     Serial.println(inData1);
      cnt=0;
      int slen = inData1.length();
      
      inData1.toCharArray(msg,slen);
      int len = strlen(msg);
     // len=len-1;
for (int i = 0; i < len; i++){
   Serial.println(msg[i]);
   
//   delay(500);
  msgstr(msg[i]);
 //  msgstr(' ');
  }
       inData1="";
  }
  else
  {
              Serial.print(inData);
           
  }
            if ((inData.startsWith("+CMT:", 0))&&cnt==0) {
              cnt=1;
    } 
 
           inData = ""; // Clear recieved buffer
        }
    }
  
  
  
 
}


void msgstr( char str)
{

  
  if (str=='A' || str== 'a' )
  {
  alphabate(1,0,0,0,0,0); //A
  }
   else if (str=='B' || str== 'b' )
  {
  alphabate(1,1,0,0,0,0);    //B
  }

 else if (str=='C' || str== 'c' )
  {
   alphabate(1,0,0,1,0,0);  //c
  }

else if (str=='D' || str== 'd' )
  {
    alphabate(1,0,0,1,1,0);    //D
   
  }
else if (str=='E' || str== 'e' )
  {
   alphabate(1,0,0,0,1,0);    //E
 
  }
else if (str=='F' || str== 'f' )
  {
  alphabate(1,1,0,1,0,0);    //F
   
  }
else if (str=='G' || str== 'g' )
  {
  alphabate(1,1,0,1,1,0);  //G  
 
  }
else if (str=='H' || str== 'h' )
  {
  alphabate(1,1,0,0,1,0);    //H
   
  }
  else if (str=='I' || str== 'i' )
  {
  alphabate(0,1,0,1,0,0);  //I
 
  }else if (str=='J' || str== 'j' )
  {
    alphabate(0,1,0,1,1,0);  //J  
  
  }
  else if (str=='K' || str== 'k' )
  {
  alphabate(1,0,1,0,0,0);   //K 

  }
  else if (str=='L' || str== 'l' )
  {
   alphabate(1,1,1,0,0,0);    //L
   
  }else if (str=='M' || str== 'm' )
  {
  alphabate(1,0,1,1,0,0);  //M  
 
  }
  else if (str=='N' || str== 'n' )
  {
  alphabate(1,0,1,1,1,0);    //N
 
  }
  else if (str=='O' || str== 'o' )
  {
    alphabate(1,0,1,0,1,0);  //O  
 
  }
  else if (str=='P' || str== 'p' )
  {
  alphabate(1,1,1,1,0,0);    //P
  
  }
  else if (str=='Q' || str== 'q' )
  {
   alphabate(1,1,1,1,1,0);  //Q  
  
  }
  else if (str=='R' || str== 'r' )
  {
 alphabate(1,1,1,0,1,0);    //R
   
  }
  else if (str=='S' || str== 's' )
  {
  alphabate(0,1,1,1,0,0);  //S  
 
  }
  else if (str=='T' || str== 't' )
  {
  alphabate(0,1,1,1,1,0);    //T
  
  }
  else if (str=='U' || str== 'u' )
  {
  alphabate(1,0,1,0,0,1);   //U 

  }
  else if (str=='V' || str== 'v' )
  {
   alphabate(1,1,1,0,0,1);    //V
   
  }
  else if (str=='W' || str== 'w' )
  {
  alphabate(0,1,0,1,1,1);  //W  
 
  }
  else if (str=='X' || str== 'x' )
  {
  alphabate(1,0,1,1,0,1);    //X
  
  }
  else if (str=='Y' || str== 'y' )
  {
   alphabate(1,0,1,1,1,1);  //Y  
 
  }
  else if (str=='Z' || str== 'z' )
  {
  alphabate(1,0,1,0,1,1);    //Z
  }
  else 
  {
 alphabate(1,1,1,1,1,1); // space
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
