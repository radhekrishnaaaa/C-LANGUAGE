//prg50:enter n print even no.up to 50 beki
#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=50;i++) //(i=0;i<=50;i+=2)
	{
		if(i%2==0)
		{
		printf("\n \t %d",i);
		}
	}
	return 0;
}
