/* copy prg159*/
#include<stdio.h>
int main()
{
    int i,k;
    char str[10],s[10];
    printf("\n enter string:");
    scanf("%s",str);
    for(i=0;i<str[i]!='\0';i++);
    printf("\n length:%d",i);
    for(k=0;k<i;k++)
    {
        s[k]=str[k];
    }
    printf("\n copy:%s",s);
}
