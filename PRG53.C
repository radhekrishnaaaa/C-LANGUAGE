//prg53:total1,2,3....10=55
#include<stdio.h>
int main()
{
	int i,t=0;
	for(i=1;i<=10;i++)
	{
		printf(" %d + ",i);
		t=t+i;
	}
	printf("=%d",t);
	return 0;
}
