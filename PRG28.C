//prg28:charges of units
#include<stdio.h>
int main()
{
	int u;
	float c,total;
	printf("\n enter unit:");
	scanf("%d",&u);
	if(u>0 && u<=100)
	{
		c=(u*0.60)+50;
		printf("\n amount is=%f",c);
	}
	else
	{
		if(u>100 && u<=300)
		{
			c=(u*0.80)+50;
			printf("\n amount is=%f",c);
		}
		else
		{
			c=(u*0.90)+50;
			printf("\n amount is=%f",c);
		}
	}
	if(u>=300)
	{
		total=c*1.15;
		printf("\n amount after 300 rupess up=%f",total);
	}

	return 0;
}
		