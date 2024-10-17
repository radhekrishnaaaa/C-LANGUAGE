// 1.c program to find simple intrest sl=(P*r*n)/100
//NRNP: with return no perameter
#include<stdio.h>
int intrest()
{
    int p,r,n;
    printf("enter p:");
    scanf("%d",&p);
      printf("enter r:");
    scanf("%d",&r);
      printf("enter n:");
    scanf("%d",&n);
    return (p*r*n)/100;
}
int main()
{
    int intrest();
    printf("simple intrest:%d",intrest());


    return 0;
}
