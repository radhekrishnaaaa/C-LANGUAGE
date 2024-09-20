//prg144: 2 array enter display and total
#include<stdio.h>
int main()
{
    int a[5],b[5],t[5],i;
    for(i=0;i<5;i++)
    {
        printf("\n enter array  a[%d] element:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
         printf("\n enter array b[%d] element:",i+1);
        scanf("%d",&b[i]);
    }
    printf("\n[a]\t+\t[b]\t=\t[t]");
    for(i=0;i<5;i++)
    {
        printf("\n%d\t+\t%d\t=\t%d",a[i],b[i],a[i]+b[i]);
    }
    return 0;
}
