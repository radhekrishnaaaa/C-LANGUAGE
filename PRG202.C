//1to n number total use recursion function
#include<stdio.h>
int recur(int n)
{
    int i=1,a=0;
    if(i<=n) // for(i=0;i<=n;i++)
    {
       a=recur(i);
       i++;
    }
    printf("ans:%d",a);
    return a;
}
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);

    recur(n);
    return 0;
}
