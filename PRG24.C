//prg24:divide by 5or3
#include<stdio.h>
int main()
{
	int a;
	printf("\nenter a:");
	scanf("%d",&a);
	if(a%15==0)
	{
		printf("\n a(%d)is divide by 5or3 ",a);
	}
	else
	{
		printf("\n a(%d)is not divide by 5or3",a);
	}
	return 0;
}
