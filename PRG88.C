/*prg88:while,do..whlie,for*/
#include<stdio.h>
int main()
{
    int i,cnt=0;
    i=1;
    //for
    /*for(;i<=5;cnt++) // expresion is not compalesaray
    {
        printf("%d \t",i);
        i++;
    }
    //whlie
    while(i<=5)
    {
        printf("%d \t",i);
        i++;
    }*/
    // do...whlie
    do
    {
         printf("%d \t",i);
        i++;
    }while(i<=5);
    return 0;
}
