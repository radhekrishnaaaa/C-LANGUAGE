//prg37:else if(prg31:marks count on condition)
#include<stdio.h>
int main()
{
	int m1,m2,m3;
	float per,total;
	printf("\nenter the marks m1,m2,m3");
	scanf("%d%d%d",&m1,&m2,&m3);
	total=m1+m2+m3;
	printf("\n total=%f",total);
	per=total/300*100;
	printf("\n per=%f",per);
	if(per>75)
	{
		printf("\n grade A");
	}
	else if(per>60 && per<=75)
	{
		printf("\n grade B");
	}
	else if(per>45 && per<=60)
	{
		printf("\n grade C");
	}
	else if(per>=35 && per<=45)
	{
		printf("\n grade D");
	}
	else
	{
		//if(per<35){
		printf("\n fail");
		//}
	}
	return 0;

}
