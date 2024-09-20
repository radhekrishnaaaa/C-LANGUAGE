/*prg137:     *     *  while
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
    while(i<=5)                 //  for(i=1;i<=5;i++)
    {
        j=1;
         while(j<=8)                          //  for(j=1;j<=8;j++)
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
        }
        printf("\n");
        i++;
    }
    return 0;
}
