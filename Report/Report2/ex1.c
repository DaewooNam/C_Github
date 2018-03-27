#include<stdio.h>

int main()
{
	int num1, num2, num3, max, min;

	printf("3개의 정수를 입력하시오 :");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	if (num1 > num2)
	{
		max = num1;
		min = num2;
	}
	else
	{
		max = num2;
		min = num1;
	}


	if (max > num3)
	{
		max = max;
	}
	else
	{
		max = num3;
	}



	if (min < num3)
	{
		min = min;
	}
	else
	{
		min = num3;
	}


	printf("Max = %d, Min = %d", max, min);




}