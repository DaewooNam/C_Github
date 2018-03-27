#include<stdio.h>
void sum(int x);


int main(void)
{

	sum(10);
	sum(100);

	return 0;
}


void sum(int x)
{
	int res = 0;
	

	for (int i = 0;i<=x;i++)
	{

		res += i;

	}

	printf("1부터 %d까지의 합은 %d 입니다.\n", x, res);



}