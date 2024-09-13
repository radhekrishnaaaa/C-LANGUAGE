/* prg106:same as prg60 in do..while 1,4,12,32,80... */
#include<stdio.h>
int main()
{
    int i,a,j=1;
    i=1;
    do
    {
        a=i*j;
        printf("%d\t",a);
        j++;
        i*=2;
    } while(i<=30);
    return 0;
}
