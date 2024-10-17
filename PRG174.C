// 1.c program to find simple intrest sl=(P*r*n)/100
//NRNP: no return no perameter
#include<stdio.h>
void intrest()
{
    int p,r,n,a=0;
    printf("enter p:");
    scanf("%d",&p);
      printf("enter r:");
    scanf("%d",&r);
      printf("enter n:");
    scanf("%d",&n);

    a=(p*r*n)/100;
    printf("simple intrest:%d",a);
}
int main()
{
    void intrest();

    intrest();

    return 0;
}

