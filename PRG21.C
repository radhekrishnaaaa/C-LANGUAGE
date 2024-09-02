//prg21: find smallest
#include<stdio.h>
int main()
{
	int a,b;
	printf("\nenter a:");
	scanf("%d",&a);

	printf("\nenter b:");
	scanf("%d",&b);
	if(a<b)
	{
		printf("\n a(%d)is smallest b(%d)",a,b);
	}
	else
	{
		printf("\n b(%d)is smallest a(%d)",b,a);
	}
	return 0;
}
