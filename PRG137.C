/*prg137: for *     *
               *   *
                * *
                 *
                * *
               *   *
              *     *  */
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=8;j++)
        {
            if(i==j || i+j==6)
            {
                 printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
