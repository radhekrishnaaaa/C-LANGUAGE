//write a clang function that revers a number x=32243; op: 34223
#include<stdio.h>
void revers()
{
    int no=32243,i;
    for(i=0;i<5;i++)
    {
        int tmp=no%10;
        printf("%d",tmp);
        no=no/10;
    }
}
int main()
{
    void revers();
    revers();
    return 0;
}
