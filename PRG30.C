//prg30:salary
#include<stdio.h>
int main()
{
	float sal,gsal,hra,da;
	printf("\n enter salary:");
	scanf("%f",&sal);
	if(sal<5000)
	{
		hra=sal*8/100;
		da=sal*20/100;
		gsal=sal+hra+da;
		printf("\n sal(%f) is gsal(%f)",sal,gsal);
	}
	else
	{
		if(sal>=5000 && sal<10000)
		{
			hra=sal*12/100;
			da=sal*30/100;
			gsal=sal+hra+da;
			printf("\n sal(%f) is gsal(%f)",sal,gsal);
		}
		else
		{
			if(sal>=10000 && sal<=15000)
			{
				hra=sal*15/100;
				da=sal*40/100;
				gsal=sal+hra+da;
				printf("\n sal(%f) is gsal(%f)",sal,gsal);
			}
			else
			{
				//if(sal>=15000)
				//{
					hra=sal*20/100;
					da=sal*50/100;
					gsal=sal+hra+da;
					printf("\n sal(%f) is gsal(%f)",sal,gsal);
				//}
			}
		}
	}
	return 0;
}
		