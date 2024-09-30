/*prg152: two diomentional array a[i][j]
                                  row col */
#include<stdio.h>
int main()
{
    int arr[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
             printf("\nenter arr[%d][%d]:",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

