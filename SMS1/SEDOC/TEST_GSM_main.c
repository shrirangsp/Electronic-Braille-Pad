#include  <lpc21xx.h>		 //Includes LPC2148 register definitions

void _DelayMs(unsigned int);
unsigned char GsmSendMsg(unsigned char *msgStr);
void _DelayMs(unsigned int count);

unsigned char usrNumStr[20]="9404276434";	//Receiptent Mobile Number


void Uart0Init (void)			    // Initialize Serial Interface       
{               	   
    *PINSEL0 |= 0x00000005;           //Enable RxD0 and TxD0                     
    *U0LCR = 0x83;                   // 8 bits, no Parity, 1 Stop bit            
    *U0DLL = 97;                     // 9600 Baud Rate @ 15MHz VPB Clock         
    *U0LCR = 0x03; 					// DLAB = 0  
}
				
void Uart0PutCh (unsigned char ch)   // Write character to Serial Port   
{                  		
   	*U0THR = ch;
	  while (!(*U0LSR & 0x20));     /////Checking whether transmitter buffer is empty or not//
}

unsigned char Uart0GetCh (void)		// Read character from Serial Port   
{            
  while (!(*U0LSR & 0x01));   ///Checking whether receiver buffer is full or not//
  return (*U0RBR);
}

void  Uart0PutS(unsigned char *str)	 //A function to send a string on UART0
{  
   while(*str)
   {  
      Uart0PutCh(*str++);	    
   }
}


int main(void)
{  
   Uart0Init();
   Uart0PutS("AT\r");  //Turn echo off
  _DelayMs(500);
  Uart0PutS("ATE0\r");  //Turn echo off
  _DelayMs(500);
  Uart0PutS("ATD9404276434;\r");	//replace xxxxxxxxxx with number to call
  _DelayMs(20000);
   Uart0PutS("ATH0\r");							   	//disconnect call
  _DelayMs(3000);
  GsmSendMsg("GSM Interfacing program");
 
	while(1);
}

unsigned char GsmSendMsg(unsigned char *msgStr)
{
    Uart0PutS("AT+CMGS="); //Send SMS to
    Uart0PutS(usrNumStr);   // mobile number
    Uart0PutCh('\r');
    _DelayMs(100);  // 
    Uart0PutS(msgStr);
    _DelayMs(100);  // 
    Uart0PutCh(0x1A);
    _DelayMs(3000);  // 
    return (1);
}

void _DelayMs(unsigned int count) 
{
    volatile unsigned int j,k;
    for (j=0;j<count;j++) 
	{
        for (k=0;k<6000;k++) 
		{
        }
    }
}
