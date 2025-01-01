//recurson head(unwinding) and tail(winding)
#include<stdio.h>
int rec(int n)
{
    if(n>0)
    {
       // printf("%d",n);//321//tail
        rec(n-1);
        //printf("%d",n);//123// head
    }

}
int main()
{
    int a=3;
    rec(3);
    return 0;
}
