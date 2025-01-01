//4. c prgram to calculate area of ranctengle l*b
//NRNP:no return with perameter
#include<stdio.h>
void area(int l,int b)
{

    printf("area is=%d",l*b);

}
int main()
{
    int l,b;
    void area(int,int);
     printf("enter value of l");
    scanf("%d",&l);
    printf("enter value of b");
    scanf("%d",&b);

    area(l,b);
    return 0;
}
