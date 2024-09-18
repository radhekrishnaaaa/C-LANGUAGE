/* prg122:same as prg76 in do..while 1
                                     12
                                     123
                                     1234
                                     12345 */
#include<stdio.h>
int main()
{
    int i,j;
    i=1;
    do
    {
        j=1;
        do
        {
            printf("%d",j);
            j++;
        }while(j<=i);
        printf("\n");
        i++;
    }while(i<=5);
    return 0;
}
