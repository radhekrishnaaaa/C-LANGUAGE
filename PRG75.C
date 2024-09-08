/*prg75:* * * * *
	 * * * *
	  * * *
	   * *
	    * */
#include<stdio.h>
int main()
{
	int i,j,s=10;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=s;j++)
		printf(" ");

		for(j=5;j>=i;j--)
		{
			printf("*");
		}
		s++;
		printf("\n");
	}
	return 0;
}
