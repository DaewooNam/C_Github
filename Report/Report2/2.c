#include<stdio.h>

int main(void)
{

	int a = 0, b = 0;

	printf("�� ������ �Է��Ͻÿ� : ");
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