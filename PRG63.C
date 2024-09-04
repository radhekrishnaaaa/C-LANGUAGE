//prg63:0.5,1,2.5,5.....n
#include<stdio.h>
int main()
{
	float i,j=0.5;
	printf("\n %f ",j);
	for(i=0.5;i<=5;i++)
	{
		j=j+i;
		printf("\t%f,",j);
	}
	return 0;
}      
