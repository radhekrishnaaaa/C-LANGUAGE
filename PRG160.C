/* revers prg160.c*/
#include<stdio.h>
int main()
{
    int i,j=0,d;
    char a[10],b[10];
    printf("\n enter string:");
    scanf("%s",a);
    printf("\n string:%s",a);
    for(i=0;i<a[i]!='\0';i++);
   // printf("\n length:%d",i);
    for(d=i-1;d>=0;d--)
    {
        b[j]=a[d];
        j++;
    }
    b[j]='\0';
    printf("\n revers:%s",b);
}
