/* prg115:same as prg69 in while AAAAA
                                 BBBBB
                                 CCCCC
                                 DDDDD
                                 EEEEE */
#include<stdio.h>
int main()
{
   int i,j;
   i=65;
   while(i<=69)
   {
        j=65;
        while(j<=69)
        {
            printf("%C",i);
            j++;
        }
        printf("\n");
        i++;
   }
   return 0;
}
