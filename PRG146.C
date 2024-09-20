/*prg146: .     p   q    r   gst(18)   gst+r   discout(10)
          1    100   5    500  90    590      531     */
#include<stdio.h>
int main()
{
    int p=0,q=0,r=0,g=0,gr=0,d=0,t=0;
    printf("\n enter price:");
    scanf("%d",&p);
    printf("\n enter qut:");
    scanf("%d",&q);
    r=p*q;
 //   printf("\n rate:%d",r);
    g=r*18/100;
 //   printf("\n gst:%d",q);
    gr=r+g;
  //  printf("\n gst+r:%d",gr);
    d=gr*10/100;
   /// printf("\n dicount:%d",d);
    t=gr-d;
    printf("\n\tprice\tqut\trate\tgst(18)\tgst+price\tdis(10)\ttotal");
    printf("\n\t%d\t%d\t%d\t%d\t%d\t\t%d\t%d",p,q,r,g,gr,d,t);


}
