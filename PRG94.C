/* prg94:same as prg48 in do..while -n to n*/
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter n");
    scanf("%d",&n);
    i=-n;
    do
    {
        printf("\n %d",i);
        i++;
    } while(i<=n);
    return 0;
}
