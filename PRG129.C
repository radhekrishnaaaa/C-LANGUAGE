/* prg129:same as prg83 in while a
                                 bC
                                 dEf
                                 gHiJ
                                 kLmNo column */
#include<stdio.h>
int main()
{
    int i,j,a=65;
    i=1;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
            if(j%2==0)
            {
            printf("%C",a);
            a++;
            j++;
            }
            else
            {
             printf("%C",a+32);
             a++;
             j++;
            }
        }
        printf("\n");
        i++;
    }
    return 0;
}
