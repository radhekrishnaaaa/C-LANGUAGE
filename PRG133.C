/* prg133:same as prg87 in while A
                                 BA
                                 CBA
                                 DCBA
                                 EDCBA
                                  */
#include<stdio.h>
int main()
{
    int i,j;
    i=1;
    while(i<=5)
    {
        j=i;
        while(j>=1)
        {
            printf("%C",j+64);
            j--;
        }
        printf("\n");
        i++;
    }
    return 0;
}
