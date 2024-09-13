/* prg110:same as prg64 in do..while A c E g....... */
#include<stdio.h>
int main()
{
    int i,t=0;
    char c='A';
    i=0;
    do
    {
        if(t==0)
        {
        printf("%c\t",c);
        t=1;
        }
        else
        {
            c=c+32;
            printf("%c\t",c);
            c=c-32;
            t=0;
        }
        c=c+2;
        i++;
    }while(i<13);
    return 0;
}
