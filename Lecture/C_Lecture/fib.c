#include<stdio.h>
int fib(int n);

int main(void)
{

	int num = 0;
	int res = 0;
	printf("정수값을 입력하시오:");
	scanf_s("%d", &num);


	res = fib(num);


	printf("결과 값 : %d", res);

	return 0;

}


int fib(int n)
{

	int num[100];

	num[0] = 0;
	num[1] = 1;


	for (int i = 2; i <= n; i++)
	{



		num[i] =  num[i - 1] + num[i - 2];


	}

	return num[n];

		
	
}