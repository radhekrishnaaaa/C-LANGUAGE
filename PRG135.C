/*prg134: while.                     *
                                   * * *
                                 * * * * *
                               * * * * * * *
                             * * * * * * * * *  */
#include<stdio.h>
int main()
{
    int i,j,k,s=10;
    i=1;
    while(i<=10)                     //   for(i=1;i<=10;i+=2)
    {
            j=1;
           while(j<=s)
           {                      //     for(j=1;j<=s;j++)
            printf(" ");
            j++;
            }
            k=1;
             while(k<=i)                       //         for(j=1;j<=i;j++)
            {
                printf("*");
                k++;
            }
        s--;
        printf("\n");
     i+=2;
    }
    return 0;
}
