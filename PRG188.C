//4. c prgram to calculate area of ranctengle l*b
//NRNP:with return with perameter
#include<stdio.h>
int area(int l,int b)
{

    return l*b;

}
int main()
{
    int l,b;
    int area(int,int);
     printf("enter value of l");
    scanf("%d",&l);
    printf("enter value of b");
    scanf("%d",&b);

   // area(l);
    printf("area is=%d",area(l,b));
    return 0;
}
