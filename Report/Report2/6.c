#include<stdio.h>

int main()
{
	int rich = 150, tuition = 100;
	double grade = 4.1;

	if (rich > 100)
	{
		if (grade > 4.0)
		{
			tuition = tuition * 0.8;
		}

		else
		{
			tuition = tuition * 0.6;
		}



	}

	printf("���� �б� ������ ��ϱ��� %d�Դϴ�.", tuition);
}