//prg149: same as prg32 in array taxes
#include<stdio.h>
int main()
{
    float in[5],t[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("\n enter the imcome");
        scanf("%f",&in[i]);

    }
    printf("\n\tincome\t\t\ttaxes");
    for(i=0;i<5;i++)
    {
        if(0<=in[i] && in[i]<=2500)
        {
            t[i]=t[i]+(0*(in[i]-0));
             printf("\n\t%f\t\t%f",in[i],t[i]);
        }
        else if(2500<in[i] && in[i]<=5000)
        {
            t[i]=t[i]+0.1*(in[i]-2500);
             printf("\n\t%f\t\t%f",in[i],t[i]);
        }
        else
        {
            if(5000<in[i] && in[i]<=10000)
            {
                t[i]=t[i]+0.2*(in[i]-5000);
                 printf("\n\t%f\t\t%f",in[i],t[i]);
            }
            else
            {
                t[i]=t[i]+0.3*(in[i]-10000);
                 printf("\n\t%f\t\t%f",in[i],t[i]);
            }
        }
     }
        return 0;
}
