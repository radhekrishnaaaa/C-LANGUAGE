//prg34:else if
#include<stdio.h>
int main()
{
    int a=10,b=20,c=30;
    if(a>b && a>c)
    {
        printf("\n a is max");
    }
    else if(b>c)
    {
        printf("\n b is max");
    }
    else
    {
        printf("\n c is max");
    }
    return 0;
}
