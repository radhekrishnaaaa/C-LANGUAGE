//prg20:if else program
#include<stdio.h>
int main()
{
	int a,b;
	printf("\nenter a:");
	scanf("%d",&a);

	printf("\nenter b:");
	scanf("%d",&b);
	if(a>b)
	{
		printf("\n a(%d)is greterthan b(%d)",a,b);
	}
	else
	{
		printf("\n b(%d)is greterthan a(%d)",b,a);
	}
	return 0;
}
