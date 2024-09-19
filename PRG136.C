/*prg136:    do..while               *
                                   * * *
                                 * * * * *
                               * * * * * * *
                             * * * * * * * * *  */
#include<stdio.h>
int main()
{
    int i,j,k,s=10;
    i=1;
    do
    {
            j=1;
            do
           {
            printf(" ");
            j++;
            }while(j<=s);
            k=1;
            do
            {
                printf("*");
                k++;
            }while(k<=i)  ;
        s--;
        printf("\n");
     i+=2;
    } while(i<=10) ;
    return 0;
}
