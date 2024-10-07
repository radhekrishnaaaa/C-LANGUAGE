//WRWP: with return with perameter

#include<stdio.h>
int dosum(int a,int b) // function defination
{
    return a+b;
}
int main()
{
    int a,b;
    int dosum(int,int);//function declaration

    printf("enter the a:");
    scanf("%d",&a);
    printf("enter the b:");
    scanf("%d",&b);


   // dosum(a,b);//function call
    printf("sum of:%d",dosum(a,b));

    return 0;
}
