/* prg104:same as prg58 in do..while 1,4,3,16,5..... */
#include<stdio.h>
int main()
{
    int i,a;
    i=1;
    do
    {
        if(i%2==0)
        {
        a=i*i;
        printf("%d\t",a);
        }
        else
        {
        printf("%d\t",i);
        }
        i++;
    } while(i<=30);
    return 0;
}
