/* prg127:same as prg81 in while A
                                 AB
                                 ABC
                                 ABCD
                                 ABCDE */
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
            printf("%C",a);
            a++;
            j++;
        }
        printf("\n");
        a=65;
        i++;
    }
    return 0;
}
