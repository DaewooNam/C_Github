#include<stdio.h>

int main()
{
	int num = 0, mul2 = 0, mul3 = 0, mul5 = 0, mul7 = 0;
	
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);


	mul2 = (num % 2 == 0);
	mul3 = (num % 3 == 0);
	mul5 = (num % 5 == 0);
	mul7 = (num % 7 == 0);



	if ((mul2 || mul3 || mul5 || mul7) == 1)
	{
		if (mul2 ==1)
			printf("2의 배수입니다.\n");
		if (mul3 == 1)
			printf("3의 배수 입니다.\n");
		if (mul5 == 1)
			printf("5의 배수입니다.\n");
		if (mul7 == 1)
			printf("7의 배수입니다.\n");

	
	}


	return 0;

	

}