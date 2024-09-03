//prg49:enter n print odd no.up to 50 aeki
#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=50;i++)//(i=1;i<=50;i+=2)
	{
		if(i%2==1)
		{
		printf("\n \t %d",i);
		}
	}
	return 0;
}
