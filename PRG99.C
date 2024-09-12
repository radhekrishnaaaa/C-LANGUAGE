/* prg99:same as prg53  in while total print 1,2,3,4,5..10=55*/
#include<stdio.h>
int main()
{
    int i,t=0;
    i=1;
    while(i<=10)
    {
        printf("%d+",i);
        t=t+i;

        i++;
    }
    printf("=%d",t);
    return 0;
}
