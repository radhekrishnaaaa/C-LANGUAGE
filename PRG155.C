/*prg155: 1 2 3   1 .  .                     . 2 3                    . . .
          4 5 6   . 5  .                     . . 6 upper tringal(11)  4 . .
          7 8 9   . . 9 diagonal total(15)   . . .                    7 8 . lower tringal(19)*/
#include<stdio.h>
int main()
{
    int a[3][3],i,j,c=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n enter the a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    /*for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                c=c+a[i][j];
            }
        }
    }*/
    //printf("diognal=%d",c);
  /* for(i=0;i<3;i++)
    {
        for(j=0;j<i;j++)
        {
                c=c+a[i][j];
        }
    }
    printf("lower tringle=%d",c);

      printf("diognal=%d",c);*/
   for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
                c=c+a[i][j];
        }
    }
    printf("uper tringle=%d",c);

}


