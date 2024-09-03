//prg47:enter n print n to 1
#include<stdio.h>
int main()
{
	int i,n;
	printf("\n enter n:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		printf("\n \t %d",i);
	}
	return 0;
}
