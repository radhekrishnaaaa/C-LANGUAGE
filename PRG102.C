/* prg102:same as prg56 in do..while 5*1=5
                                     5*2=10.... */
#include<stdio.h>
int main()
{
    int i,a,n;
    printf("\n enter the number");
    scanf("%d",&n);
    i=1;
    do
    {
        a=n*i;
        printf("%dX%d=%d\n",n,i,a);
        i++;
    } while(i<=10);
    return 0;
}
