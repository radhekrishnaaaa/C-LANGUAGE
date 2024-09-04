 //prg56:enter n=5 print 5*1=5
#include<stdio.h>
int main()
{
	int i,n,a;
	printf("\n enter n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		a=n*i;
		printf("\n %d X %d =%d",n,i,a);
	}
	return 0;
}
