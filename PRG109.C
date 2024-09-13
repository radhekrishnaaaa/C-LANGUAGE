/* prg109:same as prg63  in while 0.5,1,2.5,5....*/
#include<stdio.h>
int main()
{
    float i,j=0.5;
    i=0.5;
    printf("%f\t",j);
    while(i<=5)
    {
        j=j+i;
        printf("%f\t",j);
        i++;
    }
    return 0;
}
