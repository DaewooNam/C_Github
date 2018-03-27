#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int quot(int a, int b, int* pa);

int main(void)
{

	int a, b, res;

	printf("두 정수 입력 :");
	scanf("%d %d", &a, &b);



	if (quot(a, b, &res) == -1)
	{
		printf("0으로 나눌 수 없습니다.");

	}
	else
	{
		printf("%d를 %d로 나눈 몫은 %d 입니다.",a,b,res);

	}

	return 0;
}


int quot(int a, int b, int* pa)
{
	int temp = 0;


	// a,b 크기 비교
	if (a < b)
	{
		temp = a;
		a	 = b;
		b    = temp;

	}
	else
	{
		a = a;
		b = b;

	}
	
	// 나누셈
	if (b != 0)
	{
			
		*pa = a / b;

		return *pa;

	
	
	}

	else
	{
		return -1;
		
	}

	
}