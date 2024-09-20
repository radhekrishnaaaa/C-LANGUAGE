//array start
//prg143:array value enter and print
#include<stdio.h>
int main()
{
    int arr[5],i;
    printf("\nsize of array :%ld",sizeof(arr));
    for(i=0;i<5;i++)
    {
        printf("\nenter arr[%d]:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\n arr[%d]:%d-address:%u",i+1,arr[i],&arr[i]);
    }
    return 0;
}
