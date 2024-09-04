//prg60:1,4,12,32,80....n
#include<stdio.h>
int main()
{
	int i,n,a,j=1;
	printf("\n enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i*=2)
	{
		a=i*j;
		printf("\t%d\t,",a);
		j++;
	}
	return 0;
} 
