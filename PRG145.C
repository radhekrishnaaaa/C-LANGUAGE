/*prg145: 1.array total
          2.even value total
          3.odd value total
          4.odd position value total
          5.even postion value total*/
#include<stdio.h>
int main()
{
    int i,a[10],t=0,o=0,e=0,ep=0,op=0;
    for(i=0;i<10;i++)
    {
        printf("\n enter array  a[%d] element:",i+1);
        scanf("%d",&a[i]);
    }
   /* for(i=0;i<10;i++)
    {
        t=t+a[i];

    }
    printf("\n1. ARRAY TOTAL=%d ",t);
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            e=e+a[i];
        }
        else
        {
            o=o+a[i];
        }
    }
    printf("\n2. even value total=%d",e);
    printf("\n3. odd value total=%d",o);
    for(i=1;i<10;i+=2)
    {
        ep=ep+a[i];
    }
    for(i=0;i<10;i+=2)
    {
        op=op+a[i];
    }
    printf("\n4. even position value total=%d",ep);
    printf("\n5. odd position value total=%d",op);*/
    for(i=0;i<10;i++)
    {
         t=t+a[i];
        if(a[i]%2==0)
        {
            e=e+a[i];
        }
        else
        {
            o=o+a[i];
        }
        if(i%2==0)
        {
             ep=ep+a[i];
        }
        else
        {
             op=op+a[i];
        }
    }
     printf("\n1. ARRAY TOTAL=%d ",t);
     printf("\n2. even value total=%d",e);
    printf("\n3. odd value total=%d",o);
     printf("\n4. even position value total=%d",ep);
    printf("\n5. odd position value total=%d",op);
    return 0;

}
