#include<stdio.h>
int fact(int x);




int main(void)
{
	int res = 1;

	res = fact(5);
	
	printf("%d", res);
	return 0;

}


int fact(int x)
{
	
	


	
	if (x == 1)
	{
		return 1;
	}
	else

	{

		return x*fact(x - 1);

	}
}