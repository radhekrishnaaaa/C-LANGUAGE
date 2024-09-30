/* prg157: enter string find length without length function
            start with 0 end with '\0'
            '\0' is null charcectr*/
#include<stdio.h>
int main()
{
    int i,a=0;
    char str[10];
    printf("\n enter string:");
    scanf("%s",str);
    printf("\n string:%s",str);
    for(i=0;i<str[i]!='\0';i++)
    {
        a=1+i;
    }
    printf("\n length:%d",a);
}
