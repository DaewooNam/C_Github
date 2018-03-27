#include<stdio.h>
int funPtr(int(*fp)(int, int),int a,int b);

int sum(int a, int b);
int min(int a, int b);
int mux(int a, int b);
int div(int a, int b);
int rem(int a, int b);



int main(void)
{

	/*
	funPtr('+', 10, 10);
	funPtr('-', 10, 10);
	funPtr('*', 10, 10);
	funPtr('/', 10, 10);
	funPtr('%', 10, 10);
	*/

	return 0;
}



int sum(int a, int b)
{

	return a + b;

}

int min(int a, int b)
{
	return a - b;
}

int mux(int a, int b)
{
	return a * b;
}

int div(int a, int b)
{
	return a / b;
}

int rem(int a, int b)
{
	return a % b;
}


int funPtr(int(*fp)(int, int), int a, int b)
{
	if (fp == '+')
	{


		fp = sum;

		printf("sum = %d\n", fp(a, b));

		return fp(a, b);


	}
	else if (fp == '-')
	{

		fp = min;

		printf("minus = %d\n", fp(a, b));

		return fp(a, b);


	}
	else if (fp == '*')
	{

		fp = mux;

		printf("mux = %d\n", fp(a, b));

		return fp(a, b);

	}
	else if (fp == '/')
	{

		fp = div;

		printf("div = %d\n", fp(a, b));

		return fp(a, b);


	}
	else if (fp == '%')
	{

		fp = rem;

		printf("rem = %d\n", fp(a, b));

		return fp(a, b);

	}







}



