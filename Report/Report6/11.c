#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int quot(int a, int b, int* pa);

int main(void)
{

	int a, b, res;

	printf("�� ���� �Է� :");
	scanf("%d %d", &a, &b);



	if (quot(a, b, &res) == -1)
	{
		printf("0���� ���� �� �����ϴ�.");

	}
	else
	{
		printf("%d�� %d�� ���� ���� %d �Դϴ�.",a,b,res);

	}

	return 0;
}


int quot(int a, int b, int* pa)
{
	int temp = 0;


	// a,b ũ�� ��
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
	
	// ������
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