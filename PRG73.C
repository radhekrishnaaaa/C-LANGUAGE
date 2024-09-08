/*prg73:ABCDE
	FGHIJ
	KLMNO
	PQRST
	UVWXY*/
#include<stdio.h>
int main()
{
	int i,j,a=65;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%c\t",a);
			a++;
		}
	printf("\n");

	}
	return 0;
}

       