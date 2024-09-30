/* cocate
prg158: 2 string enter and concat*/
#include<stdio.h>
int main()
{
    int i,j,k,l;
    char str[10],s[10],c[20];
    printf("\n enter 1.string:");
    scanf("%s",str);
   // printf("\n 1.string:%s",str);
     printf("\n enter 2.string:");
    scanf("%s",s);
  //  printf("\n 2.string:%s",s);
    for(i=0;i<str[i]!='\0';i++);
    printf("\n length:%d",i);
    for(j=0;j<s[j]!='\0';j++);
    printf("\n length:%d",j);

    for(k=0;k<i;k++)
    {
        c[k]=str[k];
    }
    for(l=0;l<(i+j);l++)
    {
        c[l+i]=s[l];
    }
    printf("\n %s",c);
}
