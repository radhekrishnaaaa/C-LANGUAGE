//prg148: same as 28 in array //electcity bill
#include<stdio.h>
int main()
{
    int u[5],i;
    float c[5],t[5];
    for(i=0;i<5;i++)
    {
        printf("\n enter unit u[%d]",i+1);
        scanf("%d",&u[i]);
    }
    printf("\n \tunit\tamount\t\ttotalcharge");
    for(i=0;i<5;i++)
    {
        if(u[i]>0 && u[i]<=100)
        {
            c[i]=(u[i]*0.60)+50;
             printf("\n\t%d\t%f",u[i],c[i]);
        }
        else if(u[i]>100 && u[i]<=300)
        {
            c[i]=(u[i]*0.80)+50;
             printf("\n\t%d\t%f",u[i],c[i]);
        }
        else
        {
            c[i]=(u[i]*0.90)+50;
             printf("\n\t%d\t%f",u[i],c[i]);
        }
        if(c[i]>=300)
        {
            t[i]=c[i]*1.15;
            printf("\t%f",t[i]);
        }

    }
}
