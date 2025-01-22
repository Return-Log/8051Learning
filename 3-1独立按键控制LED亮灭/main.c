#include <REGX52.H>

void main()
{
	while(1)
	{
		if(P3_4==0 && P3_5==0 || P3_6==0)
		{
			P1_0=0;
		}
		else
		{
			P1_0=1;
		}
	
	}

}