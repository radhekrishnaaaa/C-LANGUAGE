/*pointer = gaming
            software engineering
* = value=change
& = address=not change

variable normal= x = value,address
         pointer= y =value of x,address of x ,address of y
*/
#include<stdio.h>
int main()
{
    int x;
    int *y; // pointer variable
    x=10;
    y=&x; // assign address(jo pointer declare no kariye to aya error/worning aave.)
    printf("\n value of x:%d",x);
    printf("\n address of x:%u",&x);
    printf("\n address of y:%d",y);
    printf("\n value of y:%d",*y);
    printf("\n address of y:%u",&y);
    return 0;
}
