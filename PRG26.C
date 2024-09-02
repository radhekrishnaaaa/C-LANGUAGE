//prg26:three value enter and maximum find
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n enter value a:");
	scanf("%d",&a);
	printf("\n enter value b:");
	scanf("%d",&b);
	printf("\n enter value c:");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
		printf("\n a(%d) is maximum",a);
		}
		else
		{
		printf("\n c(%d) is maximum",c);
		}
	}
	else
{
	if(b>c)
	{
		printf("\n b(%d) is maximum",b);
	}

	else
	{
		printf("\n c(%d) is maximum",c);
	}
}
	return 0;
}
