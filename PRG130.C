/* prg130:same as prg84 in do..while A
                                     BC
                                     DEF
                                     GHIJ
                                     KLMNO */
#include<stdio.h>
int main()
{
    int i,j,a=65;
    i=1;
    do
    {
        j=1;
        do
        {
            printf("%c",a);
            a++;
            j++;
        }while(j<=i);
        printf("\n");
        i++;
    }while(i<=5);
    return 0;
}
