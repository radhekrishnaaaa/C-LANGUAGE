//prg41:check char is vowel or not
#include<stdio.h>
int main()
{
	char ch;
	printf("\n enter charactor:");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("\n %c is vowel",ch);
	}
	else
	{
		printf("\n %c is consonunt",ch);
	}
	return 0;

}
