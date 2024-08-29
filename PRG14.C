// math output
#include <stdio.h>
int main ()
{
	int m,p,c;
        float total,per;
	printf("enter the math ");
	scanf("%d", &m);
	printf("enter the phsics");
	scanf("%d",&p);
	printf("enter the chemistry");
	scanf("%d",&c);


	total=m+p+c;
	per=(total /300)*100;
	printf(" total =%f",total);
	printf("\nper    =%f",per);
          return 0;
}
