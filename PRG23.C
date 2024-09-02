//prg23:divide by 5or not
#include<stdio.h>
int main()
{
	int a;
	printf("\nenter a:");
	scanf("%d",&a);
	if(a%5==0)
	{
		printf("\n a(%d)is divide by 5 ",a);
	}
	else
	{
		printf("\n a(%d)is not divide by 5",a);
	}
	return 0;
}
