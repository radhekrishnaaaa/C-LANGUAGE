/*prg153:   A       B     PRINT
         1 2 3   1 2 3    1 2 3 1 2 3
         4 5 6   4 5 6    4 5 6 4 5 6
         7 8 9   7 8 9    7 8 9 7 8 9*/
#include<stdio.h>
int main()
{
    int i,j,a[3][3],b[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter array a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter array b[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d\t",a[i][j]);
        }
        for(j=0;j<3;j++)
        {
            printf("\t%d\t",b[i][j]);
        }
        printf("\n");
    }
}
