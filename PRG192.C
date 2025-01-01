//5.c program to calculate area of triangle 0.5*b*h
//NRNP: with return with perameter
#include<stdio.h>
int area(int b,int h)
{
    return 0.5*b*h;
}
int main()
{
    int b,h,a=0;
    int area(int,int);
     printf("enter b:");
    scanf("%d",&b);
      printf("enter h:");
    scanf("%d",&h);

    a=area(b,h);
    printf("area is:%d",a);


    return 0;
}
