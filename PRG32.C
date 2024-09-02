//prg:32 txt/slab
#include<stdio.h>
int main()
{
	float i,t;
	printf("\n enter the income");
	scanf("%f",&i);
	if(i>2500)
	{
		t=0;
	}
	else
	{
		if(i>=2500 && i<5000)
		{
			t=0.1*(i-25000);
		}
		else
		{
			if(i>=5000 && i<10000)
			{
				t=0.1*(5000-2500)+0.2*(i-5000);
			}
			else
			{
				t=0.1*(5000-2500)+0.2*(10000-5000)+0.3*(i-10000);
			}
		}
	}
	printf("\n tax pay %f",t);
	return 0;
}
