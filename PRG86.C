/*prg86:1
        01
        010
        1010
        10101*/
#include<stdio.h>
int main()
{
    int i,j,a=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(a==0)
            {
                printf("%d",a+1);
                a++;
            }
            else
            {
                printf("%d",a-1);
                a--;
            }
        }
        printf("\n");
    }
    return 0;
}
