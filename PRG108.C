/* prg108:same as prg62 in do..while 1,1,2,3,5,....... */
#include<stdio.h>
int main()
{
    int i,a,n=0,n1=1;
    i=2;
    printf("%d\t%d\t",n,n1);
    do
    {
        a=n+n1;
        printf("%d\t",a);
        n=n1;
        n1=a;
        i++;
    } while(i<=10);
    return 0;
}
