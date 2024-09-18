/* prg118:same as prg72 in do..while 12345
                                     678910
                                     1112131415
                                     1617181920
                                     2122232425 */
#include<stdio.h>
int main()
{
    int i,j,a=1;
    i=1;
    do
    {
        j=1;
        do
        {
            printf("%d",a);
            a++;
            j++;
        }while(j<=5);
        printf("\n");
        i++;
    }while(i<=5);
    return 0;
}
