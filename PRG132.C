/* prg130:same as prg86 in do..while 1
                                     01
                                     010
                                     1010
                                     10100 */
#include<stdio.h>
int main()
{
    int i,j,a=0;
    i=1;
    do
    {
        j=1;
        do
        {
            if(a==0)
            {
            printf("%d",a+1);
            a++;
            j++;
            }
            else
            {
            printf("%d",a-1);
            a--;
            j++;
            }

        }while(j<=i);


        printf("\n");
        i++;
    }while(i<=5);
    return 0;
}
