#include "lpc17xx.h"
#include "pwm.h"

#define CHANNEL_NUM			1



void delay(void )
{
	int i, j;
	for(i=0; i<10000; i++)
		for(j=0; j<1000; j++);
}

int main (void)
{	    
  uint32_t cycle = PWM_CYCLE, offset = 0x3fff;

 
  if ( PWM_Init( CHANNEL_NUM, 0 ) != 1 )
  {
	while( 1 );			
  }

  PWM_Set( CHANNEL_NUM, cycle, offset );
  PWM_Start( CHANNEL_NUM );

  while ( 1 )
  {

	  PWM_Set( CHANNEL_NUM, cycle, offset );
	  offset = offset + 0xFF;
	  delay();
	  if(offset >=(cycle*7-cycle))
	  	offset = 0x3fff;
	 
  }
}
