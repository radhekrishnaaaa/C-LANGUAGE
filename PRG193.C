//5.c program to calculate area of triangle 0.5*b*h
//NRNP: with return no perameter
#include<stdio.h>
int area()
{
     int b,h,a=0;
    printf("enter b:");
    scanf("%d",&b);
      printf("enter h:");
    scanf("%d",&h);

    return 0.5*b*h;
}
int main()
{
    int area();
    printf("simple intrest:%d",area());


    return 0;
}
