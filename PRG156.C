/* string is not data type in c.
   use char [array] =string
   gets(variable name)
   puts(variable name) string na functions
char 'h','e','l','l','o'
string "hello"
prg156:string */
#include<stdio.h>
int main()
{
   char str[]={"hello"}; //char str[5]="hello"; =output:hello
  printf("\n %s",str); //hello

   char str1[15];// size compsory
   printf("enter string:");
  // scanf("%s",str1); //space pachinu print no kare
  // scanf("%[^\n]",str1); // sapece pachinu print kare
  gets(str1); // string enter
  puts(str1); //string print
  // printf("\n str1:%s",str1 );

//         char str1;
//    printf("enter string:");
//    scanf("%s",str1);
//    scanf("%[^\n]",str1);
//   gets(str1);
//   puts(str1);
//    printf("\n str1:%s",str1 );
}

