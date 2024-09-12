/* prg98:same as prg52 in do..while A-65 to Z-90*/
#include<stdio.h>
int main()
{
    int i;
    i=65;
    do
    {
        printf("\n %d-%c",i,i);
        i++;
    } while(i<=90);
    return 0;
}
