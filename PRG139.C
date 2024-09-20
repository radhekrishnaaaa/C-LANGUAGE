/*prg137:     *     * d0..while
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
    i=1;
    do               //  for(i=1;i<=5;i++)
    {
        j=1;
         do                          //  for(j=1;j<=8;j++)
        {
            if(i==j || i+j==6)
            {
                 printf("*");
            }
            else
            {
                printf(" ");
            }
        j++;
        }while(j<=8);
        printf("\n");
        i++;
    }while(i<=5);
    return 0;
}
