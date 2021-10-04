/***********************************************************************
*   I2C_EEPROM_main.c									  
************************************************************************/

#include "address_c.h"
#include "functions.h"
#include <board.h>

#define ENABLE 0x040
#define START  0x020
#define STOP   0x10
#define SI     0x08
#define AA     0x04

#define DISABLE   0x040
#define START_CLR 0x020
#define STOP_CLR  0x10
#define SI_CLR    0x08
#define AA_CLR    0x04

int data[200],length=0;

int main(void)
{
	q_printf("\nin main function ");
	i2c_init();
	i2c_eeprom_write(0,0,0,16);
	i2c_eeprom_read(0,0,0,16);
		
asm("loop_forever : b loop_forever");	
return 0;
}


/*@@@@@@@@@@@@@@@@@@ delay @@@@@@@@@@@@@@@@@@@@@*/

void delay(u32 val)
{
	while(val--)
	{
	asm("nop");
	}
}

/*@@@@@@@@@@@@@@@@ init function @@@@@@@@@@@@@@@@@@@*/

void i2c_init()
{
	q_printf("\n in init() ");
	*PINSEL0 = *PINSEL0 & 0XFFFFFF0F;	// SELECT THE PIN for  I2C
	*PINSEL0 = *PINSEL0 | 0X00000050;
	
	*I2CONCLR = DISABLE | START_CLR | STOP_CLR | SI_CLR | AA_CLR;

	*I2SCLH = 150;		//set the bit frequency to 50 khz
	*I2SCLL = 150;	
}

/*@@@@@@@@@@@@@@@@@ read @@@@@@@@@@@@@@@@@@@@@*/

void read_data()
{
q_printf("\n in read() \n ");
	int i=0;
	for(i=length;i>0;i--)
	{
	q_printf("%x", data[i]);
	}
}

/*@@@@@@@@@@@@@@@@@@@@ wait @@@@@@@@@@@@@@@@@@@@*/

void wait_for_ack(u32 status)
{
	while(1)				
	{
		if(*I2CONSET & SI) 
		{
			if(*I2STAT == status)
			{
				break;
			}
			else
			{
				q_printf("\n ERROR STATUS RECEIVED = ");
				q_printf("%x", *I2STAT);
				*I2CONSET = STOP;
				*I2CONCLR = 0xFF;
			asm("b loop_forever");
			}
		}
	}
}

/*@@@@@@@@@@@@@@@@@@ transmit function @@@@@@@@@@@@@@@@@*/

void i2c_eeprom_write(u8 dev_addr,u8 page_no,u8 page_offset,u8 no_bytes)
{
	q_printf(" \n in write()");

	*I2CONSET = ENABLE;
	delay(1000);

/*---------------------transmit a START and address with write---------------------*/

	*I2CONSET = START;
	wait_for_ack(0x08);
	q_printf("\n START successful");
	
	*I2DAT = ( (dev_addr <<1)| 0XA0);	// transmit slave address with write bit
	*I2CONCLR = SI_CLR;
	*I2CONCLR = START_CLR;	// clear the START bit to avoid retransmit of START	

	wait_for_ack(0x18);
	q_printf("\n address transmit successful");
	
/*-----------------------transmit page no-----------------------------*/

	q_printf("\n transmitting page address");
	*I2DAT = page_no;			// transmit page address
	*I2CONCLR =  SI_CLR;
	wait_for_ack(0x28);
	
	*I2DAT = page_offset;			// transmit offset within the page
	*I2CONCLR =  SI_CLR;
	q_printf("\n page address transmitted successfully");	
	

/*-----------------------------transmit data------------------------------*/

	q_printf("\n transmitting data");	
	while(no_bytes > 0)	
	{
		wait_for_ack(0x28);
		*I2DAT = 0x5A;
		 no_bytes--;
	        *I2CONCLR = SI_CLR;
	}
	q_printf("\n data transmitted successfully");	
	
/*-------------------transmit a STOP and do acknowledge polling---------------------------------*/

	wait_for_ack(0x28);
	*I2CONCLR = SI_CLR;
	*I2CONSET = STOP ;
		while(!(*I2CONSET & SI))
		{
		*I2CONSET = START;		// do acknowledge polling
		delay(100);
		*I2DAT = 0XA1;	
		while(1)				
		{q_printf(" \n waiting");
			if(*I2CONSET & SI) break;
		}						
		}	
	*I2CONCLR = DISABLE | START_CLR | STOP_CLR | SI_CLR | AA_CLR;
}

/*@@@@@@@@@@@@@@@@ receive function @@@@@@@@@@@@@@@@@@*/

void i2c_eeprom_read(u8 dev_addr,u8 page_no,u8 page_offset,u8 no_bytes)
{
	q_printf("\n in read()");
	length = no_bytes;
	
	*I2CONSET = ENABLE ;
	delay(1000);

/*---------------------transmit a START and address---------------------*/

	*I2CONSET = START;
	wait_for_ack(0x08);
	q_printf("\n START successful");

	*I2CONCLR = START_CLR;	// clear the START bit to avoid retransmit of START	
	*I2DAT = ( (dev_addr <<1)| 0XA0);
	*I2CONCLR = SI_CLR;

	wait_for_ack(0x18);	
	q_printf("\n address transmit successful");
/*-----------------------transmit page no-----------------------------*/

	q_printf("\n transmitting page address");
	*I2DAT = page_no;
	*I2CONCLR =  SI_CLR;
	wait_for_ack(0x28);
	
	*I2DAT = page_offset;
	*I2CONCLR =  SI_CLR;
	wait_for_ack(0x28);
	q_printf("\n page address transmitted successfully");	
	wait_for_ack(0x28);
	*I2CONCLR = SI_CLR;

	*I2CONSET =  START ;
	wait_for_ack(0x10);
	*I2CONCLR = START_CLR;	//put the address and the read bit	

	*I2CONSET = AA;
	*I2DAT = ( (dev_addr <<1)| 0XA1);
	*I2CONCLR = SI_CLR;
	wait_for_ack(0x40);
	*I2CONCLR = SI_CLR;
	
/*-----------------------------receive data------------------------------*/	

	while(no_bytes>0)
	{
		wait_for_ack(0x50);
		data[no_bytes] = *I2DAT;
		no_bytes--;		    
	        *I2CONCLR = SI_CLR;
	}
	wait_for_ack(0x50);
	*I2CONCLR = AA_CLR;
	*I2CONCLR = SI_CLR;
	wait_for_ack(0x58);

/*-------------------transmit a STOP---------------------------------*/
	
	*I2CONSET =STOP ;
	*I2CONCLR = DISABLE | START_CLR | STOP_CLR | SI_CLR | AA_CLR;
	read_data();

}
