//prg58: 1,4,3,16,5....n
#include<stdio.h>
int main()
{
	int i,n,a;
	printf("\n enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
		a=i*i;
		printf("\t%d\t,",a);
		}
		else
		{
		printf("\t%d\t,",i);
		}
	}
	return 0;
}
