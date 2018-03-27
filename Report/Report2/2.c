#include<stdio.h>

int main(void)
{

	int a = 0, b = 0;

	printf("두 정수를 입력하시오 : ");
	scanf_s("%d %d",&a,&b);


	if (a > b)
	{
		printf("%d", a / b);
	}
	else
	{
		printf("%d", a%b);
	}


}