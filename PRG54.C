//prg54:total 1,3,5,7,9=25
#include<stdio.h>
int main()
{
	int i,t=0;
	for(i=1;i<=10;i++)//(i=1;i<=50;i+=2)
	{
		if(i%2==1)
		{
		printf("\n \t %d",i);
		t=t+i;
		}
	}
	printf("=%d",t);
	return 0;
}
