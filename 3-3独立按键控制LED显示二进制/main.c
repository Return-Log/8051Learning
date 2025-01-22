#include <REGX52.H>
#include <INTRINS.H>

void Delay(unsigned int xms)	//@11.0592MHz
{
	unsigned char data i, j;
	while(xms--)
	{
		_nop_();
		i = 2;
		j = 199;
		do
		{
			while (--j);
		} while (--i);	
	}


}

void main()
{
	unsigned char LEDNum=0;
	while(1)
	{
		if(P3_4==0)
		{
			Delay(20);
			while(P3_4==0);
			Delay(20);
			
			LEDNum++;
			P1=~LEDNum;
		
		}
	
	}

}