//write a c lang function for find squre & cube of given number
#include<stdio.h>
void square()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    printf("squqre is:%d",n*n);

}
void cube()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    printf("cube is:%d",n*n*n);

}
int main()
{
    void square();
    void cube();

    square();
    cube();

    return 0;

}
