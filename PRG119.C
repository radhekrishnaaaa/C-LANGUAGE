/* prg119:same as prg73 in while ABCDE
                                 FGHIJ
                                 KLMNO
                                 PQRST
                                 UVWXY */
#include<stdio.h>
int main()
{
   int i,j,a=65;
   i=1;
   while(i<=5)
   {
        j=1;
        while(j<=5)
        {
            printf("%c",a);
            a++;
            j++;
        }
        printf("\n");
        i++;
   }
   return 0;
}
