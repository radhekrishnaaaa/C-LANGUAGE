
/*prg162: 1string=madam         1 and 2 string compare true string is pelindrom
	  2string=madam revers                        false string is not pelindrom */
#include<stdio.h>
int main()
{
	int i,j,k=0,m=0,l;
	char a[20],b[20];
	printf("enter string :");
	scanf("%s",a);

	for(i=0;i<a[i]!='\0';i++);

	for(j=i-1;j>=0;j--)
	{
		b[k]=a[j];
		k++;
	}
	b[k]='\0';
    printf("\n print stirng:%s",b);
	for(l=0;l<=i;l++)
    {
	if(a[l]==b[l])
	    {
		    m++;
	    }
    }
	if(m-1==i)
	{
		printf("\nstring is pelindrom");
	}
	else
	{
		printf("\n string is not pelindrom");
	}
return 0;

}

