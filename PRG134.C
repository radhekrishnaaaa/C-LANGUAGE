/*prg134: for                        *
                                   * * *
                                 * * * * *
                               * * * * * * *
                             * * * * * * * * *  */
#include<stdio.h>
int main()
{
    int i,j,s=10;
    for(i=1;i<=10;i+=2)
    {
        for(j=1;j<=s;j++)
            printf(" ");
            for(j=1;j<=i;j++)
            {
                printf("*");
            }
        s--;
        printf("\n");
    }
    return 0;
}
