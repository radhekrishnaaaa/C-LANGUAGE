//prg48:enter n print -n to n
#include<stdio.h>
int main()
{
	int i,n;
	printf("\n enter n:");
	scanf("%d",&n);
	for(i=-n;i<=n;i++)
	{
		printf("\n \t %d",i);
	}
	return 0;
}
