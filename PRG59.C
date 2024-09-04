//prg59:1,2,4,8.....n
#include<stdio.h>
int main()
{
	int i,n;
	printf("\n enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i*=2)
	{
		printf("\t%d\t,",i);
	}
	return 0;
}
