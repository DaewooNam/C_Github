#include<stdio.h>
int my_power(int x, int y);

int main(void)
{


	printf("%d", my_power(2, 10));
	
	return 0;
}

int my_power(int x, int y)
{
	int res = 1;
	for (int i = 0;i<y;i++)
	{

		 res *= x;

	}

	return  res;

}