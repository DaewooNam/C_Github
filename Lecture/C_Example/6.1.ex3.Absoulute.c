#include<stdio.h>
int abs1(int x);

int main(void)
{


	int x = -1,res=0;

	res = abs1(x);

	printf("%d", res);


	return 0;

}


int abs1(int x)
{
	int res = 0;


		if (x < 0)
		{

			res = x * (-1);
		}
	
		else
		{

			res = x;

		}

		return  res;

}

