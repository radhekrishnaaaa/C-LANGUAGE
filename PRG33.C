//prg33:check x and y
#include<stdio.h>
int main()
{
	int x, y;
	printf("\n enter x:");
	scanf("%d",&x);
	printf("\n enter y:");
	scanf("%d",&y);
	if(x<2000 || x>3000)
	{
		printf("\nx");
	}
	if(y>=100 && y<=500)
	{
		printf("\ny");
	}
	return 0;
}
