/* prg120:same as prg74 in do..while 1112131415
                                     2122232425
                                     3132333435
                                     4142434445
                                     5152535455 */
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
            printf("%d%d",i,j);

            j++;
        }while(j<=5);
        printf("\n");
        i++;
    }while(i<=5);
    return 0;
}
