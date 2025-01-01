// recur 1 to n number
#include<stdio.h>
int rec(int n)
{
    if(n>0)
        return n+rec(n-1);
   // printf("\n unwinding");
       // return n;
}
int main()
{
    int a=10,total;
    total=rec(a);
    printf("answer: %d",total);// without return n 66 total // with return n 55 // printf return n = 55
    return 0;
}
