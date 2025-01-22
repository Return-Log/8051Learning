#include <REGX52.H>
#include <INTRINS.H>

void Delay(unsigned int xms);

void main()
{
	unsigned char LEDNum;
	P1=~0x01;
	while(1)
	{
		if(P3_4==0)
		{
			Delay(20);
			while(P3_4==0);
			Delay(20);
			
			if(LEDNum==7)
			{
				LEDNum=0;
				P1=~(0x01<<LEDNum);
			}
			else
			{
				LEDNum++;
				P1=~(0x01<<LEDNum);	
			}
			 		
		}
		if(P3_5==0)
		{
			Delay(20);
			while(P3_5==0);
			Delay(20);
			
			if(LEDNum==0)
				LEDNum=8;
			LEDNum--;

			P1=~(0x01<<LEDNum);	 		
		}
	}

}

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
