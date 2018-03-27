#include<stdio.h>

int add(int x, int y);
int mux(int x, int y);
int div(int x, int y);
int min(int x, int y);
int per(int x, int y);



int main(void)
{

	int x = 10, y = 4;
	int res1 = 0, res2 = 0, res3 = 0, res4 = 0, res5 = 0;


	res1 = add(x, y);
	res2 = mux(x, y);
	res3 = div(x, y);
	res4 = min(x, y);
	res5 = per(x, y);
	




	printf("sum = %d \n multiple = %d\n divide = %d\n minus=%d\n per=%d\n", res1, res2, res3, res4, res5);
	return 0;


}


int add(int x, int y)
{

	int sum = 0;

	sum = x + y;
	
	return sum;


}


int mux(int x, int y)
{

	int mux = 0;

	mux = x * y;

	return mux;


}

int div(int x, int y)
{

	int div = 0, min=0,max=0;
	int big=0, small=0;

	if (x > y)
	{
		max = x;
		min = y;
	}
	else
	{
		max = x;
		min = y;

	}

	big   = (x > y) ? x : y;
	small = (x < y) ? x : y;

	


	div = max / min;

	return div;


}

int min(int x, int y)
{

	int minus = 0;

	minus = x - y;

	return minus;


}



int per(int x, int y)
{

	int per = 0;

	per = x % y;

	return per;


}


