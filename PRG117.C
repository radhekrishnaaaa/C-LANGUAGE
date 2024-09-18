/* prg117:same as prg71 in while 11111
                                 33333
                                 55555
                                 77777
                                 99999  */
#include<stdio.h>
int main()
{
   int i,j;
   i=1;
   while(i<=10)
   {
        j=1;
        while(j<=10)
        {
            printf("%d",i);
            j+=2;
        }
        printf("\n");
        i+=2;
   }
   return 0;
}
