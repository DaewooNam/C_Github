#include<stdio.h>

int main()
{
	int num = 0, mul2 = 0, mul3 = 0, mul5 = 0, mul7 = 0;
	
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &num);


	mul2 = (num % 2 == 0);
	mul3 = (num % 3 == 0);
	mul5 = (num % 5 == 0);
	mul7 = (num % 7 == 0);



	if ((mul2 || mul3 || mul5 || mul7) == 1)
	{
		if (mul2 ==1)
			printf("2�� ����Դϴ�.\n");
		if (mul3 == 1)
			printf("3�� ��� �Դϴ�.\n");
		if (mul5 == 1)
			printf("5�� ����Դϴ�.\n");
		if (mul7 == 1)
			printf("7�� ����Դϴ�.\n");

	
	}


	return 0;

	

}