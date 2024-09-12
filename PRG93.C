/* prg93:same as prg47 in while n to 1*/
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter n");
    scanf("%d",&n);
    i=n;
    while(i>=1)
    {
        printf("\n %d",i);
        i--;
    }
    return 0;
}
