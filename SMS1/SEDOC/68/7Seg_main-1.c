#include<LPC17xx.h>
void delay(void);
int main()
{
	int i, j, k;
	int array[] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f, 0x77, 0x7c, 0x39, 0x5e, 0x79, 0x71};
	LPC_GPIO0->FIODIRL = 0x0FF0;
	LPC_GPIO0->FIODIR3 = 0x08;          
	LPC_GPIO1->FIODIR2 = 0x40;         
	while(1)
	{
		for(j=0; j<16; j++)
		{	
			for(i=0; i<16; i++)
			{
				for(k=0; k<100; k++)
				{
					LPC_GPIO0->FIOSET3 = 0x08;
					LPC_GPIO1->FIOCLR2 = 0x40;
					LPC_GPIO0->FIOCLRL = 0x0ff0;
					LPC_GPIO0->FIOSETL = (array[j]<<4);
					delay();
					LPC_GPIO0->FIOCLR3 = 0x08;
					LPC_GPIO1->FIOSET2 = 0x40;
					LPC_GPIO0->FIOCLRL = 0x0ff0;
					LPC_GPIO0->FIOSETL = (array[i]<<4);
					delay();
				}
			}
		}
	}
	return 0;
}

void delay(void)
{
		int i, j;
		for(i=0; i<1000; i++)
			for(j=0; j<10; j++);
}
