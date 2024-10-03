//function//
//inbulit
//len==strlen(str)
//retyrn  parameter/argument
/*
-----------------------------------
    with        with
    with        no
    no          with
    no          no
------------------------------------
*/
//NRNP: no return no perameter

#include<stdio.h>
void dosum() // function defination
{
    int a,b;

    printf("enter the a:");
    scanf("%d",&a);

    printf("enter the b:");
    scanf("%d",&b);

    printf("sum of:%d",a+b);
}
int main()
{
    void dosum();//function declaration

    dosum();//function call

    return 0;
}
