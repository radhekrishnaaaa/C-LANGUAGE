// 1.c program to find simple intrest sl=(P*r*n)/100
//NRNP: with return with perameter
#include<stdio.h>
int intrest(int a,int b,int c)
{
    return (a*b*c)/100;
}
int main()
{
    int p,r,n,a=0;
    int intrest(int,int,int);
    printf("enter p:");
    scanf("%d",&p);
      printf("enter r:");
    scanf("%d",&r);
      printf("enter n:");
    scanf("%d",&n);


    a=intrest(p,r,n);
    printf("simple intrest:%d",a);


    return 0;
}
