/* compare prg161.c*/
#include<stdio.h>
int main()
{
    int i,j,k,l=0;
    char s[10],s1[10];
     printf("\n enter 1.string:");
    scanf("%s",s);
   // printf("\n 1.string:%s",str);
     printf("\n enter 2.string:");
    scanf("%s",s1);
  //  printf("\n 2.string:%s",s);
    for(i=0;i<s[i]!='\0';i++);
    printf("\n length:%d",i);
    for(j=0;j<s1[j]!='\0';j++);
    printf("\n length:%d",j);
    if(i==j)
    {
      for(k=0;k<i;k++)
      {
          if(s[k]==s1[k])
          {
            l++;
          }
          else
           {
             break;
            }

       }
    }
    // i=0;
    // j=0;
    // while(s[i]==s1[j])
    // {
    //   i++;
    //   j++;
    // }

}
