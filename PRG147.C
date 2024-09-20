/*prg147: .     p   q    r   gst(18)   gst+r   discout(10)
          1    100   5    500  90    590      531                 in a array */
#include<stdio.h>
int main()
{
    int p[5],q[5],i,r[5],g[5],gr[5],d[5],t[5];
    for(i=0;i<5;i++)
    {
    printf("\n enter price:");
    scanf("%d",&p[i]);
    printf("\n enter qut:");
    scanf("%d",&q[i]);

    }
     printf("\n\tprice\tqut\trate\tgst(18)\tgst+price\tdis(10)\ttotal");
    for(i=0;i<5;i++)
    {
        r[i]=p[i]*q[i];
         g[i]=r[i]*18/100;
         gr[i]=r[i]+g[i];
         d[i]=gr[i]*10/100;
         t[i]=gr[i]-d[i];
         printf("\n\t%d\t%d\t%d\t%d\t%d\t\t%d\t%d",p[i],q[i],r[i],g[i],gr[i],d[i],t[i]);
    }
     return 0;
}
