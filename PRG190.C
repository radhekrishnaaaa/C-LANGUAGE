//5.c program to calculate area of triangle 0.5*b*h
//NRNP: no return no perameter
#include<stdio.h>
void area()
{
    int b,h,a=0;
    printf("enter b:");
    scanf("%d",&b);
      printf("enter h:");
    scanf("%d",&h);

    a=0.5*b*h;
    printf("area is :%d",a);
}
int main()
{
    void area();

    area();

    return 0;
}
