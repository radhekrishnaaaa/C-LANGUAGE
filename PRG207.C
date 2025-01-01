//double pointer **ptr
#include<stdio.h>
int main()
{
    int x=10;
    int *ptr1;
    ptr1=&x;
    // int *ptr2;
    // ptr2=&ptr1; // worning: assignment to 'int *' from incomplate pointer type 'int **'
    int **ptr2; // declare **(duble pointer)
    ptr2=&ptr1;

    printf("\n value of x:%d",x);
    printf("\n address of x:%u",&x);
    printf("\n address of x using ptr1 :%u",ptr1);
    printf("\n value of x using ptr1:%d",*ptr1);
    printf("\n address of x using ptr2 :%u",*ptr2);
     printf("\n value of x using ptr2:%d",**ptr2);

     printf("\n address of ptr1 using ptr2 :%u",&ptr2);
    printf("\n address of ptr1 using ptr2:%u",ptr2);

    printf("\n address of ptr2%u",&ptr2);
    return 0;
}
