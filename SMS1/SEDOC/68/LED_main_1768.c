#include<LPC17xx.h>
void delay();

int main()
{
	LPC_GPIO0->FIODIRL = 0XFF0;
	while(1)
	{
		LPC_GPIO0->FIOSETL = 0XFF0; //0x550
		delay();
		LPC_GPIO0->FIOCLRL = 0XFF0; //0x550
		delay();
	}
	return 0;
}
void delay()
{
	int i, j;
	for(i=0; i<10000; i++)
		for(j=0; j<1000; j++);
}