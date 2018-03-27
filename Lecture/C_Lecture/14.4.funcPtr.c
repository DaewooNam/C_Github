#include <stdio.h>

void funPtr(int(*fp)(int, int));// 함수값에 함수 값을 Input으로 두게 됨

int sum(int a, int b);
int min(int a, int b);
int mux(int a, int b);
int div(int a, int b);
int rem(int a, int b);

int main(void)
{
	int(*fp_sum)(int, int);
	int(*fp_min)(int, int);
	int(*fp_mux)(int, int);
	int(*fp_div)(int, int);
	int(*fp_rem)(int, int);
	
	fp_sum = sum;
	fp_min = min;
	fp_mux = mux;
	fp_div = div;
	fp_rem = rem;

	/*
	printf("sum     = %d\n", sum(10,10));
	printf("fp_sum  = %d\n", fp_sum(10,10));
	printf("********************************\n");
	printf("min     = %d\n", min(10, 10));
	printf("fp_min  = %d\n", fp_min(10, 10));
	printf("********************************\n");
	printf("mux     = %d\n", mux(10, 10));
	printf("fp_mux  = %d\n", fp_mux(10, 10));
	printf("********************************\n");
	printf("div    = %d\n", div(10, 10));
	printf("fp_div = %d\n", fp_div(10, 10));
	printf("********************************\n");
	printf("rem    = %d\n", rem(10, 10));
	printf("fp_rem = %d\n", fp_rem(10, 10));
	*/
	
	
	funcPtr(sum);
	




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


void funPtr(int(*fp)(int, int))
{

	int a = 10, b = 10;
	printf("fp = %d", fp(a, b));
	

}