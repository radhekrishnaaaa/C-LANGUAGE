// 1.c program to find simple intrest sl=(P*r*n)/100
//NRNP: no return with perameter
#include<stdio.h>
void intrest(int a,int b,int c)
{
    printf("simple intrest:%d",(a*b*c)/100);
}
int main()
{
    int p,r,n,a=0;
    void intrest(int,int,int);
    printf("enter p:");
    scanf("%d",&p);
      printf("enter r:");
    scanf("%d",&r);
      printf("enter n:");
    scanf("%d",&n);


    intrest(p,r,n);

    return 0;
}
