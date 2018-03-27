#include<stdio.h>
#define _CRT_NO_SECURE_WARNINGS

 int main(void)
{

	int num1 = 0, num2 = 0, result = 0;
	char var = 0;
	


	printf("사칙 연산 입력(정수) : ");


	scanf_s("%d", &num1);
	scanf_s("%c", &var);
	scanf_s("%d", &num2);



	if (var == '+')
	{
		
		
		result = num1 + num2;
	}
	else if (var == '*')
	{
		result = num1 * num2;
	}

	else if (var == '/')
	{
		result = num1 / num2;
	}

	else if (var == '-')
	{
		result = num1 - num2;
	}


	printf("%d%c%d = %d", num1, var, num2, result);
	


	return 0;

}