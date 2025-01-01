//3.c program to calculate area of squre
//NRNP:with return no perameter
#include<stdio.h>
int area()
{
     int l;

      printf("enter value of l");
    scanf("%d",&l);

    return l*l;

}
int main()
{

    int area();


   // area(l);
    printf("area is=%d",area());
    return 0;
}
