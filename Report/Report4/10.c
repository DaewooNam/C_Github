#include<stdio.h>


int main(void)
{
	//�ʱ�ȭ


	double res = 0.0;
	int min = 100, max = 0;
	int placeMax = 0, placeMin = 0;
	int ary[5] = { 7,9,4,8, 5 };


	// ù��° ��°�
	printf("5���� �ɻ������� ���� �Է� : ");

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", ary[i]);


	}

	// �ι�° ��°�
	// max&min ��and ��ġ


	for (int i = 0; i < 5; i++)
	{
		if (max < ary[i])
		{

			max = ary[i];
			placeMax = i;

		}

		if (min > ary[i])
		{

			min = ary[i];
			placeMin = i;

		}



	}

	ary[placeMax] = 0;
	ary[placeMin] = 0;

	printf("\n��ȿ���� : ");

	for (int i = 0; i < 5; i++)
	{
		if (ary[i] != 0)
		{
			printf("%d ", ary[i]);

		}

	}

	//3��° ��°�

	for (int i = 0; i < 5; i++)
	{

		res += ary[i];

	}

	printf("\n��� : %.1f", res / 3.0);












	return 0;
}