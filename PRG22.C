//prg22: positiv or nagtive
#include<stdio.h>
int main()
{
	int a;
	printf("\nenter a:");
	scanf("%d",&a);
	if(a>=0)
	{
		printf("\n a(%d)is positive ",a);
	}
	else
	{
		printf("\n a(%d)is negative",a);
	}
	return 0;
}
