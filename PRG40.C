//prg40: enter char 'a' is return 'A'
#include<stdio.h>
int main()
{
	char ch;
	printf("\n enter ch:");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	{
		printf("\n ans is : %c",ch+32);
	}
	else if(ch>=97 && ch<=122)
	{
	printf("\n ans is : %c",ch-32);
	}
	return 0;
}
