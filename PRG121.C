/* prg121:same as prg75 in while * * * * *
                                  * * * *
                                   * * *
                                    * *
                                     *  */
#include<stdio.h>
int main()
{
   int i,j,s=10;
   i=1;
   while(i<=5)
   {
        j=1;
        while(j<=s)
        {
             printf(" ");
             j++;
        }
            j=5;
            while(j>=i)
            {
                printf(" *");
                j--;
            }
    s++;
    printf("\n");
    i++;
    }
   return 0;
}
