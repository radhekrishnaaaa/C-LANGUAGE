//prg42:unary operater
#include<stdio.h>
int main()
{
	int a=10,b=10;
	printf("\n n1. %d",a);
	printf("\n n2. %d",a++);//post
	printf("\n n3. %d",a);

	printf("\n n1. %d",b);
	printf("\n n2. %d",++b);//pre
	printf("\n n3. %d",b);
	return 0;
}
