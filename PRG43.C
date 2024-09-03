//prg43:forloop ++
#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("\n \t %d",i);
	}
	return 0;
}

/*itration of loop:-
i       	i=1        	i<=10				i++
variable     once time	    condition       t/f      print     incre/decrement
		i=1          1<=10           t         1          2
		             2<=10           t         2          3
                             3<=10           t         3          4
			     1<=10           t         1          2
	         	     1<=10           t         1          2
        		     1<=10           t         1          2
         	             1<=10           t         1          2
         		     1<=10           t         1          2
         	       	     1<=10           t         1          2
         		     1<=10           t         1          2
         	             1<=10           t         1          2*/
