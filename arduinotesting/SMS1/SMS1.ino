#include <SoftwareSerial.h>

SoftwareSerial mySerial(9,10);

void setup()
{
  mySerial.begin(9600);               // the GPRS baud rate   
  Serial.begin(9600);    // the GPRS baud rate 
  delay(500);
  RecieveTextMessage();
}

String content = "";
void loop()
{
  if (Serial.available()>0)
   switch(Serial.read())
  {
    case 't':
      SendTextMessage();
      break;
    case 'r':
      RecieveTextMessage();
      break;
  case 'd':
      delSMS();
      break;
  case 'c':
      Serial.println(content);
      break;
  
  }

 if (mySerial.available()>0)
 {
  // Serial.write(mySerial.read());
 content = "";
  char character;

  while(mySerial.available()) {
      character = mySerial.read();
      content.concat(character);
  }

  if (content != "") {
    Serial.println(content);
  }
 }
}

///SendTextMessage()
///this function is to send a sms
 void SendTextMessage()
{
  mySerial.println("AT+CMGF=1");    //Because we want to send the SMS in text mode
  delay(100);
  mySerial.println("AT+CMGS=\"+91******\"\r"); // change to the phone number you using 
  delay(100);
  mySerial.println("A test message!");//the content of the message
  delay(100);
  
  mySerial.println((char)26);//the ASCII code of the ctrl+z is 26
  delay(100);
}

///RecieveTextMessage()
///this function is to show received a sms
 void RecieveTextMessage()
{
  mySerial.println("AT+CMGF=1\r");
  delay(200);
  
  //mySerial.println("AT+CNMI=2,2,0,0,0");
  //delay(200);
   
  //mySerial.println("AT+CSCS=\"GSM\"\r");
  //delay(100);
   
  mySerial.println("AT+CMGL=\"ALL\"\r"); // to read ALL the SMS in text mode
  delay(200);
  //mySerial.println("AT+CMGR=3\r");//  to read the SMS in text mode from location x
  //delay(100);
}

void delSMS() {  // Delete All messages
  //mySerial.println( "AT+CMGF=1" ); // Did not help
 //delay(1000);                                        //Did not help
  mySerial.print("AT+CMGDA=\""); 
  mySerial.println("DEL ALL\"");
  delay(500);
 Serial.println( "All Messages Deleted" );
}
