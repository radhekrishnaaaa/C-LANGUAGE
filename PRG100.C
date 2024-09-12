/* prg100:same as prg54 in do..while 1,3,5,7,9=25 */
#include<stdio.h>
int main()
{
    int i,t=0;
    i=1;
    do
    {
        printf("%d+",i);
        t=t+i;
        i+=2;
    } while(i<=10);
    printf("=%d",t);
    return 0;
}
