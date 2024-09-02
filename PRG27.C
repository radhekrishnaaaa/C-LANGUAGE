//prg27:three value enter and maximum find using logical operater
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
	if(a>b && a>c)
	{
		printf("\n a is greter");
	}
	else
	{
		if(b>c)
		{
			printf("\n b is greter");
		}
		else
		{
			printf("\n c is greter");
		}
	}
	return 0;
}
