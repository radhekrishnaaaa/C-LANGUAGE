//prg62:1,1,2,3,5...n fibo
#include<stdio.h>
int main()
{
	int i,a,n=0,n1=1;
	printf("%d\t %d\t",n,n1);
	for(i=2;i<=10 ;i++)
	{
		a=n+n1;
		printf(" %d \t ",a);
		n=n1;
		n1=a;
	}
	return 0;
}



