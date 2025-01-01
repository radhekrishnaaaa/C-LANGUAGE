//2.c program to calculate area of circle =pi*r*r
//NRNP:with return no perameter
#include<stdio.h>
float area()
{
    float r;
    printf("enter value of r");
    scanf("%f",&r);
    return 3.14*r*r;
}
int main()
{
    float area();


  // area();
    printf("area is:%f",area());

    return 0;
}

