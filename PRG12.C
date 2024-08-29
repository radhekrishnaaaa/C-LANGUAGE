//prg12:userinput
#include<stdio.h>
int main()
{
	int a,b;

	printf("\n enter a:");
	scanf("%d",&a);
	printf("\n enter b:");
	scanf("%d",&b);
	printf("\n value a:%d\tb:%d",a,b);
	printf("\n sizeof int:%d",sizeof(int));
	printf("\n address a:%u\tb:%u",&a,&b);

	printf("\n enter a and b:");
	scanf("%d%d",&a,&b);
	printf("\n value a:%d\tb:%d",a,b);
	printf("\n sizeof int:%d",sizeof(int));
	printf("\n address a:%u\tb:%u",&a,&b);

	return 0;
}


	