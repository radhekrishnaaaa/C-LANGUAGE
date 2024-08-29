//prg8:simple intrest
#include<stdio.h>
int main()
{
	int p,r,n,ans;
	printf("\n enter p=");
	scanf("%d",&p);
	printf("\n enter r=");
	scanf("%d",&r);
	printf("\n enter n=");
	scanf("%d",&n);
	ans=(p*r*n)/100;
	printf("\n intrest is=%d",ans);
	return 0;
}
