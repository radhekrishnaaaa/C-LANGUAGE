//prg55:total 2,4,6,8,10=30
#include<stdio.h>
int main()
{
	int i,t=0;
	for(i=1;i<=10;i++) //(i=0;i<=50;i+=2)
	{
		if(i%2==0)
		{
		printf("\n \t %d",i);
		t=t+i;
		}
	}
	printf("=%d",t);
	return 0;
}
