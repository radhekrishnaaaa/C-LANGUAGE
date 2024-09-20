//prg150.c : same as 31 student marksheet
#include<stdio.h>
int main()
{
    int m1[5],m2[5],m3[5],n[5],i;
    float p[5],t[5];
    for(i=0;i<5;i++)
    {
        printf("\n enter student no :");
        scanf("%d",&n[i]);
        printf("\n enter m1 :");
        scanf("%d",&m1[i]);
        printf("\n enter m2 :");
        scanf("%d",&m2[i]);
        printf("\n enter m3 :");
        scanf("%d",&m3[i]);
    }
    printf("\n\tsno\tm1\tm2\tm3\ttotal\t\tper\t\t\tgrade");
    for(i=0;i<5;i++)
    {
        t[i]=m1[i]+m2[i]+m3[i];
        p[i]=t[i]/300*100;
        printf("\n\t%d\t%d\t%d\t%d\t%f\t%f\t",n[i],m1[i],m2[i],m3[i],t[i],p[i]);
        if(p[i]>75)
        {
            printf("\tA");
        }

        else if(p[i]>60 && p[i]<=75)
        {
            printf("\tB");
        }
        else if(p[i]>45 && p[i]<=60)
        {
            printf("\tc");
        }
        else
        {
            if(p[i]>=35 && p[i]<=45)
            {
                printf("\tD");
            }
            else
            {
                printf("\tfail");
            }
        }
    }
    return 0;
}
//prg150.c : same as 31 student marksheet
#include<stdio.h>
int main()
{
    int m1[5],m2[5],m3[5],n[5],i;
    float p[5],t[5];
    for(i=0;i<5;i++)
    {
        printf("\n enter student no :");
        scanf("%d",&n[i]);
        printf("\n enter m1 :");
        scanf("%d",&m1[i]);
        printf("\n enter m2 :");
        scanf("%d",&m2[i]);
        printf("\n enter m3 :");
        scanf("%d",&m3[i]);
    }
    printf("\n\tsno\tm1\tm2\tm3\ttotal\t\tper\t\t\tgrade");
    for(i=0;i<5;i++)
    {
        t[i]=m1[i]+m2[i]+m3[i];
        p[i]=t[i]/300*100;
        printf("\n\t%d\t%d\t%d\t%d\t%f\t%f\t",n[i],m1[i],m2[i],m3[i],t[i],p[i]);
        if(p[i]>75)
        {
            printf("\tA");
        }

        else if(p[i]>60 && p[i]<=75)
        {
            printf("\tB");
        }
        else if(p[i]>45 && p[i]<=60)
        {
            printf("\tc");
        }
        else
        {
            if(p[i]>=35 && p[i]<=45)
            {
                printf("\tD");
            }
            else
            {
                printf("\tfail");
            }
        }
    }
    return 0;
}
