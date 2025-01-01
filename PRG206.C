//pointer to array(data structur)
//pointer only store first value address
// array store squncial value
#include<stdio.h>
int main()
{
    int a[5]={11,12,13,14,15};
    // int i;
    // for(i=0;i<5;i++)
    // {
    //     printf("\t %d",a[i]);
    // }


    // int i=10;
    // int *ptr;
    // ptr=&i;
    // printf("\n %d",sizeof(ptr));//8
    // printf("\n %d",sizeof(i));//4

    int i=10;
    int *ptr=a;
    printf("\n %d",sizeof(i)); // 4
    printf("\n %d",sizeof(a)); // 20
    printf("\n %d",sizeof(ptr)); // 8
    for(i=0;i<5;i++)
    {
        printf("\n %d - %u - %d - %u",a[i],&a[i],*ptr+i,ptr+i);
    }

    // int a[50];
    // int *ptr=a;
    // printf("\n %d",sizeof(a)); //200
    // printf("\n %d",sizeof(ptr)); //8
    // return 0;

    // two-daimensional array to pointer===================================================================

    // int a[2][2];
    // int i,j;
    // for(i=0;i<2;i++)
    // {
    //     for(j=0;j<2;j++)
    //     {
    //         printf("enter element");
    //         scanf("%d",&a[i][j]);
    //     }
    //     printf("\n");
    // }
    // int *ptr;
    // ptr=&a;
    // int c=0;
    // printf("\n %d",sizeof(a)); //16 //100
    // printf("\n %d",sizeof(ptr)); //8  //8
    //  for(i=0;i<2;i++)
    // {
    //     for(j=0;j<2;j++)
    //     {
    //         printf("\t %d - %u - %d - %u\n",a[i][j],&a[i][j],*ptr+c,ptr+c);
    //         c++;
    //     }
    //     printf("\n");
    // }


    // int *ptr;
    // ptr=&a;
    // printf("\n %d",sizeof(a)); //16 //100
    // printf("\n %d",sizeof(ptr)); //8  //8

}
