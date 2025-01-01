//4. c prgram to calculate area of ranctengle l*b
//NRNP:with return no perameter
#include<stdio.h>
int area()
{
     int l,b;

      printf("enter value of l");
    scanf("%d",&l);
    printf("enter value of b");
    scanf("%d",&b);

    return l*b;

}
int main()
{

    int area();


   // area(l);
    printf("area is=%d",area());
    return 0;
}
