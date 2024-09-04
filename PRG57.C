//prg57:1,4,9,16.....n
#include<stdio.h>
int main()
{
	int i,n,a;
	printf("\n enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=i*i;
		printf("\t%d\t,",a);
	}
	return 0;
}
